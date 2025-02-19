//
// Generated By: dol2asm
// Translation Unit: CARDDir
//

#include "dolphin/card/CARDDir.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

void __CARDGetDirBlock();
static void WriteCallback();
static void EraseCallback();
void __CARDUpdateDir();

//
// External References:
//

SECTION_INIT void memcpy();
void DCStoreRange();
void __CARDEraseSector();
void __CARDPutControlBlock();
void __CARDWrite();
void __CARDCheckSum();
extern u8 __CARDBlock[544];

//
// Declarations:
//

/* 8035577C-80355784 3500BC 0008+00 0/0 10/10 0/0 .text            __CARDGetDirBlock */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __CARDGetDirBlock() {
    nofralloc
#include "asm/dolphin/card/CARDDir/__CARDGetDirBlock.s"
}
#pragma pop

/* 80355784-80355854 3500C4 00D0+00 1/1 0/0 0/0 .text            WriteCallback */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void WriteCallback() {
    nofralloc
#include "asm/dolphin/card/CARDDir/WriteCallback.s"
}
#pragma pop

/* 80355854-8035591C 350194 00C8+00 1/1 0/0 0/0 .text            EraseCallback */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void EraseCallback() {
    nofralloc
#include "asm/dolphin/card/CARDDir/EraseCallback.s"
}
#pragma pop

/* 8035591C-803559E0 35025C 00C4+00 0/0 4/4 0/0 .text            __CARDUpdateDir */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __CARDUpdateDir() {
    nofralloc
#include "asm/dolphin/card/CARDDir/__CARDUpdateDir.s"
}
#pragma pop
