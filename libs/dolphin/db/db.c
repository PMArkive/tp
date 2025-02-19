//
// Generated By: dol2asm
// Translation Unit: db
//

#include "dolphin/db/db.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

void DBInit();
void __DBExceptionDestinationAux();
void __DBExceptionDestination();
void __DBIsExceptionMarked();
void DBPrintf();

//
// External References:
//

void OSReport();
void PPCHalt();
void OSDumpContext();

//
// Declarations:
//

/* ############################################################################################## */
/* 80451708-8045170C 000C08 0004+00 2/2 0/0 0/0 .sbss            __DBInterface */
static u8 __DBInterface[4];

/* 8045170C-80451710 000C0C 0004+00 1/1 0/0 0/0 .sbss            DBVerbose */
static u8 DBVerbose[4];

/* 80346398-803463C0 340CD8 0028+00 0/0 1/1 0/0 .text            DBInit */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void DBInit() {
    nofralloc
#include "asm/dolphin/db/db/DBInit.s"
}
#pragma pop

/* ############################################################################################## */
/* 803D1368-803D1380 02E488 0018+00 1/1 0/0 0/0 .data            @9 */
SECTION_DATA static char lit_9[] = "DBExceptionDestination\n";;

/* 803463C0-80346408 340D00 0048+00 1/1 0/0 0/0 .text            __DBExceptionDestinationAux */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __DBExceptionDestinationAux() {
    nofralloc
#include "asm/dolphin/db/db/__DBExceptionDestinationAux.s"
}
#pragma pop

/* 80346408-80346418 340D48 0010+00 1/1 0/0 0/0 .text            __DBExceptionDestination */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __DBExceptionDestination() {
    nofralloc
#include "asm/dolphin/db/db/__DBExceptionDestination.s"
}
#pragma pop

/* 80346418-80346434 340D58 001C+00 0/0 1/1 0/0 .text            __DBIsExceptionMarked */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __DBIsExceptionMarked() {
    nofralloc
#include "asm/dolphin/db/db/__DBIsExceptionMarked.s"
}
#pragma pop

/* 80346434-80346484 340D74 0050+00 0/0 4/4 0/0 .text            DBPrintf */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void DBPrintf() {
    nofralloc
#include "asm/dolphin/db/db/DBPrintf.s"
}
#pragma pop
