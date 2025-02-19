//
// Generated By: dol2asm
// Translation Unit: GXFifo
//

#include "dolphin/gx/GXFifo.h"
#include "dolphin/gx/GX.h"
#include "dol2asm.h"

//
// Forward References:
//

static void GXCPInterruptHandler(OSInterrupt, OSContext* ctx);
static void GXInitFifoLimits(GXFifoObj* fifo, u32 hi_watermark, u32 lo_watermark);
void GXSetCPUFifo(void);
void GXSetGPFifo(void);
void GXSetBreakPtCallback(void);
void __GXFifoInit(void);
void __GXFifoReadEnable(void);
void __GXFifoReadDisable(void);
void __GXFifoLink(u8);
void __GXWriteFifoIntEnable(u8, u8);
void __GXWriteFifoIntReset(u8, u8);
void __GXCleanGPFifo(void);
u32 GXGetGPFifo(void);

//
// External References:
//

void PPCSync(void);
void OSSetCurrentContext(OSContext*);
void OSClearContext(OSContext*);
void GXFlush(void);

//
// Declarations:
//

/* ############################################################################################## */
/* 80451948-8045194C 000E48 0004+00 4/3 0/0 0/0 .sbss            CPUFifo */
static GXFifoObj* CPUFifo;

/* 8045194C-80451950 000E4C 0004+00 4/3 0/0 0/0 .sbss            GPFifo */
static GXFifoObj* GPFifo;

/* 80451950-80451954 000E50 0004+00 4/3 0/0 0/0 .sbss            __GXCurrentThread */
static OSThread* __GXCurrentThread;

/* 80451954-80451958 000E54 0004+00 3/3 0/0 0/0 .sbss            None */
static u8 data_80451954[4];

/* 80451958-8045195C 000E58 0004+00 2/2 0/0 0/0 .sbss            GXOverflowSuspendInProgress */
static u32 GXOverflowSuspendInProgress;

/* 8045195C-80451960 000E5C 0004+00 2/2 0/0 0/0 .sbss            BreakPointCB */
static void (*BreakPointCB)(void);

/* 80451960-80451968 000E60 0004+04 1/1 0/0 0/0 .sbss            __GXOverflowCount */
static u32 __GXOverflowCount;

/* 8035A5A8-8035A6DC 354EE8 0134+00 1/1 0/0 0/0 .text            GXCPInterruptHandler */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void GXCPInterruptHandler(OSInterrupt, OSContext* ctx) {
    nofralloc
#include "asm/dolphin/gx/GXFifo/GXCPInterruptHandler.s"
}
#pragma pop

/* static void GXCPInterruptHandler(__OSInterrupt, OSContext* ctx) {
    OSContext sp10;

    __GXData->field_0xc = __cpReg[0];
    if (((__GXData->field_0x8 >> 3) & 1) && ((__GXData->field_0xc >> 1) & 1)) {
        OSResumeThread(__GXCurrentThread);
        GXOverflowSuspendInProgress = 0;
        __GXWriteFifoIntReset(1, 1);
        __GXWriteFifoIntEnable(1, 0);
    }

    if (((__GXData->field_0x8 >> 2) & 1) && (__GXData->field_0xc & 1)) {
        __GXOverflowCount++;
        __GXWriteFifoIntEnable(0, 1);
        __GXWriteFifoIntReset(1, 0);
        GXOverflowSuspendInProgress = 1;
        OSSuspendThread(__GXCurrentThread);
    }

    if (((__GXData->field_0x8 >> 5) & 1) && ((__GXData->field_0xc >> 4) & 1)) {
        __GXData->field_0x8 = __GXData->field_0x8 & ~(1 << 5);
        __cpReg[1] = __GXData->field_0x8;

        if (BreakPointCB != NULL) {
            OSClearContext(&sp10);
            OSSetCurrentContext(&sp10);
            BreakPointCB();
            OSClearContext(&sp10);
            OSSetCurrentContext(ctx);
        }
    }
} */

/* 8035A6DC-8035A748 35501C 006C+00 0/0 2/2 0/0 .text            GXInitFifoBase */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void GXInitFifoBase(GXFifoObj* fifo, void* base, u32 size) {
    nofralloc
#include "asm/dolphin/gx/GXFifo/GXInitFifoBase.s"
}
#pragma pop

/* 8035A748-8035A7B8 355088 0070+00 1/1 1/1 0/0 .text            GXInitFifoPtrs */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void GXInitFifoPtrs(GXFifoObj* fifo, void* read_ptr, void* write_ptr) {
    nofralloc
#include "asm/dolphin/gx/GXFifo/GXInitFifoPtrs.s"
}
#pragma pop

/* 8035A7B8-8035A7C4 3550F8 000C+00 1/1 0/0 0/0 .text            GXInitFifoLimits */
static void GXInitFifoLimits(GXFifoObj* fifo, u32 hi_watermark, u32 lo_watermark) {
    fifo->high_wtrmark = hi_watermark;
    fifo->low_wtrmark = lo_watermark;
}

/* 8035A7C4-8035A8EC 355104 0128+00 1/1 1/1 0/0 .text            GXSetCPUFifo */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void GXSetCPUFifo(void) {
    nofralloc
#include "asm/dolphin/gx/GXFifo/GXSetCPUFifo.s"
}
#pragma pop

/* 8035A8EC-8035AA8C 35522C 01A0+00 1/1 1/1 0/0 .text            GXSetGPFifo */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void GXSetGPFifo(void) {
    nofralloc
#include "asm/dolphin/gx/GXFifo/GXSetGPFifo.s"
}
#pragma pop

/* 8035AA8C-8035AAC0 3553CC 0034+00 0/0 1/1 0/0 .text            GXSaveCPUFifo */
void GXSaveCPUFifo(GXFifoObj* fifo) {
    GXFlush();
    __GXSaveCPUFifoAux(fifo);
}

/* 8035AAC0-8035AB88 355400 00C8+00 1/1 0/0 0/0 .text            __GXSaveCPUFifoAux */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __GXSaveCPUFifoAux(GXFifoObj* fifo) {
    nofralloc
#include "asm/dolphin/gx/GXFifo/__GXSaveCPUFifoAux.s"
}
#pragma pop

/* 8035AB88-8035ABD8 3554C8 0050+00 0/0 2/2 0/0 .text            GXGetGPStatus */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void GXGetGPStatus(GXBool* overhi, GXBool* underlo, GXBool* read_idle, GXBool* cmd_idle, GXBool* breakpoint) {
    nofralloc
#include "asm/dolphin/gx/GXFifo/GXGetGPStatus.s"
}
#pragma pop

/* 8035ABD8-8035ABE0 355518 0008+00 0/0 1/1 0/0 .text            GXGetFifoBase */
void* GXGetFifoBase(GXFifoObj* fifo) {
    return fifo->base;
}

/* 8035ABE0-8035ABE8 355520 0008+00 0/0 1/1 0/0 .text            GXGetFifoSize */
u32 GXGetFifoSize(GXFifoObj* fifo) {
    return fifo->size;
}

/* 8035ABE8-8035AC2C 355528 0044+00 0/0 1/1 0/0 .text            GXSetBreakPtCallback */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void GXSetBreakPtCallback(void) {
    nofralloc
#include "asm/dolphin/gx/GXFifo/GXSetBreakPtCallback.s"
}
#pragma pop

/* 8035AC2C-8035AC78 35556C 004C+00 0/0 1/1 0/0 .text            __GXFifoInit */
void __GXFifoInit(void) {
    __OSSetInterruptHandler(0x11, GXCPInterruptHandler);
    __OSUnmaskInterrupts(0x4000);
    __GXCurrentThread = OSGetCurrentThread();
    GXOverflowSuspendInProgress = 0;
    CPUFifo = NULL;
    GPFifo = NULL;
}

/* 8035AC78-8035AC9C 3555B8 0024+00 1/1 0/0 0/0 .text            __GXFifoReadEnable */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __GXFifoReadEnable(void) {
    nofralloc
#include "asm/dolphin/gx/GXFifo/__GXFifoReadEnable.s"
}
#pragma pop

/* 8035AC9C-8035ACC0 3555DC 0024+00 1/1 0/0 0/0 .text            __GXFifoReadDisable */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __GXFifoReadDisable(void) {
    nofralloc
#include "asm/dolphin/gx/GXFifo/__GXFifoReadDisable.s"
}
#pragma pop

/* 8035ACC0-8035ACF4 355600 0034+00 2/2 0/0 0/0 .text            __GXFifoLink */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __GXFifoLink(u8) {
    nofralloc
#include "asm/dolphin/gx/GXFifo/__GXFifoLink.s"
}
#pragma pop

/* 8035ACF4-8035AD24 355634 0030+00 3/3 0/0 0/0 .text            __GXWriteFifoIntEnable */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __GXWriteFifoIntEnable(u8, u8) {
    nofralloc
#include "asm/dolphin/gx/GXFifo/__GXWriteFifoIntEnable.s"
}
#pragma pop

/* 8035AD24-8035AD54 355664 0030+00 3/3 0/0 0/0 .text            __GXWriteFifoIntReset */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __GXWriteFifoIntReset(u8, u8) {
    nofralloc
#include "asm/dolphin/gx/GXFifo/__GXWriteFifoIntReset.s"
}
#pragma pop

/* 8035AD54-8035AE54 355694 0100+00 0/0 1/1 0/0 .text            __GXCleanGPFifo */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __GXCleanGPFifo(void) {
    nofralloc
#include "asm/dolphin/gx/GXFifo/__GXCleanGPFifo.s"
}
#pragma pop

/* 8035AE54-8035AEA0 355794 004C+00 0/0 1/1 0/0 .text            GXSetCurrentGXThread */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm OSThread* GXSetCurrentGXThread(void) {
    nofralloc
#include "asm/dolphin/gx/GXFifo/GXSetCurrentGXThread.s"
}
#pragma pop

/* 8035AEA0-8035AEA8 -00001 0008+00 0/0 0/0 0/0 .text            GXGetCurrentGXThread */
OSThread* GXGetCurrentGXThread(void) {
    return *(OSThread**)(&__GXCurrentThread);
}

/* 8035AEA8-8035AEB0 -00001 0008+00 0/0 0/0 0/0 .text            GXGetCPUFifo */
GXFifoObj* GXGetCPUFifo(void) {
    return *(GXFifoObj**)(&CPUFifo);
}

/* 8035AEB0-8035AEB8 -00001 0008+00 0/0 0/0 0/0 .text            GXGetGPFifo */
u32 GXGetGPFifo(void) {
    return *(u32*)(&GPFifo);
}
