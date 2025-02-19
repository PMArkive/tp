//
// Generated By: dol2asm
// Translation Unit: CARDRead
//

#include "dolphin/card/CARDRead.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

void __CARDSeek();
static void ReadCallback();
static void CARDReadAsync();
void CARDRead();

//
// External References:
//

void DCInvalidateRange();
void __CARDDefaultApiCallback();
void __CARDSyncCallback();
void __CARDGetControlBlock();
void __CARDPutControlBlock();
void __CARDSync();
void __CARDRead();
void __CARDGetFatBlock();
void __CARDGetDirBlock();
void __CARDIsReadable();
extern u8 __CARDBlock[544];

//
// Declarations:
//

/* 803584A0-80358658 352DE0 01B8+00 1/1 1/1 0/0 .text            __CARDSeek */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __CARDSeek() {
    nofralloc
#include "asm/dolphin/card/CARDRead/__CARDSeek.s"
}
#pragma pop

/* 80358658-80358788 352F98 0130+00 1/1 0/0 0/0 .text            ReadCallback */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void ReadCallback() {
    nofralloc
#include "asm/dolphin/card/CARDRead/ReadCallback.s"
}
#pragma pop

/* 80358788-803588CC 3530C8 0144+00 1/1 0/0 0/0 .text            CARDReadAsync */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void CARDReadAsync() {
    nofralloc
#include "asm/dolphin/card/CARDRead/CARDReadAsync.s"
}
#pragma pop

/* 803588CC-80358914 35320C 0048+00 0/0 2/2 0/0 .text            CARDRead */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void CARDRead() {
    nofralloc
#include "asm/dolphin/card/CARDRead/CARDRead.s"
}
#pragma pop
