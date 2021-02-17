#ifndef __Z64OVL_OS_TYPES_INCLUDED__
#define __Z64OVL_OS_TYPES_INCLUDED__

/* OSThread */
typedef struct {
    struct {
        float odd;
        float even;
    } f;
} __OSfp;

typedef struct {
    uint32_t flag;
    uint32_t count;
    uint64_t time;
} __OSThreadprofile_s;

typedef struct {
    uint64_t at;
    uint64_t v0, v1;
    uint64_t a0, a1, a2, a3;
    uint64_t t0, t1, t2, t3;
    uint64_t t4, t5, t6, t7;
    uint64_t s0, s1, s2, s3;
    uint64_t s4, s5, s6, s7;
    uint64_t t8, t9, gp, sp;
    uint64_t s8, ra, lo, hi;
    uint32_t sr, pc;
    uint32_t cause;
    uint32_t badvaddr;
    uint32_t rcp;
    uint32_t fpcsr;
    __OSfp fp0, fp2, fp4, fp6;
    __OSfp fp8, fp10, fp12, fp14;
    __OSfp fp16, fp18, fp20, fp22;
    __OSfp fp24, fp26, fp28, fp30;
} __OSThreadContext;

typedef int32_t OSPri;
typedef int32_t OSId;

typedef struct OSThread_s OSThread;
struct OSThread_s {
    OSThread*            next;
    OSPri                priority;
    OSThread**           queue;
    OSThread*            tlnext;
    uint16_t             state;
    uint16_t             flags;
    OSId                 id;
    int32_t              fp;
    __OSThreadprofile_s* thprof;
    __OSThreadContext    context;
};

/* OSMesg */
typedef void* OSMesg;

typedef struct OSMesgQueue_s {
    /* 0x00 */ OSThread*   mtqueue;
    /* 0x04 */ OSThread*   fullqueue;
    /* 0x08 */ int32_t     validCount;
    /* 0x0C */ int32_t     first;
    /* 0x10 */ int32_t     msgCount;
    /* 0x14 */ OSMesg*     msg;
    /* 0x18 */
} OSMesgQueue;

/* OSTask */

typedef struct OSTask_t OSTask;
struct OSTask_t {
    uint32_t    type;
    uint32_t    flags;
    uint64_t*   ucode_boot;
    uint32_t    ucode_boot_size;
    uint64_t*   ucode;
    uint32_t    ucode_size;
    uint64_t*   ucode_data;
    uint32_t    ucode_data_size;
    uint64_t*   dram_stack;
    uint32_t    dram_stack_size;
    uint64_t*   output_buff;
    uint64_t*   output_buff_size;
    uint64_t*   data_ptr;
    uint32_t    data_size;
    uint64_t*   yield_data_prt;
    uint32_t    yield_data_size;
};

/* OSVi */

typedef struct {
    uint32_t ctrl;
    uint32_t width;
    uint32_t burst;
    uint32_t vSync;
    uint32_t hSync;
    uint32_t leap;
    uint32_t hStart;
    uint32_t xScale;
    uint32_t vCurrent;
} OSViCommonRegs;

typedef struct {
    uint32_t origin;
    uint32_t yScale;
    uint32_t vStart;
    uint32_t vBurst;
    uint32_t vIntr;
} OSViFieldRegs;

typedef struct {
    uint8_t        type;
    OSViCommonRegs comRegs;
    OSViFieldRegs  fldRegs[2];
} OSViMode;

typedef struct cfbinfo_s {
    void*       framebuffer;
    void*       swapbuffer;
    OSViMode*   vimode;
    uint32_t    vispecial;
    uint8_t     flag;
    int8_t      life_max;
    int8_t      life;
    float       vixscale, viyscale;
} cfbinfo_t;

typedef struct irqmgr_client_s {
    struct irqmgr_client_s* next;
    OSMesgQueue*            msgQ;
} irqmgr_client_t;

typedef uint64_t OSTime;

typedef struct OSScTask {
    struct OSScTask*    next;
    uint32_t            state;
    uint32_t            flags;
    cfbinfo_t*          framebuffer;
    OSTask              list;
    OSMesgQueue*        msgQ;
    OSMesg              msg;
    OSTime              startTime;
    OSTime              totalTime;
} OSScTask;

typedef struct OSScMsg {
    int16_t type;
    char misc[30];
} OSScMsg;

typedef struct {
    OSMesgQueue interruptQ;
    OSMesg      intBuf[8];
    OSMesgQueue cmdQ;
    OSMesg      cmdMsgBuf[8];
    OSThread    thread;
    OSScTask*   audioListHead;
    OSScTask*   graphListHead;
    OSScTask*   audioListTail;
    OSScTask*   graphListTail;
    OSScTask*   curRSPTask;
    OSScTask*   curRDPTask;
    uint32_t    frameCount;
    int32_t     doAudio;
    cfbinfo_t*  current_swapbuffer;
    cfbinfo_t*  pending_swapbuffer1;
    cfbinfo_t*  pending_swapbuffer2;
    int 	    firsttime;
    irqmgr_client_t irqclient;
} OSSched;

typedef struct {
    union {
        struct {
            uint16_t    a       : 1;
            uint16_t    b       : 1;
            uint16_t    z       : 1;
            uint16_t    s       : 1;
            uint16_t    du      : 1;
            uint16_t    dd      : 1;
            uint16_t    dl      : 1;
            uint16_t    dr      : 1;
            uint16_t    _pad    : 2;
            uint16_t    l       : 1;
            uint16_t    r       : 1;
            uint16_t    cu      : 1;
            uint16_t    cd      : 1;
            uint16_t    cl      : 1;
            uint16_t    cr      : 1;
        };
        /* 0x00 */ uint16_t button;
    };
    /* 0x02 */ int8_t  stick_x;
    /* 0x03 */ int8_t  stick_y;
    /* 0x04 */ uint8_t errno;
    /* 0x06 */
} OSContPad;

typedef struct {
    /* 0x00 */ uint32_t     romaddr;
    /* 0x04 */ void*        dstptr;
    /* 0x08 */ uint32_t     dstsiz;
    /* 0x0C */ char*        _file;
    /* 0x10 */ uint32_t     _line;
    /* 0x14 */ int32_t      pri;
    /* 0x18 */ OSMesgQueue* mq;
    /* 0x1C */ OSMesg       m;
    /* 0x20 */
} dma_t;

typedef struct {
    /* 0x00 */ uint32_t vrom_start;
    /* 0x04 */ uint32_t vrom_end;
    /* 0x08 */ uint32_t rom_start;
    /* 0x0C */ uint32_t rom_end;
    /* 0x10 */
} dma_entry_t;

#endif /* __Z64OVL_OS_TYPES_INCLUDED__ */