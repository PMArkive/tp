//
// Generated By: dol2asm
// Translation Unit: OSMemory
//

#include "dolphin/os/OSMemory.h"
#include "dol2asm.h"
#include "dolphin/os/OSReset.h"
#include "dolphin/types.h"

//
// External References:
//

void DCInvalidateRange();
void DCFlushRange();
void __OSUnhandledException();
void OSRegisterResetFunction();
extern u8 __OSErrorTable[68 + 12 /* padding */];

//
// Declarations:
//

/* 8033EC6C-8033ECA8 3395AC 003C+00 1/0 0/0 0/0 .text            OnReset */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm s32 OnReset(s32 param_0) {
    nofralloc
#include "asm/dolphin/os/OSMemory/OnReset.s"
}
#pragma pop

/* 8033ECA8-8033ED14 3395E8 006C+00 1/1 0/0 0/0 .text            MEMIntrruptHandler */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void MEMIntrruptHandler(OSInterrupt interrupt, struct OSContext* context) {
    nofralloc
#include "asm/dolphin/os/OSMemory/MEMIntrruptHandler.s"
}
#pragma pop

/* 8033ED14-8033EDD8 339654 00C4+00 0/0 1/1 0/0 .text            OSProtectRange */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void OSProtectRange(u32 channel, void* address, u32 nBytes, u32 control) {
    nofralloc
#include "asm/dolphin/os/OSMemory/OSProtectRange.s"
}
#pragma pop

/* 8033EDD8-8033EE58 339718 0080+00 1/1 0/0 0/0 .text            Config24MB */
static asm void Config24MB(void) {
    // clang-format off
    nofralloc

    li r7, 0
    lis r4, 0x0000
    addi r4, r4, 0x0002
    lis r3, 0x8000
    addi r3, r3, 0x01FF
    lis r6, 0x0100
    addi r6, r6, 0x0002
    lis r5, 0x8100
    addi r5, r5, 0x00FF
    isync 
    mtdbatu 0, r7
    mtdbatl 0, r4
    mtdbatu 0, r3
    isync 
    mtibatu 0, r7
    mtibatl 0, r4
    mtibatu 0, r3
    isync 
    mtdbatu 2, r7
    mtdbatl 2, r6
    mtdbatu 2, r5
    isync 
    mtibatu 2, r7
    mtibatl 2, r6
    mtibatu 2, r5
    isync 
    mfmsr r3
    ori r3, r3, 0x30
    mtspr 0x1b, r3
    mflr r3
    mtspr 0x1a, r3
    rfi
    // clang-format on
}

/* 8033EE58-8033EED8 339798 0080+00 1/1 0/0 0/0 .text            Config48MB */
static asm void Config48MB(void) {
    // clang-format off
    nofralloc

    li r7, 0
    lis r4, 0x0000
    addi r4, r4, 0x0002
    lis r3, 0x8000
    addi r3, r3, 0x03FF
    lis r6, 0x0200
    addi r6, r6, 0x0002
    lis r5, 0x8200
    addi r5, r5, 0x01FF
    isync 
    mtdbatu 0, r7
    mtdbatl 0, r4
    mtdbatu 0, r3
    isync 
    mtibatu 0, r7
    mtibatl 0, r4
    mtibatu 0, r3
    isync 
    mtdbatu 2, r7
    mtdbatl 2, r6
    mtdbatu 2, r5
    isync 
    mtibatu 2, r7
    mtibatl 2, r6
    mtibatu 2, r5
    isync 
    mfmsr r3
    ori r3, r3, 0x30
    mtspr 0x1b, r3
    mflr r3
    mtspr 0x1a, r3
    rfi
    // clang-format on
}

/* 8033EED8-8033EEF0 339818 0018+00 1/1 0/0 0/0 .text            RealMode */
static asm void RealMode(register void* config){
    // clang-format off
    nofralloc

    clrlwi config, config, 2
    mtspr 0x1a, config
    mfmsr config
    rlwinm config, config, 0, 0x1c, 0x19
    mtspr 0x1b, config
    rfi
    // clang-format on
}

/* ############################################################################################## */
/* 803D07D8-803D07E8 -00001 0010+00 1/1 0/0 0/0 .data            ResetFunctionInfo */
static OSResetFunctionInfo ResetFunctionInfo = {
    OnReset,
    0x7F,
    NULL,
    NULL,
};

/* 8033EEF0-8033F008 339830 0118+00 0/0 1/1 0/0 .text            __OSInitMemoryProtection */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __OSInitMemoryProtection(void) {
    nofralloc
#include "asm/dolphin/os/OSMemory/__OSInitMemoryProtection.s"
}
#pragma pop
