#ifndef OSCONTEXT_H
#define OSCONTEXT_H

#include "dolphin/types.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OSContext {
    /* 0x000 */ u32 gpr[32];
    /* 0x080 */ u32 cr;
    /* 0x084 */ u32 lr;
    /* 0x088 */ u32 ctr;
    /* 0x08C */ u32 xer;
    /* 0x090 */ f64 fpr[32];
    /* 0x190 */ u32 field_0x190;
    /* 0x194 */ u32 fpscr;
    /* 0x198 */ u32 srr0;
    /* 0x19C */ u32 srr1;
    /* 0x1A0 */ u16 mode;
    /* 0x1A2 */ u16 state;
    /* 0x1A4 */ u32 gqr[8];
    /* 0x1C4 */ f64 ps[32];
} OSContext;

OSContext* OS_CURRENT_CONTEXT : 0x800000D4;
OSContext* OS_CURRENT_FPU_CONTEXT : 0x800000D8;

void __OSLoadFPUContext(void);
void __OSSaveFPUContext(s32 unused0, s32 unused1, OSContext* context);
void OSSaveFPUContext(OSContext* context);
void OSSetCurrentContext(OSContext* context);
OSContext* OSGetCurrentContext(void);
void OSSaveContext(OSContext* context);
void OSLoadContext(OSContext* context);
void OSClearContext(OSContext* context);
void OSInitContext(OSContext* context, u32 pc, u32 lr);
void OSDumpContext(OSContext* context);
static void OSSwitchFPUContext(u8 err, OSContext* context);
void __OSContextInit(void);
void OSFillFPUContext(OSContext* context);

#ifdef __cplusplus
};
#endif

#endif /* OSCONTEXT_H */
