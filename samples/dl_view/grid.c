#include "dl_view.h"

static void grid_construct(en_dl_view_t* this, int x, int z, int square_size)
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
    gDPSetPrimColor((this->grid.tail)++, 0, 0, 0x80, 0x80, 0x80, 0xC0);
    // X Axis Lines
    gSPVertex((this->grid.tail)++, buf_x, 18, 0);
    for (int i = 0; i <= (x*2 + 2); i += 2) {
        if (i == x) {
            gDPSetPrimColor((this->grid.tail)++, 0, 0, 0xFF, 0x00, 0x00, 0xC0);
            gSPLine3D((this->grid.tail)++, i, i + 1, 0);
            gDPSetPrimColor((this->grid.tail)++, 0, 0, 0x80, 0x80, 0x80, 0xC0);
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
            gDPSetPrimColor((this->grid.tail)++, 0, 0, 0x00, 0x00, 0xFF, 0xC0);
            gSPLine3D((this->grid.tail)++, i, i + 1, 0);
            gDPSetPrimColor((this->grid.tail)++, 0, 0, 0x80, 0x80, 0x80, 0xC0);
            continue;
        }
        gSPLine3D((this->grid.tail)++, i, i + 1, 0);
    }
    gSPEndDisplayList((this->grid.tail)++);

    // Matrix
    this->grid.translate = (Mtx*)this->grid.tail;
    guTranslate(this->grid.translate, -((x * square_size) / 2), 0.0f, -((z * square_size) / 2));
}

static void grid_display(en_dl_view_t* this, global_t* gl)
{
    gfx_t* gfx = gl->state.gfx_context;
    disp_buf_t* xlu = &gfx->poly_xlu;

    // Load L3DEX2
    gSPLoadUcode(xlu->p++
    , MIPS_KSEG0_TO_PHYS(gspL3DEX2_fifoTextStart)
    , MIPS_KSEG0_TO_PHYS(gspL3DEX2_fifoDataStart)
    );

    // Draw Grid
    z_matrix_push();
    {
        zh_init_line(gfx, &xlu->p, &xlu->d, 0);
        gSPMatrix(xlu->p++, this->grid.translate, G_MTX_MODELVIEW | G_MTX_LOAD | G_MTX_NOPUSH);
        gSPDisplayList(xlu->p++, this->grid.head);
    }
    z_matrix_pop();

    // Load F3DEX2
    gSPLoadUcode(xlu->p++
    , MIPS_KSEG0_TO_PHYS(gspF3DEX2_NoN_fifoTextStart)
    , MIPS_KSEG0_TO_PHYS(gspF3DEX2_NoN_fifoDataStart)
    );
}