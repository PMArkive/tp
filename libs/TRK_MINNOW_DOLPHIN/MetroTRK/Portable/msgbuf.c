//
// Generated By: dol2asm
// Translation Unit: MetroTRK/Portable/msgbuf
//

#include "TRK_MINNOW_DOLPHIN/MetroTRK/Portable/msgbuf.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

void TRKReadBuffer_ui32();
void TRKReadBuffer_ui8();
void TRKReadBuffer1_ui64();
void TRKAppendBuffer_ui32();
void TRKAppendBuffer_ui8();
void TRKAppendBuffer1_ui64();
void TRKReadBuffer();
void TRKAppendBuffer();
void TRKResetBuffer();
void TRKReleaseBuffer();
void TRKGetBuffer();
void TRKGetFreeBuffer();
void TRKInitializeMessageBuffers();

//
// External References:
//

SECTION_INIT void TRK_memset();
SECTION_INIT void TRK_memcpy();
void usr_puts_serial();
u8 TRKReleaseMutex();
u8 TRKAcquireMutex();
u8 TRKInitializeMutex();
SECTION_BSS extern u8 gTRKBigEndian[4 + 4 /* padding */];

//
// Declarations:
//

/* 8036D01C-8036D10C 36795C 00F0+00 0/0 2/2 0/0 .text            TRKReadBuffer_ui32 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void TRKReadBuffer_ui32() {
    nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/MetroTRK/Portable/msgbuf/TRKReadBuffer_ui32.s"
}
#pragma pop

/* 8036D10C-8036D1A4 367A4C 0098+00 0/0 1/1 0/0 .text            TRKReadBuffer_ui8 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void TRKReadBuffer_ui8() {
    nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/MetroTRK/Portable/msgbuf/TRKReadBuffer_ui8.s"
}
#pragma pop

/* 8036D1A4-8036D28C 367AE4 00E8+00 0/0 2/2 0/0 .text            TRKReadBuffer1_ui64 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void TRKReadBuffer1_ui64() {
    nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/MetroTRK/Portable/msgbuf/TRKReadBuffer1_ui64.s"
}
#pragma pop

/* 8036D28C-8036D388 367BCC 00FC+00 0/0 2/2 0/0 .text            TRKAppendBuffer_ui32 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void TRKAppendBuffer_ui32() {
    nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/MetroTRK/Portable/msgbuf/TRKAppendBuffer_ui32.s"
}
#pragma pop

/* 8036D388-8036D3F0 367CC8 0068+00 0/0 8/8 0/0 .text            TRKAppendBuffer_ui8 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void TRKAppendBuffer_ui8() {
    nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/MetroTRK/Portable/msgbuf/TRKAppendBuffer_ui8.s"
}
#pragma pop

/* 8036D3F0-8036D4EC 367D30 00FC+00 0/0 2/2 0/0 .text            TRKAppendBuffer1_ui64 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void TRKAppendBuffer1_ui64() {
    nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/MetroTRK/Portable/msgbuf/TRKAppendBuffer1_ui64.s"
}
#pragma pop

/* 8036D4EC-8036D578 367E2C 008C+00 0/0 1/1 0/0 .text            TRKReadBuffer */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void TRKReadBuffer() {
    nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/MetroTRK/Portable/msgbuf/TRKReadBuffer.s"
}
#pragma pop

/* 8036D578-8036D61C 367EB8 00A4+00 0/0 3/3 0/0 .text            TRKAppendBuffer */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void TRKAppendBuffer() {
    nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/MetroTRK/Portable/msgbuf/TRKAppendBuffer.s"
}
#pragma pop

/* 8036D61C-8036D64C 367F5C 0030+00 0/0 7/7 0/0 .text            TRKSetBufferPosition */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm s32 TRKSetBufferPosition(TRKBuffer*, u32) {
    nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/MetroTRK/Portable/msgbuf/TRKSetBufferPosition.s"
}
#pragma pop

/* 8036D64C-8036D68C 367F8C 0040+00 0/0 4/4 0/0 .text            TRKResetBuffer */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void TRKResetBuffer() {
    nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/MetroTRK/Portable/msgbuf/TRKResetBuffer.s"
}
#pragma pop

/* ############################################################################################## */
/* 8044D8C0-8044F270 07A5E0 19B0+00 4/4 0/0 0/0 .bss             gTRKMsgBufs */
static u8 gTRKMsgBufs[6576];

/* 8036D68C-8036D6F0 367FCC 0064+00 0/0 8/8 0/0 .text            TRKReleaseBuffer */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void TRKReleaseBuffer() {
    nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/MetroTRK/Portable/msgbuf/TRKReleaseBuffer.s"
}
#pragma pop

/* 8036D6F0-8036D71C 368030 002C+00 0/0 7/7 0/0 .text            TRKGetBuffer */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void TRKGetBuffer() {
    nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/MetroTRK/Portable/msgbuf/TRKGetBuffer.s"
}
#pragma pop

/* ############################################################################################## */
/* 803A26E0-803A2700 02ED40 001D+03 1/1 0/0 0/0 .rodata          @618 */
SECTION_RODATA static char const lit_618[] = "ERROR : No buffer available\n";
COMPILER_STRIP_GATE(0x803A26E0, &lit_618);

/* 8036D71C-8036D7E4 36805C 00C8+00 0/0 6/6 0/0 .text            TRKGetFreeBuffer */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void TRKGetFreeBuffer() {
    nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/MetroTRK/Portable/msgbuf/TRKGetFreeBuffer.s"
}
#pragma pop

/* 8036D7E4-8036D858 368124 0074+00 0/0 1/1 0/0 .text            TRKInitializeMessageBuffers */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void TRKInitializeMessageBuffers() {
    nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/MetroTRK/Portable/msgbuf/TRKInitializeMessageBuffers.s"
}
#pragma pop
