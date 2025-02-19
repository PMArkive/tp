/**
 * MWCriticalSection_gc.c
 * Description:
 */

#include "TRK_MINNOW_DOLPHIN/utils/gc/MWCriticalSection_gc.h"
#include "dolphin/os/OS.h"

/* 80372CA4-80372CC8 36D5E4 0024+00 0/0 2/2 0/0 .text            MWExitCriticalSection */
void MWExitCriticalSection(u32* section) {
    OSRestoreInterrupts(*section);
}

/* 80372CC8-80372CF8 36D608 0030+00 0/0 2/2 0/0 .text            MWEnterCriticalSection */
#ifdef NONMATCHING
void MWEnterCriticalSection(u32* section) {
    *section = OSDisableInterrupts();
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void MWEnterCriticalSection(u32* section) {
    nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/utils/gc/MWCriticalSection_gc/MWEnterCriticalSection.s"
}
#pragma pop
#endif

/* 80372CF8-80372CFC 36D638 0004+00 0/0 1/1 0/0 .text            MWInitializeCriticalSection */
void MWInitializeCriticalSection() {}
