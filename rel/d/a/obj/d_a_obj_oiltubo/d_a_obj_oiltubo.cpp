//
// Generated By: dol2asm
// Translation Unit: d_a_obj_oiltubo
//

#include "rel/d/a/obj/d_a_obj_oiltubo/d_a_obj_oiltubo.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct csXyz {};

struct cXyz {};

struct mDoMtx_stack_c {
    /* 8000CE70 */ void scaleM(cXyz const&);
    /* 8000CF44 */ void ZXYrotM(csXyz const&);

    static u8 now[48];
};

struct J3DMaterialTable {};

struct J3DAnmTextureSRTKey {};

struct mDoExt_btkAnm {
    /* 8000D63C */ void init(J3DMaterialTable*, J3DAnmTextureSRTKey*, int, int, f32, s16, s16);
    /* 8000D6D8 */ void entry(J3DMaterialTable*, f32);
};

struct mDoExt_baseAnm {
    /* 8000D428 */ void play();
};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
    /* 80018C8C */ ~fopAc_ac_c();
};

struct daObj_Oiltubo_c {
    /* 80CA6718 */ void create();
    /* 80CA6B28 */ void CreateHeap();
    /* 80CA6C5C */ void Delete();
    /* 80CA6CA0 */ void Execute();
    /* 80CA6EDC */ void Draw();
    /* 80CA6FC8 */ void createHeapCallBack(fopAc_ac_c*);
    /* 80CA6FE8 */ void getResName();
    /* 80CA6FF8 */ void restart();
    /* 80CA7068 */ void initialize();
    /* 80CA720C */ void setProcess(int (daObj_Oiltubo_c::*)(void*));
    /* 80CA72BC */ void setParam();
    /* 80CA7318 */ void setEnvTevColor();
    /* 80CA7374 */ void setRoomNo();
    /* 80CA73B8 */ void setMtx();
    /* 80CA7430 */ void setAttnPos();
    /* 80CA7478 */ void chkEvent();
    /* 80CA74C8 */ void wait(void*);
    /* 80CA7628 */ ~daObj_Oiltubo_c();

    static u8 const mCcDObjInfo[48];
    static u8 mCcDCyl[68];
};

struct dKy_tevstr_c {};

struct J3DModelData {};

struct dScnKy_env_light_c {
    /* 801A37C4 */ void settingTevStruct(int, cXyz*, dKy_tevstr_c*);
    /* 801A4DA0 */ void setLightTevColorType_MAJI(J3DModelData*, dKy_tevstr_c*);
};

struct dRes_info_c {};

struct dRes_control_c {
    /* 8003C37C */ void getRes(char const*, char const*, dRes_info_c*, int);
};

struct dDlst_shadowControl_c {
    static u8 mSimpleTexObj[32];
};

struct dCcD_Stts {
    /* 80083860 */ void Init(int, int, fopAc_ac_c*);
};

struct dCcD_SrcCyl {};

struct dCcD_GStts {
    /* 80083760 */ dCcD_GStts();
    /* 80CA6A14 */ ~dCcD_GStts();
};

struct dCcD_GObjInf {
    /* 80083A28 */ dCcD_GObjInf();
    /* 800840E4 */ ~dCcD_GObjInf();
    /* 80084460 */ void ChkTgHit();
    /* 800844F8 */ void GetTgHitObj();
    /* 8008457C */ void GetTgHitObjSe();
    /* 800845B0 */ void getHitSeID(u8, int);
};

struct dCcD_Cyl {
    /* 800848B4 */ void Set(dCcD_SrcCyl const&);
};

struct dBgS_PolyPassChk {
    /* 80078E68 */ void SetObj();
};

struct dBgS_ObjAcch {
    /* 80CA6A70 */ ~dBgS_ObjAcch();
};

struct dBgS_AcchCir {
    /* 80075EAC */ dBgS_AcchCir();
    /* 80075F40 */ void SetWallR(f32);
    /* 80075F58 */ void SetWall(f32, f32);
    /* 80CA69A4 */ ~dBgS_AcchCir();
};

struct cBgS_PolyInfo {
    /* 802680B0 */ ~cBgS_PolyInfo();
};

struct dBgS {
    /* 80074BE8 */ void GetPolyColor(cBgS_PolyInfo const&);
    /* 80075100 */ void GetRoomId(cBgS_PolyInfo const&);
};

struct dBgS_Acch {
    /* 80075F94 */ ~dBgS_Acch();
    /* 800760A0 */ dBgS_Acch();
    /* 80076248 */ void Set(cXyz*, cXyz*, fopAc_ac_c*, int, dBgS_AcchCir*, cXyz*, csXyz*, csXyz*);
    /* 80076AAC */ void CrrPos(dBgS&);
};

struct dAttCatch_c {
    /* 80073A08 */ void request(fopAc_ac_c*, u8, f32, f32, f32, s16, int);
};

struct cM3dGCyl {
    /* 8026F1DC */ void SetC(cXyz const&);
    /* 8026F1F8 */ void SetH(f32);
    /* 8026F200 */ void SetR(f32);
    /* 80CA6914 */ ~cM3dGCyl();
};

struct cM3dGCir {
    /* 8026EF18 */ ~cM3dGCir();
};

struct cM3dGAab {
    /* 80CA695C */ ~cM3dGAab();
};

struct cCcD_Obj {};

struct cCcS {
    /* 80264BA8 */ void Set(cCcD_Obj*);
};

struct cCcD_GStts {
    /* 80CA75E0 */ ~cCcD_GStts();
};

struct cBgS_GndChk {
    /* 80267C1C */ cBgS_GndChk();
    /* 80267C94 */ ~cBgS_GndChk();
};

struct _GXTexObj {};

struct Z2SoundObjSimple {
    /* 802BE844 */ Z2SoundObjSimple();
};

struct Z2SoundObjBase {
    /* 802BDF48 */ ~Z2SoundObjBase();
    /* 802BDFF8 */ void deleteObject();
    /* 802BE4A4 */ void startCollisionSE(u32, u32, Z2SoundObjBase*);
};

struct J3DModel {};

struct J3DFrameCtrl {
    /* 803283FC */ void init(s16);
    /* 80CA6AE0 */ ~J3DFrameCtrl();
};

//
// Forward References:
//

extern "C" void create__15daObj_Oiltubo_cFv();
extern "C" void __dt__8cM3dGCylFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__12dBgS_AcchCirFv();
extern "C" void __dt__10dCcD_GSttsFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" void __dt__12J3DFrameCtrlFv();
extern "C" void CreateHeap__15daObj_Oiltubo_cFv();
extern "C" void Delete__15daObj_Oiltubo_cFv();
extern "C" void Execute__15daObj_Oiltubo_cFv();
extern "C" void Draw__15daObj_Oiltubo_cFv();
extern "C" void createHeapCallBack__15daObj_Oiltubo_cFP10fopAc_ac_c();
extern "C" void getResName__15daObj_Oiltubo_cFv();
extern "C" void restart__15daObj_Oiltubo_cFv();
extern "C" void initialize__15daObj_Oiltubo_cFv();
extern "C" void setProcess__15daObj_Oiltubo_cFM15daObj_Oiltubo_cFPCvPvPv_i();
extern "C" void setParam__15daObj_Oiltubo_cFv();
extern "C" void setEnvTevColor__15daObj_Oiltubo_cFv();
extern "C" void setRoomNo__15daObj_Oiltubo_cFv();
extern "C" void setMtx__15daObj_Oiltubo_cFv();
extern "C" void setAttnPos__15daObj_Oiltubo_cFv();
extern "C" void chkEvent__15daObj_Oiltubo_cFv();
extern "C" void wait__15daObj_Oiltubo_cFPv();
extern "C" static void daObj_Oiltubo_Create__FPv();
extern "C" static void daObj_Oiltubo_Delete__FPv();
extern "C" static void daObj_Oiltubo_Execute__FPv();
extern "C" static void daObj_Oiltubo_Draw__FPv();
extern "C" static bool daObj_Oiltubo_IsDelete__FPv();
extern "C" void __dt__10cCcD_GSttsFv();
extern "C" void __dt__15daObj_Oiltubo_cFv();
extern "C" void __sinit_d_a_obj_oiltubo_cpp();
extern "C" static void func_80CA78D8();
extern "C" static void func_80CA78E0();
extern "C" u8 const mCcDObjInfo__15daObj_Oiltubo_c[48];
extern "C" extern char const* const d_a_obj_oiltubo__stringBase0;
extern "C" u8 mCcDCyl__15daObj_Oiltubo_c[68];

//
// External References:
//

extern "C" void scaleM__14mDoMtx_stack_cFRC4cXyz();
extern "C" void ZXYrotM__14mDoMtx_stack_cFRC5csXyz();
extern "C" void play__14mDoExt_baseAnmFv();
extern "C" void init__13mDoExt_btkAnmFP16J3DMaterialTableP19J3DAnmTextureSRTKeyiifss();
extern "C" void entry__13mDoExt_btkAnmFP16J3DMaterialTablef();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_setCullSizeBox2__FP10fopAc_ac_cP12J3DModelData();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void
dComIfGd_setShadow__FUlScP8J3DModelP4cXyzffffR13cBgS_PolyInfoP12dKy_tevstr_csfP9_GXTexObj();
extern "C" void getRes__14dRes_control_cFPCcPCcP11dRes_info_ci();
extern "C" void request__11dAttCatch_cFP10fopAc_ac_cUcfffsi();
extern "C" void GetPolyColor__4dBgSFRC13cBgS_PolyInfo();
extern "C" void GetRoomId__4dBgSFRC13cBgS_PolyInfo();
extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void SetWallR__12dBgS_AcchCirFf();
extern "C" void SetWall__12dBgS_AcchCirFff();
extern "C" void __dt__9dBgS_AcchFv();
extern "C" void __ct__9dBgS_AcchFv();
extern "C" void Set__9dBgS_AcchFP4cXyzP4cXyzP10fopAc_ac_ciP12dBgS_AcchCirP4cXyzP5csXyzP5csXyz();
extern "C" void CrrPos__9dBgS_AcchFR4dBgS();
extern "C" void SetObj__16dBgS_PolyPassChkFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void __dt__12dCcD_GObjInfFv();
extern "C" void ChkTgHit__12dCcD_GObjInfFv();
extern "C" void GetTgHitObj__12dCcD_GObjInfFv();
extern "C" void GetTgHitObjSe__12dCcD_GObjInfFv();
extern "C" void getHitSeID__12dCcD_GObjInfFUci();
extern "C" void Set__8dCcD_CylFRC11dCcD_SrcCyl();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void __ct__11cBgS_GndChkFv();
extern "C" void __dt__11cBgS_GndChkFv();
extern "C" void __dt__13cBgS_PolyInfoFv();
extern "C" void __dt__8cM3dGCirFv();
extern "C" void SetC__8cM3dGCylFRC4cXyz();
extern "C" void SetH__8cM3dGCylFf();
extern "C" void SetR__8cM3dGCylFf();
extern "C" void __dt__14Z2SoundObjBaseFv();
extern "C" void deleteObject__14Z2SoundObjBaseFv();
extern "C" void startCollisionSE__14Z2SoundObjBaseFUlUlP14Z2SoundObjBase();
extern "C" void __ct__16Z2SoundObjSimpleFv();
extern "C" void __dl__FPv();
extern "C" void init__12J3DFrameCtrlFs();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void __ptmf_test();
extern "C" void __ptmf_scall();
extern "C" void _savegpr_26();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_26();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__8dCcD_Cyl[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_CylAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" extern void* __vt__16Z2SoundObjSimple[8];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" u8 mSimpleTexObj__21dDlst_shadowControl_c[32];
extern "C" extern u8 g_env_light[4880];

//
// Declarations:
//

/* ############################################################################################## */
/* 80CA7948-80CA7948 000054 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80CA7948 = "Obj_otubo";
SECTION_DEAD static char const* const stringBase_80CA7952 = "x_oiltubo_00.bmd";
SECTION_DEAD static char const* const stringBase_80CA7963 = "x_oiltubo_00b.bmd";
SECTION_DEAD static char const* const stringBase_80CA7975 = "x_oiltubo_00b.btk";
#pragma pop

/* 80CA7988-80CA7994 000000 000C+00 1/1 0/0 0/0 .data            cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80CA7994-80CA79A8 00000C 0004+10 0/0 0/0 0/0 .data            @1787 */
#pragma push
#pragma force_active on
SECTION_DATA static u32 lit_1787[1 + 4 /* padding */] = {
    0x02000201,
    /* padding */
    0x40080000,
    0x00000000,
    0x3FE00000,
    0x00000000,
};
#pragma pop

/* 80CA79A8-80CA79AC -00001 0004+00 1/1 0/0 0/0 .data            l_resFileName */
SECTION_DATA static void* l_resFileName = (void*)&d_a_obj_oiltubo__stringBase0;

/* 80CA79AC-80CA79B0 -00001 0004+00 0/1 0/0 0/0 .data            l_bmdFileName */
#pragma push
#pragma force_active on
SECTION_DATA static void* l_bmdFileName = (void*)(((char*)&d_a_obj_oiltubo__stringBase0) + 0xA);
#pragma pop

/* 80CA79B0-80CA79B4 -00001 0004+00 0/1 0/0 0/0 .data            l_bbmdFileName */
#pragma push
#pragma force_active on
SECTION_DATA static void* l_bbmdFileName = (void*)(((char*)&d_a_obj_oiltubo__stringBase0) + 0x1B);
#pragma pop

/* 80CA79B4-80CA79B8 -00001 0004+00 0/2 0/0 0/0 .data            l_bbtkFileName */
#pragma push
#pragma force_active on
SECTION_DATA static void* l_bbtkFileName = (void*)(((char*)&d_a_obj_oiltubo__stringBase0) + 0x2D);
#pragma pop

/* 80CA79B8-80CA79FC 000030 0044+00 2/2 0/0 0/0 .data            mCcDCyl__15daObj_Oiltubo_c */
SECTION_DATA u8 daObj_Oiltubo_c::mCcDCyl[68] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80CA79FC-80CA7A08 -00001 000C+00 1/1 0/0 0/0 .data            @3897 */
SECTION_DATA static void* lit_3897[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)wait__15daObj_Oiltubo_cFPv,
};

/* 80CA7A08-80CA7A28 -00001 0020+00 1/0 0/0 0/0 .data            daObj_Oiltubo_MethodTable */
SECTION_DATA static void* daObj_Oiltubo_MethodTable[8] = {
    (void*)daObj_Oiltubo_Create__FPv,
    (void*)daObj_Oiltubo_Delete__FPv,
    (void*)daObj_Oiltubo_Execute__FPv,
    (void*)daObj_Oiltubo_IsDelete__FPv,
    (void*)daObj_Oiltubo_Draw__FPv,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80CA7A28-80CA7A58 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_OBJ_OILTUBO */
SECTION_DATA extern void* g_profile_OBJ_OILTUBO[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x011E0000, (void*)&g_fpcLf_Method,
    (void*)0x00000AD4, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x00420000, (void*)&daObj_Oiltubo_MethodTable,
    (void*)0x00044100, (void*)0x000E0000,
};

/* 80CA7A58-80CA7A64 0000D0 000C+00 3/3 0/0 0/0 .data            __vt__10cCcD_GStts */
SECTION_DATA extern void* __vt__10cCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10cCcD_GSttsFv,
};

/* 80CA7A64-80CA7A70 0000DC 000C+00 2/2 0/0 0/0 .data            __vt__10dCcD_GStts */
SECTION_DATA extern void* __vt__10dCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10dCcD_GSttsFv,
};

/* 80CA7A70-80CA7A7C 0000E8 000C+00 2/2 0/0 0/0 .data            __vt__12dBgS_AcchCir */
SECTION_DATA extern void* __vt__12dBgS_AcchCir[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_AcchCirFv,
};

/* 80CA7A7C-80CA7A88 0000F4 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGCyl */
SECTION_DATA extern void* __vt__8cM3dGCyl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGCylFv,
};

/* 80CA7A88-80CA7A94 000100 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80CA7A94-80CA7AB8 00010C 0024+00 3/3 0/0 0/0 .data            __vt__12dBgS_ObjAcch */
SECTION_DATA extern void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80CA78E0,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80CA78D8,
};

/* 80CA7AB8-80CA7AC4 000130 000C+00 3/3 0/0 0/0 .data            __vt__12J3DFrameCtrl */
SECTION_DATA extern void* __vt__12J3DFrameCtrl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12J3DFrameCtrlFv,
};

/* 80CA7AC4-80CA7AD0 00013C 000C+00 2/2 0/0 0/0 .data            __vt__15daObj_Oiltubo_c */
SECTION_DATA extern void* __vt__15daObj_Oiltubo_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__15daObj_Oiltubo_cFv,
};

/* 80CA6718-80CA6914 000078 01FC+00 1/1 0/0 0/0 .text            create__15daObj_Oiltubo_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj_Oiltubo_c::create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_oiltubo/d_a_obj_oiltubo/create__15daObj_Oiltubo_cFv.s"
}
#pragma pop

/* 80CA6914-80CA695C 000274 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGCylFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGCyl::~cM3dGCyl() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_oiltubo/d_a_obj_oiltubo/__dt__8cM3dGCylFv.s"
}
#pragma pop

/* 80CA695C-80CA69A4 0002BC 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGAab::~cM3dGAab() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_oiltubo/d_a_obj_oiltubo/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 80CA69A4-80CA6A14 000304 0070+00 1/0 0/0 0/0 .text            __dt__12dBgS_AcchCirFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_AcchCir::~dBgS_AcchCir() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_oiltubo/d_a_obj_oiltubo/__dt__12dBgS_AcchCirFv.s"
}
#pragma pop

/* 80CA6A14-80CA6A70 000374 005C+00 1/0 0/0 0/0 .text            __dt__10dCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dCcD_GStts::~dCcD_GStts() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_oiltubo/d_a_obj_oiltubo/__dt__10dCcD_GSttsFv.s"
}
#pragma pop

/* 80CA6A70-80CA6AE0 0003D0 0070+00 3/2 0/0 0/0 .text            __dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_ObjAcch::~dBgS_ObjAcch() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_oiltubo/d_a_obj_oiltubo/__dt__12dBgS_ObjAcchFv.s"
}
#pragma pop

/* 80CA6AE0-80CA6B28 000440 0048+00 1/0 0/0 0/0 .text            __dt__12J3DFrameCtrlFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J3DFrameCtrl::~J3DFrameCtrl() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_oiltubo/d_a_obj_oiltubo/__dt__12J3DFrameCtrlFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80CA78F4-80CA7924 000000 0030+00 5/5 0/0 0/0 .rodata          mCcDObjInfo__15daObj_Oiltubo_c */
SECTION_RODATA u8 const daObj_Oiltubo_c::mCcDObjInfo[48] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xD8, 0xFB, 0xFD, 0xFF, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x79, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80CA78F4, &daObj_Oiltubo_c::mCcDObjInfo);

/* 80CA7924-80CA7928 000030 0004+00 1/3 0/0 0/0 .rodata          @3815 */
SECTION_RODATA static f32 const lit_3815 = 1.0f;
COMPILER_STRIP_GATE(0x80CA7924, &lit_3815);

/* 80CA6B28-80CA6C5C 000488 0134+00 1/1 0/0 0/0 .text            CreateHeap__15daObj_Oiltubo_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj_Oiltubo_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_oiltubo/d_a_obj_oiltubo/CreateHeap__15daObj_Oiltubo_cFv.s"
}
#pragma pop

/* 80CA6C5C-80CA6CA0 0005BC 0044+00 1/1 0/0 0/0 .text            Delete__15daObj_Oiltubo_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj_Oiltubo_c::Delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_oiltubo/d_a_obj_oiltubo/Delete__15daObj_Oiltubo_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80CA7928-80CA792C 000034 0004+00 0/1 0/0 0/0 .rodata          @3863 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3863 = -1000000000.0f;
COMPILER_STRIP_GATE(0x80CA7928, &lit_3863);
#pragma pop

/* 80CA792C-80CA7930 000038 0004+00 1/4 0/0 0/0 .rodata          @3864 */
SECTION_RODATA static f32 const lit_3864 = 50.0f;
COMPILER_STRIP_GATE(0x80CA792C, &lit_3864);

/* 80CA7930-80CA7934 00003C 0004+00 1/3 0/0 0/0 .rodata          @3865 */
SECTION_RODATA static f32 const lit_3865 = 70.0f;
COMPILER_STRIP_GATE(0x80CA7930, &lit_3865);

/* 80CA6CA0-80CA6EDC 000600 023C+00 2/2 0/0 0/0 .text            Execute__15daObj_Oiltubo_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj_Oiltubo_c::Execute() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_oiltubo/d_a_obj_oiltubo/Execute__15daObj_Oiltubo_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80CA7934-80CA7938 000040 0004+00 0/1 0/0 0/0 .rodata          @3884 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3884 = 800.0f;
COMPILER_STRIP_GATE(0x80CA7934, &lit_3884);
#pragma pop

/* 80CA7938-80CA793C 000044 0004+00 0/1 0/0 0/0 .rodata          @3885 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3885 = 120.0f;
COMPILER_STRIP_GATE(0x80CA7938, &lit_3885);
#pragma pop

/* 80CA6EDC-80CA6FC8 00083C 00EC+00 1/1 0/0 0/0 .text            Draw__15daObj_Oiltubo_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj_Oiltubo_c::Draw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_oiltubo/d_a_obj_oiltubo/Draw__15daObj_Oiltubo_cFv.s"
}
#pragma pop

/* 80CA6FC8-80CA6FE8 000928 0020+00 1/1 0/0 0/0 .text
 * createHeapCallBack__15daObj_Oiltubo_cFP10fopAc_ac_c          */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj_Oiltubo_c::createHeapCallBack(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_oiltubo/d_a_obj_oiltubo/createHeapCallBack__15daObj_Oiltubo_cFP10fopAc_ac_c.s"
}
#pragma pop

/* 80CA6FE8-80CA6FF8 000948 0010+00 4/4 0/0 0/0 .text            getResName__15daObj_Oiltubo_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj_Oiltubo_c::getResName() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_oiltubo/d_a_obj_oiltubo/getResName__15daObj_Oiltubo_cFv.s"
}
#pragma pop

/* 80CA6FF8-80CA7068 000958 0070+00 1/1 0/0 0/0 .text            restart__15daObj_Oiltubo_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj_Oiltubo_c::restart() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_oiltubo/d_a_obj_oiltubo/restart__15daObj_Oiltubo_cFv.s"
}
#pragma pop

/* 80CA7068-80CA720C 0009C8 01A4+00 1/1 0/0 0/0 .text            initialize__15daObj_Oiltubo_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj_Oiltubo_c::initialize() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_oiltubo/d_a_obj_oiltubo/initialize__15daObj_Oiltubo_cFv.s"
}
#pragma pop

/* 80CA720C-80CA72BC 000B6C 00B0+00 1/1 0/0 0/0 .text
 * setProcess__15daObj_Oiltubo_cFM15daObj_Oiltubo_cFPCvPvPv_i   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj_Oiltubo_c::setProcess(int (daObj_Oiltubo_c::*param_0)(void*)) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_oiltubo/d_a_obj_oiltubo/setProcess__15daObj_Oiltubo_cFM15daObj_Oiltubo_cFPCvPvPv_i.s"
}
#pragma pop

/* 80CA72BC-80CA7318 000C1C 005C+00 1/1 0/0 0/0 .text            setParam__15daObj_Oiltubo_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj_Oiltubo_c::setParam() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_oiltubo/d_a_obj_oiltubo/setParam__15daObj_Oiltubo_cFv.s"
}
#pragma pop

/* 80CA7318-80CA7374 000C78 005C+00 2/2 0/0 0/0 .text            setEnvTevColor__15daObj_Oiltubo_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj_Oiltubo_c::setEnvTevColor() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_oiltubo/d_a_obj_oiltubo/setEnvTevColor__15daObj_Oiltubo_cFv.s"
}
#pragma pop

/* 80CA7374-80CA73B8 000CD4 0044+00 2/2 0/0 0/0 .text            setRoomNo__15daObj_Oiltubo_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj_Oiltubo_c::setRoomNo() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_oiltubo/d_a_obj_oiltubo/setRoomNo__15daObj_Oiltubo_cFv.s"
}
#pragma pop

/* 80CA73B8-80CA7430 000D18 0078+00 1/1 0/0 0/0 .text            setMtx__15daObj_Oiltubo_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj_Oiltubo_c::setMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_oiltubo/d_a_obj_oiltubo/setMtx__15daObj_Oiltubo_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80CA793C-80CA7940 000048 0004+00 1/1 0/0 0/0 .rodata          @3999 */
SECTION_RODATA static f32 const lit_3999 = 150.0f;
COMPILER_STRIP_GATE(0x80CA793C, &lit_3999);

/* 80CA7430-80CA7478 000D90 0048+00 1/1 0/0 0/0 .text            setAttnPos__15daObj_Oiltubo_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj_Oiltubo_c::setAttnPos() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_oiltubo/d_a_obj_oiltubo/setAttnPos__15daObj_Oiltubo_cFv.s"
}
#pragma pop

/* 80CA7478-80CA74C8 000DD8 0050+00 1/1 0/0 0/0 .text            chkEvent__15daObj_Oiltubo_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj_Oiltubo_c::chkEvent() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_oiltubo/d_a_obj_oiltubo/chkEvent__15daObj_Oiltubo_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80CA7940-80CA7944 00004C 0004+00 0/1 0/0 0/0 .rodata          @4029 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4029 = 100.0f;
COMPILER_STRIP_GATE(0x80CA7940, &lit_4029);
#pragma pop

/* 80CA7944-80CA7948 000050 0004+00 0/1 0/0 0/0 .rodata          @4030 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4030 = -50.0f;
COMPILER_STRIP_GATE(0x80CA7944, &lit_4030);
#pragma pop

/* 80CA74C8-80CA7558 000E28 0090+00 1/0 0/0 0/0 .text            wait__15daObj_Oiltubo_cFPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj_Oiltubo_c::wait(void* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_oiltubo/d_a_obj_oiltubo/wait__15daObj_Oiltubo_cFPv.s"
}
#pragma pop

/* 80CA7558-80CA7578 000EB8 0020+00 1/0 0/0 0/0 .text            daObj_Oiltubo_Create__FPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObj_Oiltubo_Create(void* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_oiltubo/d_a_obj_oiltubo/daObj_Oiltubo_Create__FPv.s"
}
#pragma pop

/* 80CA7578-80CA7598 000ED8 0020+00 1/0 0/0 0/0 .text            daObj_Oiltubo_Delete__FPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObj_Oiltubo_Delete(void* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_oiltubo/d_a_obj_oiltubo/daObj_Oiltubo_Delete__FPv.s"
}
#pragma pop

/* 80CA7598-80CA75B8 000EF8 0020+00 1/0 0/0 0/0 .text            daObj_Oiltubo_Execute__FPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObj_Oiltubo_Execute(void* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_oiltubo/d_a_obj_oiltubo/daObj_Oiltubo_Execute__FPv.s"
}
#pragma pop

/* 80CA75B8-80CA75D8 000F18 0020+00 1/0 0/0 0/0 .text            daObj_Oiltubo_Draw__FPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObj_Oiltubo_Draw(void* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_oiltubo/d_a_obj_oiltubo/daObj_Oiltubo_Draw__FPv.s"
}
#pragma pop

/* 80CA75D8-80CA75E0 000F38 0008+00 1/0 0/0 0/0 .text            daObj_Oiltubo_IsDelete__FPv */
static bool daObj_Oiltubo_IsDelete(void* param_0) {
    return true;
}

/* 80CA75E0-80CA7628 000F40 0048+00 1/0 0/0 0/0 .text            __dt__10cCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cCcD_GStts::~cCcD_GStts() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_oiltubo/d_a_obj_oiltubo/__dt__10cCcD_GSttsFv.s"
}
#pragma pop

/* 80CA7628-80CA78A0 000F88 0278+00 1/0 0/0 0/0 .text            __dt__15daObj_Oiltubo_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daObj_Oiltubo_c::~daObj_Oiltubo_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_oiltubo/d_a_obj_oiltubo/__dt__15daObj_Oiltubo_cFv.s"
}
#pragma pop

/* 80CA78A0-80CA78D8 001200 0038+00 0/0 1/0 0/0 .text            __sinit_d_a_obj_oiltubo_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __sinit_d_a_obj_oiltubo_cpp() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_oiltubo/d_a_obj_oiltubo/__sinit_d_a_obj_oiltubo_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
REGISTER_CTORS(0x80CA78A0, __sinit_d_a_obj_oiltubo_cpp);
#pragma pop

/* 80CA78D8-80CA78E0 001238 0008+00 1/0 0/0 0/0 .text            @36@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80CA78D8() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_oiltubo/d_a_obj_oiltubo/func_80CA78D8.s"
}
#pragma pop

/* 80CA78E0-80CA78E8 001240 0008+00 1/0 0/0 0/0 .text            @20@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80CA78E0() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_oiltubo/d_a_obj_oiltubo/func_80CA78E0.s"
}
#pragma pop

/* 80CA7948-80CA7948 000054 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
