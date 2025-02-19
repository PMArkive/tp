//
// Generated By: dol2asm
// Translation Unit: d/menu/d_menu_skill
//

#include "d/menu/d_menu_skill.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct mDoGph_gInf_c {
    static u8 mFader[4];
};

struct mDoDvdThd_mountArchive_c {
    /* 80015E14 */ void create(char const*, u8, JKRHeap*);
};

struct mDoCPd_c {
    static u8 m_cpadInfo[256];
};

struct dSv_event_flag_c {
    static u8 saveBitLabels[1644 + 4 /* padding */];
};

struct dSv_event_c {
    /* 800349BC */ void isEventBit(u16) const;
};

struct dMsgString_c {
    /* 80249C20 */ dMsgString_c();
    /* 80249D28 */ ~dMsgString_c();
};

struct JMSMesgEntry_c {};

struct dMeter2Info_c {
    /* 8021C544 */ void getStringKanji(u32, char*, JMSMesgEntry_c*);
};

//
// Forward References:
//

extern "C" void __ct__13dMenu_Skill_cFP10JKRExpHeapP9STControlP10CSTControl();
extern "C" void __dt__13dMenu_Skill_cFv();
extern "C" void _create__13dMenu_Skill_cFv();
extern "C" void _move__13dMenu_Skill_cFv();
extern "C" void _draw__13dMenu_Skill_cFv();
extern "C" void isSync__13dMenu_Skill_cFv();
extern "C" void skill_init_calc__13dMenu_Skill_cFv();
extern "C" void init__13dMenu_Skill_cFv();
extern "C" void _open__13dMenu_Skill_cFv();
extern "C" void _close__13dMenu_Skill_cFv();
extern "C" void wait_init__13dMenu_Skill_cFv();
extern "C" void wait_move__13dMenu_Skill_cFv();
extern "C" void read_open_init__13dMenu_Skill_cFv();
extern "C" void read_open_move__13dMenu_Skill_cFv();
extern "C" void read_move_init__13dMenu_Skill_cFv();
extern "C" void read_move_move__13dMenu_Skill_cFv();
extern "C" void read_close_init__13dMenu_Skill_cFv();
extern "C" void read_close_move__13dMenu_Skill_cFv();
extern "C" void screenSetMenu__13dMenu_Skill_cFv();
extern "C" void screenSetLetter__13dMenu_Skill_cFv();
extern "C" void screenSetDoIcon__13dMenu_Skill_cFv();
extern "C" void setCursorPos__13dMenu_Skill_cFv();
extern "C" void changeActiveColor__13dMenu_Skill_cFv();
extern "C" void setPageText__13dMenu_Skill_cFv();
extern "C" void setAButtonString__13dMenu_Skill_cFUs();
extern "C" void setBButtonString__13dMenu_Skill_cFUs();
extern "C" void setNameString__13dMenu_Skill_cFUs();
extern "C" void getSkillNum__13dMenu_Skill_cFv();
extern "C" void setHIO__13dMenu_Skill_cFb();
extern "C" void draw__13dMenu_Skill_cFv();
extern "C" void __sinit_d_menu_skill_cpp();
extern "C" extern char const* const d_menu_d_menu_skill__stringBase0;

//
// External References:
//

extern "C" void mDoExt_setCurrentHeap__FP7JKRHeap();
extern "C" void mDoExt_getMesgFont__Fv();
extern "C" void mDoExt_getSubFont__Fv();
extern "C" void create__24mDoDvdThd_mountArchive_cFPCcUcP7JKRHeap();
extern "C" void checkUpTrigger__9STControlFv();
extern "C" void checkDownTrigger__9STControlFv();
extern "C" void isEventBit__11dSv_event_cCFUs();
extern "C" void __ct__Q28JUtility6TColorFv();
extern "C" void __ct__16dSelect_cursor_cFUcfP10JKRArchive();
extern "C" void setPos__16dSelect_cursor_cFffP7J2DPaneb();
extern "C" void setParam__16dSelect_cursor_cFfffff();
extern "C" void setScale__16dSelect_cursor_cFf();
extern "C" void setAlphaRate__16dSelect_cursor_cFf();
extern "C" void getStringKanji__13dMeter2Info_cFUlPcP14JMSMesgEntry_c();
extern "C" void dMeter2Info_set2DVibration__Fv();
extern "C" void __ct__12dMsgString_cFv();
extern "C" void __dt__12dMsgString_cFv();
extern "C" void __ct__8CPaneMgrFP9J2DScreenUxUcP10JKRExpHeap();
extern "C" void paneTrans__8CPaneMgrFff();
extern "C" void getGlobalVtxCenter__8CPaneMgrFP7J2DPanebs();
extern "C" void dPaneClass_showNullPane__FP9J2DScreen();
extern "C" void setAlphaRate__13CPaneMgrAlphaFf();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void __ct__9J2DScreenFv();
extern "C" void setPriority__9J2DScreenFPCcUlP10JKRArchive();
extern "C" void draw__9J2DScreenFffPC14J2DGrafContext();
extern "C" void __ct__10J2DPictureFPC7ResTIMG();
extern "C" void getStringPtr__10J2DTextBoxCFv();
extern "C" void setString__10J2DTextBoxFsPCce();
extern "C" void __construct_array();
extern "C" void __ptmf_scall();
extern "C" void __save_gpr();
extern "C" void _savegpr_24();
extern "C" void _savegpr_25();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void __restore_gpr();
extern "C" void _restgpr_24();
extern "C" void _restgpr_25();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern void* __vt__12dDlst_base_c[3];
extern "C" u8 saveBitLabels__16dSv_event_flag_c[1644 + 4 /* padding */];
extern "C" u8 m_cpadInfo__8mDoCPd_c[256];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_drawHIO[3880];
extern "C" extern u8 g_meter2_info[248];
extern "C" u8 mFader__13mDoGph_gInf_c[4];
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];

//
// Declarations:
//

/* ############################################################################################## */
/* 803BE7D8-803BE7E4 01B8F8 000C+00 1/1 0/0 0/0 .data            cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 803BE7E4-803BE7F0 -00001 000C+00 0/1 0/0 0/0 .data            @3795 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3795[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)wait_init__13dMenu_Skill_cFv,
};
#pragma pop

/* 803BE7F0-803BE7FC -00001 000C+00 0/1 0/0 0/0 .data            @3796 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3796[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)read_open_init__13dMenu_Skill_cFv,
};
#pragma pop

/* 803BE7FC-803BE808 -00001 000C+00 0/1 0/0 0/0 .data            @3797 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3797[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)read_move_init__13dMenu_Skill_cFv,
};
#pragma pop

/* 803BE808-803BE814 -00001 000C+00 0/1 0/0 0/0 .data            @3798 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3798[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)read_close_init__13dMenu_Skill_cFv,
};
#pragma pop

/* 803BE814-803BE844 01B934 0030+00 2/3 0/0 0/0 .data            map_init_process */
SECTION_DATA static u8 map_init_process[48] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 803BE844-803BE850 -00001 000C+00 0/1 0/0 0/0 .data            @3799 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3799[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)wait_move__13dMenu_Skill_cFv,
};
#pragma pop

/* 803BE850-803BE85C -00001 000C+00 0/1 0/0 0/0 .data            @3800 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3800[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)read_open_move__13dMenu_Skill_cFv,
};
#pragma pop

/* 803BE85C-803BE868 -00001 000C+00 0/1 0/0 0/0 .data            @3801 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3801[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)read_move_move__13dMenu_Skill_cFv,
};
#pragma pop

/* 803BE868-803BE874 -00001 000C+00 0/1 0/0 0/0 .data            @3802 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3802[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)read_close_move__13dMenu_Skill_cFv,
};
#pragma pop

/* 803BE874-803BE8A4 01B994 0030+00 1/2 0/0 0/0 .data            map_move_process */
SECTION_DATA static u8 map_move_process[48] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 803BE8A4-803BE8C0 01B9C4 001C+00 1/1 0/0 0/0 .data            evt_id$4557 */
SECTION_DATA static u8 evt_id[28] = {
    0x00, 0x00, 0x01, 0x53, 0x00, 0x00, 0x01, 0x52, 0x00, 0x00, 0x01, 0x54, 0x00, 0x00,
    0x01, 0x55, 0x00, 0x00, 0x01, 0x56, 0x00, 0x00, 0x01, 0x57, 0x00, 0x00, 0x01, 0x58,
};

/* 803BE8C0-803BE8E0 01B9E0 0010+10 2/2 0/0 0/0 .data            __vt__13dMenu_Skill_c */
SECTION_DATA extern void* __vt__13dMenu_Skill_c[4 + 4 /* padding */] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)draw__13dMenu_Skill_cFv,
    (void*)__dt__13dMenu_Skill_cFv,
    /* padding */
    NULL,
    NULL,
    NULL,
    NULL,
};

/* 80454488-8045448C 002A88 0004+00 8/8 0/0 0/0 .sdata2          @3808 */
SECTION_SDATA2 static u8 lit_3808[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 8045448C-80454490 002A8C 0004+00 6/6 0/0 0/0 .sdata2          @3809 */
SECTION_SDATA2 static f32 lit_3809 = 1.0f;

/* 801F7224-801F7348 1F1B64 0124+00 0/0 2/2 0/0 .text
 * __ct__13dMenu_Skill_cFP10JKRExpHeapP9STControlP10CSTControl  */
dMenu_Skill_c::dMenu_Skill_c(JKRExpHeap* param_0, STControl* param_1, CSTControl* param_2) {
    field_0x4 = param_0;
    field_0x8 = NULL;
    field_0x14 = NULL;
    field_0xc = param_1;
    field_0x10 = param_2;
    mStatus = 1;
    field_0x205 = 0;
    field_0x200 = 0;
    field_0x1fc = 0;
    field_0x202 = 0;
    field_0x206 = 0;
    field_0x209 = 255;
    field_0x20a = 255;
    skill_init_calc();
    field_0x1f0 = FLOAT_LABEL(lit_3808);
    f32 tmp_1 = lit_3809;
    field_0x1f8 = tmp_1;
    field_0x1f4 = tmp_1;
}

/* 801F7348-801F763C 1F1C88 02F4+00 1/0 0/0 0/0 .text            __dt__13dMenu_Skill_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dMenu_Skill_c::~dMenu_Skill_c() {
    nofralloc
#include "asm/d/menu/d_menu_skill/__dt__13dMenu_Skill_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80454490-80454494 002A90 0004+00 1/1 0/0 0/0 .sdata2          @3904 */
SECTION_SDATA2 static f32 lit_3904 = 101.0f / 100.0f;

/* 80454494-80454498 002A94 0004+00 1/1 0/0 0/0 .sdata2          @3905 */
SECTION_SDATA2 static f32 lit_3905 = 17.0f / 20.0f;

/* 80454498-8045449C 002A98 0004+00 1/1 0/0 0/0 .sdata2          @3906 */
SECTION_SDATA2 static f32 lit_3906 = 1.0f / 50.0f;

/* 8045449C-804544A0 002A9C 0004+00 1/1 0/0 0/0 .sdata2          @3907 */
SECTION_SDATA2 static f32 lit_3907 = 0.5f;

/* 801F763C-801F7718 1F1F7C 00DC+00 1/1 0/0 0/0 .text            _create__13dMenu_Skill_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenu_Skill_c::_create() {
    nofralloc
#include "asm/d/menu/d_menu_skill/_create__13dMenu_Skill_cFv.s"
}
#pragma pop

/* 801F7718-801F77B0 1F2058 0098+00 0/0 2/2 0/0 .text            _move__13dMenu_Skill_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenu_Skill_c::_move() {
    nofralloc
#include "asm/d/menu/d_menu_skill/_move__13dMenu_Skill_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 804544A0-804544A4 002AA0 0004+00 1/1 0/0 0/0 .sdata2          @3944 */
SECTION_SDATA2 static f32 lit_3944 = 608.0f;

/* 804544A4-804544A8 002AA4 0004+00 1/1 0/0 0/0 .sdata2          @3945 */
SECTION_SDATA2 static f32 lit_3945 = 448.0f;

/* 804544A8-804544B0 002AA8 0004+04 3/3 0/0 0/0 .sdata2          @3946 */
SECTION_SDATA2 static f32 lit_3946[1 + 1 /* padding */] = {
    -1.0f,
    /* padding */
    0.0f,
};

/* 801F77B0-801F7950 1F20F0 01A0+00 1/1 1/1 0/0 .text            _draw__13dMenu_Skill_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenu_Skill_c::_draw() {
    nofralloc
#include "asm/d/menu/d_menu_skill/_draw__13dMenu_Skill_cFv.s"
}
#pragma pop

/* 801F7950-801F7978 1F2290 0028+00 0/0 2/2 0/0 .text            isSync__13dMenu_Skill_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm bool dMenu_Skill_c::isSync() {
    nofralloc
#include "asm/d/menu/d_menu_skill/isSync__13dMenu_Skill_cFv.s"
}
#pragma pop

/* 801F7978-801F79EC 1F22B8 0074+00 1/1 0/0 0/0 .text            skill_init_calc__13dMenu_Skill_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenu_Skill_c::skill_init_calc() {
    nofralloc
#include "asm/d/menu/d_menu_skill/skill_init_calc__13dMenu_Skill_cFv.s"
}
#pragma pop

/* 801F79EC-801F7A40 1F232C 0054+00 1/1 0/0 0/0 .text            init__13dMenu_Skill_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenu_Skill_c::init() {
    nofralloc
#include "asm/d/menu/d_menu_skill/init__13dMenu_Skill_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80397DB8-80397DB8 024418 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80397DB8 = "/res/Layout/skillres.arc";
#pragma pop

/* 804544B0-804544B8 002AB0 0008+00 4/4 0/0 0/0 .sdata2          @4016 */
SECTION_SDATA2 static f64 lit_4016 = 4503601774854144.0 /* cast s32 to float */;

/* 801F7A40-801F7C1C 1F2380 01DC+00 0/0 2/2 0/0 .text            _open__13dMenu_Skill_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenu_Skill_c::_open() {
    nofralloc
#include "asm/d/menu/d_menu_skill/_open__13dMenu_Skill_cFv.s"
}
#pragma pop

/* 801F7C1C-801F7D58 1F255C 013C+00 0/0 1/1 0/0 .text            _close__13dMenu_Skill_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenu_Skill_c::_close() {
    nofralloc
#include "asm/d/menu/d_menu_skill/_close__13dMenu_Skill_cFv.s"
}
#pragma pop

/* 801F7D58-801F7D94 1F2698 003C+00 1/0 0/0 0/0 .text            wait_init__13dMenu_Skill_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenu_Skill_c::wait_init() {
    nofralloc
#include "asm/d/menu/d_menu_skill/wait_init__13dMenu_Skill_cFv.s"
}
#pragma pop

/* 801F7D94-801F7F24 1F26D4 0190+00 1/0 0/0 0/0 .text            wait_move__13dMenu_Skill_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenu_Skill_c::wait_move() {
    nofralloc
#include "asm/d/menu/d_menu_skill/wait_move__13dMenu_Skill_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80397A18-80397A34 024078 001C+00 2/2 0/0 0/0 .rodata          i_id$4087 */
SECTION_RODATA static u8 const i_id[28] = {
    0x00, 0x00, 0x06, 0xB4, 0x00, 0x00, 0x06, 0xB3, 0x00, 0x00, 0x06, 0xB5, 0x00, 0x00,
    0x06, 0xB6, 0x00, 0x00, 0x06, 0xB7, 0x00, 0x00, 0x06, 0xB8, 0x00, 0x00, 0x06, 0xB9,
};
COMPILER_STRIP_GATE(0x80397A18, &i_id);

/* 80397A34-80397A50 024094 001C+00 1/1 0/0 0/0 .rodata          i_id1$4088 */
SECTION_RODATA static u8 const i_id1_4088[28] = {
    0x00, 0x00, 0x06, 0xAD, 0x00, 0x00, 0x06, 0xAC, 0x00, 0x00, 0x06, 0xAE, 0x00, 0x00,
    0x06, 0xAF, 0x00, 0x00, 0x06, 0xB0, 0x00, 0x00, 0x06, 0xB1, 0x00, 0x00, 0x06, 0xB2,
};
COMPILER_STRIP_GATE(0x80397A34, &i_id1_4088);

/* 801F7F24-801F7FF8 1F2864 00D4+00 1/0 0/0 0/0 .text            read_open_init__13dMenu_Skill_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenu_Skill_c::read_open_init() {
    nofralloc
#include "asm/d/menu/d_menu_skill/read_open_init__13dMenu_Skill_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 804544B8-804544C0 002AB8 0008+00 2/2 0/0 0/0 .sdata2          @4104 */
SECTION_SDATA2 static f64 lit_4104 = 4503599627370496.0 /* cast u32 to float */;

/* 801F7FF8-801F8114 1F2938 011C+00 1/0 0/0 0/0 .text            read_open_move__13dMenu_Skill_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenu_Skill_c::read_open_move() {
    nofralloc
#include "asm/d/menu/d_menu_skill/read_open_move__13dMenu_Skill_cFv.s"
}
#pragma pop

/* 801F8114-801F8150 1F2A54 003C+00 1/0 0/0 0/0 .text            read_move_init__13dMenu_Skill_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenu_Skill_c::read_move_init() {
    nofralloc
#include "asm/d/menu/d_menu_skill/read_move_init__13dMenu_Skill_cFv.s"
}
#pragma pop

/* 801F8150-801F8218 1F2A90 00C8+00 1/0 0/0 0/0 .text            read_move_move__13dMenu_Skill_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenu_Skill_c::read_move_move() {
    nofralloc
#include "asm/d/menu/d_menu_skill/read_move_move__13dMenu_Skill_cFv.s"
}
#pragma pop

/* 801F8218-801F826C 1F2B58 0054+00 1/0 0/0 0/0 .text            read_close_init__13dMenu_Skill_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenu_Skill_c::read_close_init() {
    nofralloc
#include "asm/d/menu/d_menu_skill/read_close_init__13dMenu_Skill_cFv.s"
}
#pragma pop

/* 801F826C-801F8388 1F2BAC 011C+00 1/0 0/0 0/0 .text            read_close_move__13dMenu_Skill_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenu_Skill_c::read_close_move() {
    nofralloc
#include "asm/d/menu/d_menu_skill/read_close_move__13dMenu_Skill_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80397A50-80397A88 0240B0 0038+00 0/1 0/0 0/0 .rodata          tag_sub0$4148 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const tag_sub0[56] = {
    0x6D, 0x65, 0x6E, 0x75, 0x5F, 0x74, 0x30, 0x73, 0x6D, 0x65, 0x6E, 0x75, 0x5F, 0x74,
    0x31, 0x73, 0x6D, 0x65, 0x6E, 0x75, 0x5F, 0x74, 0x32, 0x73, 0x6D, 0x65, 0x6E, 0x75,
    0x5F, 0x74, 0x33, 0x73, 0x6D, 0x65, 0x6E, 0x75, 0x5F, 0x74, 0x34, 0x73, 0x6D, 0x65,
    0x6E, 0x75, 0x5F, 0x74, 0x35, 0x73, 0x6D, 0x65, 0x6E, 0x75, 0x5F, 0x74, 0x35, 0x31,
};
COMPILER_STRIP_GATE(0x80397A50, &tag_sub0);
#pragma pop

/* 80397A88-80397AC0 0240E8 0038+00 0/1 0/0 0/0 .rodata          tag_sub1$4149 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const tag_sub1[56] = {
    0x00, 0x6D, 0x65, 0x6E, 0x75, 0x5F, 0x74, 0x30, 0x00, 0x6D, 0x65, 0x6E, 0x75, 0x5F,
    0x74, 0x31, 0x00, 0x6D, 0x65, 0x6E, 0x75, 0x5F, 0x74, 0x32, 0x00, 0x6D, 0x65, 0x6E,
    0x75, 0x5F, 0x74, 0x33, 0x00, 0x6D, 0x65, 0x6E, 0x75, 0x5F, 0x74, 0x34, 0x00, 0x6D,
    0x65, 0x6E, 0x75, 0x5F, 0x74, 0x35, 0x00, 0x6D, 0x65, 0x6E, 0x75, 0x5F, 0x74, 0x36,
};
COMPILER_STRIP_GATE(0x80397A88, &tag_sub1);
#pragma pop

/* 80397AC0-80397AF8 024120 0038+00 0/1 0/0 0/0 .rodata          tag_name0$4150 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const tag_name0[56] = {
    0x6D, 0x65, 0x6E, 0x75, 0x5F, 0x74, 0x36, 0x73, 0x6D, 0x65, 0x6E, 0x75, 0x5F, 0x66,
    0x37, 0x73, 0x6D, 0x65, 0x6E, 0x75, 0x5F, 0x66, 0x38, 0x73, 0x6D, 0x65, 0x6E, 0x75,
    0x5F, 0x74, 0x39, 0x73, 0x6D, 0x65, 0x6E, 0x75, 0x5F, 0x31, 0x30, 0x73, 0x6D, 0x65,
    0x6E, 0x75, 0x5F, 0x31, 0x31, 0x73, 0x6D, 0x65, 0x6E, 0x75, 0x5F, 0x31, 0x31, 0x32,
};
COMPILER_STRIP_GATE(0x80397AC0, &tag_name0);
#pragma pop

/* 80397AF8-80397B30 024158 0038+00 0/1 0/0 0/0 .rodata          tag_name1$4151 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const tag_name1[56] = {
    0x00, 0x6D, 0x65, 0x6E, 0x75, 0x5F, 0x66, 0x36, 0x00, 0x6D, 0x65, 0x6E, 0x75, 0x5F,
    0x66, 0x37, 0x00, 0x6D, 0x65, 0x6E, 0x75, 0x5F, 0x74, 0x38, 0x00, 0x6D, 0x65, 0x6E,
    0x75, 0x5F, 0x74, 0x39, 0x6D, 0x65, 0x6E, 0x75, 0x5F, 0x74, 0x31, 0x30, 0x6D, 0x65,
    0x6E, 0x75, 0x5F, 0x74, 0x31, 0x31, 0x6D, 0x65, 0x6E, 0x75, 0x5F, 0x74, 0x30, 0x31,
};
COMPILER_STRIP_GATE(0x80397AF8, &tag_name1);
#pragma pop

/* 80397B30-80397B68 024190 0038+00 0/1 0/0 0/0 .rodata          ftag_sub0$4152 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const ftag_sub0[56] = {
    0x66, 0x65, 0x6E, 0x75, 0x5F, 0x74, 0x30, 0x73, 0x66, 0x65, 0x6E, 0x75, 0x5F, 0x74,
    0x31, 0x73, 0x66, 0x65, 0x6E, 0x75, 0x5F, 0x74, 0x32, 0x73, 0x66, 0x65, 0x6E, 0x75,
    0x5F, 0x74, 0x33, 0x73, 0x66, 0x65, 0x6E, 0x75, 0x5F, 0x74, 0x34, 0x73, 0x66, 0x65,
    0x6E, 0x75, 0x5F, 0x74, 0x35, 0x73, 0x66, 0x65, 0x6E, 0x75, 0x5F, 0x74, 0x36, 0x73,
};
COMPILER_STRIP_GATE(0x80397B30, &ftag_sub0);
#pragma pop

/* 80397B68-80397BA0 0241C8 0038+00 0/1 0/0 0/0 .rodata          ftag_sub1$4153 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const ftag_sub1[56] = {
    0x00, 0x66, 0x65, 0x6E, 0x75, 0x5F, 0x74, 0x30, 0x00, 0x66, 0x65, 0x6E, 0x75, 0x5F,
    0x74, 0x31, 0x00, 0x66, 0x65, 0x6E, 0x75, 0x5F, 0x74, 0x32, 0x00, 0x66, 0x65, 0x6E,
    0x75, 0x5F, 0x74, 0x33, 0x00, 0x66, 0x65, 0x6E, 0x75, 0x5F, 0x74, 0x34, 0x00, 0x66,
    0x65, 0x6E, 0x75, 0x5F, 0x74, 0x35, 0x00, 0x66, 0x65, 0x6E, 0x75, 0x5F, 0x74, 0x36,
};
COMPILER_STRIP_GATE(0x80397B68, &ftag_sub1);
#pragma pop

/* 80397BA0-80397BD8 024200 0038+00 0/1 0/0 0/0 .rodata          ftag_name0$4154 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const ftag_name0[56] = {
    0x66, 0x65, 0x6E, 0x75, 0x5F, 0x74, 0x37, 0x73, 0x66, 0x65, 0x6E, 0x75, 0x5F, 0x74,
    0x38, 0x73, 0x66, 0x65, 0x6E, 0x75, 0x5F, 0x74, 0x39, 0x73, 0x66, 0x65, 0x6E, 0x75,
    0x5F, 0x31, 0x30, 0x73, 0x66, 0x65, 0x6E, 0x75, 0x5F, 0x31, 0x31, 0x73, 0x66, 0x65,
    0x6E, 0x75, 0x5F, 0x31, 0x32, 0x73, 0x66, 0x65, 0x6E, 0x75, 0x5F, 0x31, 0x33, 0x73,
};
COMPILER_STRIP_GATE(0x80397BA0, &ftag_name0);
#pragma pop

/* 80397BD8-80397C10 024238 0038+00 0/1 0/0 0/0 .rodata          ftag_name1$4155 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const ftag_name1[56] = {
    0x00, 0x66, 0x65, 0x6E, 0x75, 0x5F, 0x74, 0x37, 0x00, 0x66, 0x65, 0x6E, 0x75, 0x5F,
    0x74, 0x38, 0x00, 0x66, 0x65, 0x6E, 0x75, 0x5F, 0x74, 0x39, 0x00, 0x66, 0x65, 0x6E,
    0x75, 0x5F, 0x31, 0x30, 0x00, 0x66, 0x65, 0x6E, 0x75, 0x5F, 0x31, 0x31, 0x00, 0x66,
    0x65, 0x6E, 0x75, 0x5F, 0x31, 0x32, 0x00, 0x66, 0x65, 0x6E, 0x75, 0x5F, 0x31, 0x33,
};
COMPILER_STRIP_GATE(0x80397BD8, &ftag_name1);
#pragma pop

/* 80397C10-80397C48 024270 0038+00 0/1 0/0 0/0 .rodata          tag_letter$4166 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const tag_letter[56] = {
    0x6C, 0x65, 0x74, 0x5F, 0x30, 0x30, 0x5F, 0x6E, 0x6C, 0x65, 0x74, 0x5F, 0x30, 0x31,
    0x5F, 0x6E, 0x6C, 0x65, 0x74, 0x5F, 0x30, 0x32, 0x5F, 0x6E, 0x6C, 0x65, 0x74, 0x5F,
    0x30, 0x33, 0x5F, 0x6E, 0x6C, 0x65, 0x74, 0x5F, 0x30, 0x34, 0x5F, 0x6E, 0x6C, 0x65,
    0x74, 0x5F, 0x30, 0x35, 0x5F, 0x6E, 0x6C, 0x65, 0x74, 0x5F, 0x30, 0x36, 0x5F, 0x6E,
};
COMPILER_STRIP_GATE(0x80397C10, &tag_letter);
#pragma pop

/* 80397C48-80397C80 0242A8 0038+00 0/1 0/0 0/0 .rodata          tag_frame$4173 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const tag_frame[56] = {
    0x66, 0x6C, 0x61, 0x6D, 0x65, 0x5F, 0x30, 0x30, 0x66, 0x6C, 0x61, 0x6D, 0x65, 0x5F,
    0x30, 0x31, 0x66, 0x6C, 0x61, 0x6D, 0x65, 0x5F, 0x30, 0x32, 0x66, 0x6C, 0x61, 0x6D,
    0x65, 0x5F, 0x30, 0x33, 0x66, 0x6C, 0x61, 0x6D, 0x65, 0x5F, 0x30, 0x34, 0x66, 0x6C,
    0x61, 0x6D, 0x65, 0x5F, 0x30, 0x35, 0x66, 0x6C, 0x61, 0x6D, 0x65, 0x5F, 0x30, 0x36,
};
COMPILER_STRIP_GATE(0x80397C48, &tag_frame);
#pragma pop

/* 80397C80-80397CB8 0242E0 0038+00 0/1 0/0 0/0 .rodata          tag_maki$4174 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const tag_maki[56] = {
    0x00, 0x6D, 0x61, 0x6B, 0x69, 0x5F, 0x30, 0x6E, 0x00, 0x6D, 0x61, 0x6B, 0x69, 0x5F,
    0x31, 0x6E, 0x00, 0x6D, 0x61, 0x6B, 0x69, 0x5F, 0x32, 0x6E, 0x00, 0x6D, 0x61, 0x6B,
    0x69, 0x5F, 0x33, 0x6E, 0x00, 0x6D, 0x61, 0x6B, 0x69, 0x5F, 0x34, 0x6E, 0x00, 0x6D,
    0x61, 0x6B, 0x69, 0x5F, 0x35, 0x6E, 0x00, 0x6D, 0x61, 0x6B, 0x69, 0x5F, 0x36, 0x6E,
};
COMPILER_STRIP_GATE(0x80397C80, &tag_maki);
#pragma pop

/* 80397CB8-80397CF0 024318 0038+00 0/1 0/0 0/0 .rodata          tag_makic$4175 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const tag_makic[56] = {
    0x00, 0x00, 0x6D, 0x61, 0x6B, 0x69, 0x5F, 0x30, 0x00, 0x00, 0x6D, 0x61, 0x6B, 0x69,
    0x5F, 0x31, 0x00, 0x00, 0x6D, 0x61, 0x6B, 0x69, 0x5F, 0x32, 0x00, 0x00, 0x6D, 0x61,
    0x6B, 0x69, 0x5F, 0x33, 0x00, 0x00, 0x6D, 0x61, 0x6B, 0x69, 0x5F, 0x34, 0x00, 0x00,
    0x6D, 0x61, 0x6B, 0x69, 0x5F, 0x35, 0x00, 0x00, 0x6D, 0x61, 0x6B, 0x69, 0x5F, 0x36,
};
COMPILER_STRIP_GATE(0x80397CB8, &tag_makic);
#pragma pop

/* 80397DB8-80397DB8 024418 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80397DD1 = "zelda_ougi_window.blo";
SECTION_DEAD static char const* const stringBase_80397DE7 = "";
#pragma pop

/* 801F8388-801F8A18 1F2CC8 0690+00 1/1 0/0 0/0 .text            screenSetMenu__13dMenu_Skill_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenu_Skill_c::screenSetMenu() {
    nofralloc
#include "asm/d/menu/d_menu_skill/screenSetMenu__13dMenu_Skill_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80397CF0-80397D10 024350 0020+00 1/1 0/0 0/0 .rodata          name_tag$4306 */
SECTION_RODATA static u8 const name_tag[32] = {
    0x69, 0x74, 0x65, 0x6D, 0x5F, 0x6E, 0x30, 0x34, 0x69, 0x74, 0x65, 0x6D, 0x5F, 0x6E, 0x30, 0x35,
    0x69, 0x74, 0x65, 0x6D, 0x5F, 0x6E, 0x30, 0x36, 0x69, 0x74, 0x65, 0x6D, 0x5F, 0x6E, 0x30, 0x37,
};
COMPILER_STRIP_GATE(0x80397CF0, &name_tag);

/* 80397D10-80397D30 024370 0020+00 1/1 0/0 0/0 .rodata          fame_tag$4307 */
SECTION_RODATA static u8 const fame_tag[32] = {
    0x66, 0x5F, 0x69, 0x74, 0x65, 0x6D, 0x5F, 0x31, 0x66, 0x5F, 0x69, 0x74, 0x65, 0x6D, 0x5F, 0x32,
    0x66, 0x5F, 0x69, 0x74, 0x65, 0x6D, 0x5F, 0x33, 0x66, 0x5F, 0x69, 0x74, 0x65, 0x6D, 0x5F, 0x34,
};
COMPILER_STRIP_GATE(0x80397D10, &fame_tag);

/* 80397DB8-80397DB8 024418 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80397DE8 = "zelda_ougi_info.blo";
SECTION_DEAD static char const* const stringBase_80397DFC = "tt_block8x8.bti";
#pragma pop

/* 801F8A18-801F8D20 1F3358 0308+00 1/1 0/0 0/0 .text            screenSetLetter__13dMenu_Skill_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenu_Skill_c::screenSetLetter() {
    nofralloc
#include "asm/d/menu/d_menu_skill/screenSetLetter__13dMenu_Skill_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80397D30-80397D58 024390 0028+00 1/1 0/0 0/0 .rodata          text_a_tag$4365 */
SECTION_RODATA static u64 const text_a_tag[5] = {
    'atext1_1', 'atext1_2', 'atext1_3', 'atext1_4', 'atext1_5',
};
COMPILER_STRIP_GATE(0x80397D30, &text_a_tag);

/* 80397D58-80397D80 0243B8 0028+00 1/1 0/0 0/0 .rodata          text_b_tag$4366 */
SECTION_RODATA static u64 const text_b_tag[5] = {
    'btext1_1', 'btext1_2', 'btext1_3', 'btext1_4', 'btext1_5',
};
COMPILER_STRIP_GATE(0x80397D58, &text_b_tag);

/* 80397DB8-80397DB8 024418 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80397E0C = "zelda_collect_soubi_do_icon_parts.blo";
/* @stringBase0 padding */
SECTION_DEAD static char const* const pad_80397E32 = "\0\0\0\0\0";
#pragma pop

/* 801F8D20-801F8E9C 1F3660 017C+00 1/1 0/0 0/0 .text            screenSetDoIcon__13dMenu_Skill_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenu_Skill_c::screenSetDoIcon() {
    nofralloc
#include "asm/d/menu/d_menu_skill/screenSetDoIcon__13dMenu_Skill_cFv.s"
}
#pragma pop

/* 801F8E9C-801F8F28 1F37DC 008C+00 3/3 0/0 0/0 .text            setCursorPos__13dMenu_Skill_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenu_Skill_c::setCursorPos() {
    nofralloc
#include "asm/d/menu/d_menu_skill/setCursorPos__13dMenu_Skill_cFv.s"
}
#pragma pop

/* 801F8F28-801F9144 1F3868 021C+00 2/2 0/0 0/0 .text changeActiveColor__13dMenu_Skill_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenu_Skill_c::changeActiveColor() {
    nofralloc
#include "asm/d/menu/d_menu_skill/changeActiveColor__13dMenu_Skill_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80397D80-80397D9C 0243E0 001C+00 1/1 0/0 0/0 .rodata          i_id0$4478 */
SECTION_RODATA static u8 const i_id0[28] = {
    0x00, 0x00, 0x06, 0xA5, 0x00, 0x00, 0x06, 0xA6, 0x00, 0x00, 0x06, 0xA7, 0x00, 0x00,
    0x06, 0xA8, 0x00, 0x00, 0x06, 0xA9, 0x00, 0x00, 0x06, 0xAA, 0x00, 0x00, 0x06, 0xAB,
};
COMPILER_STRIP_GATE(0x80397D80, &i_id0);

/* 80397D9C-80397DB8 0243FC 001C+00 1/1 0/0 0/0 .rodata          i_id1$4479 */
SECTION_RODATA static u8 const i_id1_4479[28] = {
    0x00, 0x00, 0x06, 0xAD, 0x00, 0x00, 0x06, 0xAC, 0x00, 0x00, 0x06, 0xAE, 0x00, 0x00,
    0x06, 0xAF, 0x00, 0x00, 0x06, 0xB0, 0x00, 0x00, 0x06, 0xB1, 0x00, 0x00, 0x06, 0xB2,
};
COMPILER_STRIP_GATE(0x80397D9C, &i_id1_4479);

/* 801F9144-801F9260 1F3A84 011C+00 1/1 0/0 0/0 .text            setPageText__13dMenu_Skill_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenu_Skill_c::setPageText() {
    nofralloc
#include "asm/d/menu/d_menu_skill/setPageText__13dMenu_Skill_cFv.s"
}
#pragma pop

/* 801F9260-801F9310 1F3BA0 00B0+00 4/4 0/0 0/0 .text setAButtonString__13dMenu_Skill_cFUs */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenu_Skill_c::setAButtonString(u16 param_0) {
    nofralloc
#include "asm/d/menu/d_menu_skill/setAButtonString__13dMenu_Skill_cFUs.s"
}
#pragma pop

/* 801F9310-801F93C0 1F3C50 00B0+00 4/4 0/0 0/0 .text setBButtonString__13dMenu_Skill_cFUs */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenu_Skill_c::setBButtonString(u16 param_0) {
    nofralloc
#include "asm/d/menu/d_menu_skill/setBButtonString__13dMenu_Skill_cFUs.s"
}
#pragma pop

/* 801F93C0-801F9470 1F3D00 00B0+00 1/1 0/0 0/0 .text            setNameString__13dMenu_Skill_cFUs
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenu_Skill_c::setNameString(u16 param_0) {
    nofralloc
#include "asm/d/menu/d_menu_skill/setNameString__13dMenu_Skill_cFUs.s"
}
#pragma pop

/* 801F9470-801F9500 1F3DB0 0090+00 1/1 0/0 0/0 .text            getSkillNum__13dMenu_Skill_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenu_Skill_c::getSkillNum() {
    nofralloc
#include "asm/d/menu/d_menu_skill/getSkillNum__13dMenu_Skill_cFv.s"
}
#pragma pop

/* 801F9500-801F9A08 1F3E40 0508+00 2/2 0/0 0/0 .text            setHIO__13dMenu_Skill_cFb */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenu_Skill_c::setHIO(bool param_0) {
    nofralloc
#include "asm/d/menu/d_menu_skill/setHIO__13dMenu_Skill_cFb.s"
}
#pragma pop

/* 801F9A08-801F9A28 1F4348 0020+00 1/0 0/0 0/0 .text            draw__13dMenu_Skill_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm void dMenu_Skill_c::draw() {
extern "C" asm void draw__13dMenu_Skill_cFv() {
    nofralloc
#include "asm/d/menu/d_menu_skill/draw__13dMenu_Skill_cFv.s"
}
#pragma pop

/* 801F9A28-801F9AFC 1F4368 00D4+00 0/0 1/0 0/0 .text            __sinit_d_menu_skill_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __sinit_d_menu_skill_cpp() {
    nofralloc
#include "asm/d/menu/d_menu_skill/__sinit_d_menu_skill_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
REGISTER_CTORS(0x801F9A28, __sinit_d_menu_skill_cpp);
#pragma pop

/* 80397DB8-80397DB8 024418 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
