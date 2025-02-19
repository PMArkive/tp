//
// Generated By: dol2asm
// Translation Unit: quat
//

#include "dolphin/mtx/quat.h"
#include "MSL_C/math.h"
#include "dol2asm.h"

//
// Declarations:
//

/* 80347418-80347474 341D58 005C+00 0/0 0/0 2/2 .text            PSQUATMultiply */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void PSQUATMultiply(const Quaternion* a, const Quaternion* b, Quaternion* ab) {
    nofralloc
#include "asm/dolphin/mtx/quat/PSQUATMultiply.s"
}
#pragma pop

/* ############################################################################################## */
/* 80456550-80456554 004B50 0004+00 1/1 0/0 0/0 .sdata2          @130 */
SECTION_SDATA2 static u8 lit_130[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80456554-80456558 004B54 0004+00 1/1 0/0 0/0 .sdata2          @133 */
SECTION_SDATA2 static f32 lit_133 = 1.0f;

/* 80456558-8045655C 004B58 0004+00 1/1 0/0 0/0 .sdata2          @135 */
SECTION_SDATA2 static f32 lit_135 = 0.5f;

/* 80347474-80347500 341DB4 008C+00 0/0 1/1 0/0 .text            C_QUATRotAxisRad */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void C_QUATRotAxisRad(Quaternion* q, const Vec* axis, f32 rad) {
    nofralloc
#include "asm/dolphin/mtx/quat/C_QUATRotAxisRad.s"
}
#pragma pop

/* ############################################################################################## */
/* 8045655C-80456560 004B5C 0004+00 1/1 0/0 0/0 .sdata2          @261 */
SECTION_SDATA2 static f32 lit_261 = 0.9999899864196777f;

/* 80347500-80347674 341E40 0174+00 0/0 0/0 2/2 .text            C_QUATSlerp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void C_QUATSlerp(const Quaternion* p, const Quaternion* q, Quaternion* r, f32 t) {
    nofralloc
#include "asm/dolphin/mtx/quat/C_QUATSlerp.s"
}
#pragma pop
