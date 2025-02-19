//
// Generated By: dol2asm
// Translation Unit: d/msg/d_msg_unit
//

#include "d/msg/d_msg_unit.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct dScnKy_env_light_c {
    /* 8019FA08 */ void getDaytime();
};

struct dMsgUnit_c {
    /* 80238C94 */ dMsgUnit_c();
    /* 80238CA4 */ ~dMsgUnit_c();
    /* 80238CEC */ void setTag(int, int, char*, bool);
};

//
// Forward References:
//

extern "C" void __ct__10dMsgUnit_cFv();
extern "C" void __dt__10dMsgUnit_cFv();
extern "C" void setTag__10dMsgUnit_cFiiPcb();
extern "C" void __sinit_d_msg_unit_cpp();
extern "C" extern char const* const d_msg_d_msg_unit__stringBase0;
extern "C" extern u8 data_804510D8[8];

//
// External References:
//

extern "C" void getDaytime__18dScnKy_env_light_cFv();
extern "C" void __dl__FPv();
extern "C" void __register_global_object();
extern "C" void _savegpr_26();
extern "C" void _restgpr_26();
extern "C" void sprintf();
extern "C" void strcmp();
extern "C" void strcat();
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 g_meter2_info[248];

//
// Declarations:
//

/* ############################################################################################## */
/* 803C0BF0-803C0C00 01DD10 000C+04 2/2 0/0 0/0 .data            __vt__10dMsgUnit_c */
SECTION_DATA extern void* __vt__10dMsgUnit_c[3 + 1 /* padding */] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10dMsgUnit_cFv,
    /* padding */
    NULL,
};

/* 80238C94-80238CA4 2335D4 0010+00 1/1 0/0 0/0 .text            __ct__10dMsgUnit_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dMsgUnit_c::dMsgUnit_c() {
    nofralloc
#include "asm/d/msg/d_msg_unit/__ct__10dMsgUnit_cFv.s"
}
#pragma pop

/* 80238CA4-80238CEC 2335E4 0048+00 2/1 0/0 0/0 .text            __dt__10dMsgUnit_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dMsgUnit_c::~dMsgUnit_c() {
    nofralloc
#include "asm/d/msg/d_msg_unit/__dt__10dMsgUnit_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 803996E8-803996E8 025D48 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_803996E8 = "%d";
SECTION_DEAD static char const* const stringBase_803996EB = "%d-%d";
SECTION_DEAD static char const* const stringBase_803996F1 = "%d:%02d";
SECTION_DEAD static char const* const stringBase_803996F9 = "";
SECTION_DEAD static char const* const stringBase_803996FA = "%d%s";
SECTION_DEAD static char const* const stringBase_803996FF = "%d %s";
/* @stringBase0 padding */
SECTION_DEAD static char const* const pad_80399705 = "\0\0";
#pragma pop

/* 80454B40-80454B44 003140 0004+00 1/1 0/0 0/0 .sdata2          @3702 */
SECTION_SDATA2 static f32 lit_3702 = 1000000.0f;

/* 80454B44-80454B48 003144 0004+00 1/1 0/0 0/0 .sdata2          @3703 */
SECTION_SDATA2 static f32 lit_3703 = 60.0f;

/* 80454B48-80454B50 003148 0004+04 1/1 0/0 0/0 .sdata2          @3704 */
SECTION_SDATA2 static f32 lit_3704[1 + 1 /* padding */] = {
    15.0f,
    /* padding */
    0.0f,
};

/* 80454B50-80454B58 003150 0008+00 1/1 0/0 0/0 .sdata2          @3707 */
SECTION_SDATA2 static f64 lit_3707 = 4503601774854144.0 /* cast s32 to float */;

/* 80238CEC-8023907C 23362C 0390+00 0/0 5/5 0/0 .text            setTag__10dMsgUnit_cFiiPcb */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMsgUnit_c::setTag(int param_0, int param_1, char* param_2, bool param_3) {
    nofralloc
#include "asm/d/msg/d_msg_unit/setTag__10dMsgUnit_cFiiPcb.s"
}
#pragma pop

/* ############################################################################################## */
/* 804306B8-804306C8 05D3D8 000C+04 1/1 0/0 0/0 .bss             @3640 */
static u8 lit_3640[12 + 4 /* padding */];

/* 804510D0-804510D8 0005D0 0004+04 1/1 5/5 0/0 .sbss            g_msg_unit */
extern u8 g_msg_unit[4 + 4 /* padding */];
u8 g_msg_unit[4 + 4 /* padding */];

/* 8023907C-802390B4 2339BC 0038+00 0/0 1/0 0/0 .text            __sinit_d_msg_unit_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __sinit_d_msg_unit_cpp() {
    nofralloc
#include "asm/d/msg/d_msg_unit/__sinit_d_msg_unit_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
REGISTER_CTORS(0x8023907C, __sinit_d_msg_unit_cpp);
#pragma pop

/* ############################################################################################## */
/* 804510D8-804510E0 0005D8 0008+00 0/0 2/2 0/0 .sbss            None */
extern u8 data_804510D8[8];
u8 data_804510D8[8];

/* 803996E8-803996E8 025D48 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
