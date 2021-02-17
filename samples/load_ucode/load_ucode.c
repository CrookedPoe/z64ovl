#include "load_ucode.h"

static void grid_construct(en_load_ucode_t* this, int x, int z, int square_size)
{
    // Create Grid
    Vtx* buf_x = AADDR(0x80400000, 0x0000);
    Vtx* buf_z = AADDR(0x80400000, ((x*2 + 2) * sizeof(Vtx)));
    this->grid.head = this->grid.tail = AADDR(0x80400000, (((x*2 + 2) * sizeof(Vtx)) + ((z*2 + 2) * sizeof(Vtx))));

    // Generate Vertices
    for (int i = 0; i <= (x*2 + 2); i += 2) {
            int l = (z * square_size); int o = (i / 2) * square_size;
            buf_x[i] = VtxXZ(0, o);
            buf_x[i + 1] = VtxXZ(l, o);
    }
    for (int i = 0; i <= z*2 + 2; i += 2) {
            int l = (x * square_size); int o = (i / 2) * square_size;
            buf_z[i] = VtxXZ(o, 0);
            buf_z[i + 1] = VtxXZ(o, l);
    }

    // Generate Display List
    gDPPipeSync((this->grid.tail)++);
    gDPSetPrimColor((this->grid.tail)++, 0, 0, 0x80, 0x80, 0x80, 0x80);
    // X Axis Lines
    gSPVertex((this->grid.tail)++, buf_x, 18, 0);
    for (int i = 0; i <= (x*2 + 2); i += 2) {
        if (i == x) {
            gDPSetPrimColor((this->grid.tail)++, 0, 0, 0xFF, 0x00, 0x00, 0x80);
            gSPLine3D((this->grid.tail)++, i, i + 1, 0);
            gDPSetPrimColor((this->grid.tail)++, 0, 0, 0x80, 0x80, 0x80, 0x80);
            continue;
        }
        gSPLine3D((this->grid.tail)++, i, i + 1, 0);
    }

    gDPPipeSync((this->grid.tail)++);
    gDPSetPrimColor((this->grid.tail)++, 0, 0, 0x80, 0x80, 0x80, 0x80);
    // Z Axis Lines
    gSPVertex((this->grid.tail)++, buf_z, 18, 0);
    for (int i = 0; i <= (z*2 + 2); i += 2) {
        if (i == z) {
            gDPSetPrimColor((this->grid.tail)++, 0, 0, 0x00, 0x00, 0xFF, 0x80);
            gSPLine3D((this->grid.tail)++, i, i + 1, 0);
            gDPSetPrimColor((this->grid.tail)++, 0, 0, 0x80, 0x80, 0x80, 0x80);
            continue;
        }
        gSPLine3D((this->grid.tail)++, i, i + 1, 0);
    }
    gSPEndDisplayList((this->grid.tail)++);
}

static void construct(en_load_ucode_t* this, global_t* gl)
{
    this->link = (actor_t*)LINK;
    this->actor.world = this->link->world;
    grid_construct(this, 8, 8, 16);
}

static void deconstruct(en_load_ucode_t* this, global_t* gl)
{
    /* Empty */
}

static void update(en_load_ucode_t* this, global_t* gl)
{
    /* Empty */
}

static void display(en_load_ucode_t* this, global_t* gl)
{
    gfx_t* gfx = gl->state.gfx_context;
    disp_buf_t* xlu = &gfx->poly_xlu;

    // Load L3DEX2
    gSPLoadUcode(xlu->p++
    , MIPS_KSEG0_TO_PHYS(gspL3DEX2_fifoTextStart)
    , MIPS_KSEG0_TO_PHYS(gspL3DEX2_fifoDataStart)
    );

    // Draw Grid
    zh_init_line(gfx, &xlu->p, &xlu->d, 1);
    gSPDisplayList(xlu->p++, this->grid.head);

    // Load F3DZEX2
    gSPLoadUcode(xlu->p++
    , MIPS_KSEG0_TO_PHYS(gspF3DZEX2_NoN_fifoTextStart)
    , MIPS_KSEG0_TO_PHYS(gspF3DZEX2_NoN_fifoDataStart)
    );

    AVAL(0x8009C064, uint32_t, 0x0000) = 0x00000000; // Kill Interface
    debug_text_t* dbtx = &this->dbtx;

    zh_draw_debug_text(gl, dbtx, 0xFFFFFFFF, 3, 5, "Ucode Loaded!");
}