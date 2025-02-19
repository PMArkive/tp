//
// Generated By: dol2asm
// Translation Unit: d/bg/d_bg_s_movebg_actor
//

#include "d/bg/d_bg_s_movebg_actor.h"
#include "d/com/d_com_inf_game.h"
#include "dol2asm.h"
#include "dolphin/types.h"
#include "m_Do/m_Do_mtx.h"

//
// Forward References:
//

extern "C" void __ct__16dBgS_MoveBgActorFv();
extern "C" static void CheckCreateHeap__FP10fopAc_ac_c();
extern "C" bool CreateHeap__16dBgS_MoveBgActorFv();
extern "C" bool Create__16dBgS_MoveBgActorFv();
extern "C" bool Execute__16dBgS_MoveBgActorFPPA3_A4_f();
extern "C" bool Draw__16dBgS_MoveBgActorFv();
extern "C" bool Delete__16dBgS_MoveBgActorFv();
extern "C" bool IsDelete__16dBgS_MoveBgActorFv();
extern "C" bool ToFore__16dBgS_MoveBgActorFv();
extern "C" bool ToBack__16dBgS_MoveBgActorFv();
extern "C" void MoveBGCreateHeap__16dBgS_MoveBgActorFv();
extern "C" void
MoveBGCreate__16dBgS_MoveBgActorFPCciPFP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz_vUlPA3_A4_f();
extern "C" void MoveBGDelete__16dBgS_MoveBgActorFv();
extern "C" void MoveBGExecute__16dBgS_MoveBgActorFv();
extern "C" u8 m_name__16dBgS_MoveBgActor[4];
extern "C" u8 m_dzb_id__16dBgS_MoveBgActor[4];
extern "C" u8 m_set_func__16dBgS_MoveBgActor[4 + 4 /* padding */];

//
// External References:
//

extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void scaleM__14mDoMtx_stack_cFfff();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void Release__4cBgSFP9dBgW_Base();
extern "C" void Regist__4dBgSFP9dBgW_BaseP10fopAc_ac_c();
extern "C" void Set__4cBgWFP6cBgD_tUlPA3_A4_f();
extern "C" void __ct__4dBgWFv();
extern "C" void Move__4dBgWFv();
extern "C" void ChkUsed__9cBgW_BgIdCFv();
extern "C" void* __nw__FUl();
extern "C" void _savegpr_27();
extern "C" void _restgpr_27();
extern "C" u8 now__14mDoMtx_stack_c[48];

//
// Declarations:
//

/* ############################################################################################## */
/* 803AB9A0-803AB9C8 008AC0 0028+00 1/1 0/0 34/34 .data            __vt__16dBgS_MoveBgActor */
SECTION_DATA extern void* __vt__16dBgS_MoveBgActor[10] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)CreateHeap__16dBgS_MoveBgActorFv,
    (void*)Create__16dBgS_MoveBgActorFv,
    (void*)Execute__16dBgS_MoveBgActorFPPA3_A4_f,
    (void*)Draw__16dBgS_MoveBgActorFv,
    (void*)Delete__16dBgS_MoveBgActorFv,
    (void*)IsDelete__16dBgS_MoveBgActorFv,
    (void*)ToFore__16dBgS_MoveBgActorFv,
    (void*)ToBack__16dBgS_MoveBgActorFv,
};

/* 80078624-80078668 072F64 0044+00 0/0 0/0 173/173 .text            __ct__16dBgS_MoveBgActorFv */
dBgS_MoveBgActor::dBgS_MoveBgActor() {
    field_0x568 = NULL;
}

/* 80078668-80078688 072FA8 0020+00 1/1 0/0 0/0 .text            CheckCreateHeap__FP10fopAc_ac_c */
static int CheckCreateHeap(fopAc_ac_c* p_actor) {
    return static_cast<dBgS_MoveBgActor*>(p_actor)->MoveBGCreateHeap();
}

/* 80078688-80078690 072FC8 0008+00 1/0 0/0 2/0 .text            CreateHeap__16dBgS_MoveBgActorFv */
s32 dBgS_MoveBgActor::CreateHeap() {
    return 1;
}

/* 80078690-80078698 072FD0 0008+00 1/0 0/0 60/0 .text            Create__16dBgS_MoveBgActorFv */
bool dBgS_MoveBgActor::Create() {
    return true;
}

/* 80078698-800786A0 072FD8 0008+00 1/0 0/0 3/0 .text Execute__16dBgS_MoveBgActorFPPA3_A4_f */
bool dBgS_MoveBgActor::Execute(f32 (**param_0)[3][4]) {
    return true;
}

/* 800786A0-800786A8 072FE0 0008+00 1/0 0/0 2/0 .text            Draw__16dBgS_MoveBgActorFv */
bool dBgS_MoveBgActor::Draw() {
    return true;
}

/* 800786A8-800786B0 072FE8 0008+00 1/0 0/0 6/0 .text            Delete__16dBgS_MoveBgActorFv */
bool dBgS_MoveBgActor::Delete() {
    return true;
}

/* 800786B0-800786B8 072FF0 0008+00 1/0 0/0 171/0 .text            IsDelete__16dBgS_MoveBgActorFv */
bool dBgS_MoveBgActor::IsDelete() {
    return true;
}

/* 800786B8-800786C0 072FF8 0008+00 1/0 0/0 171/0 .text            ToFore__16dBgS_MoveBgActorFv */
bool dBgS_MoveBgActor::ToFore() {
    return true;
}

/* 800786C0-800786C8 073000 0008+00 1/0 0/0 171/0 .text            ToBack__16dBgS_MoveBgActorFv */
bool dBgS_MoveBgActor::ToBack() {
    return true;
}

/* ############################################################################################## */
/* 80450F70-80450F74 000470 0004+00 2/2 0/0 0/0 .sbss            m_name__16dBgS_MoveBgActor */
const char* dBgS_MoveBgActor::m_name;

/* 80450F74-80450F78 000474 0004+00 2/2 0/0 0/0 .sbss            m_dzb_id__16dBgS_MoveBgActor */
int dBgS_MoveBgActor::m_dzb_id;

/* 80450F78-80450F80 000478 0004+04 2/2 0/0 1/1 .sbss            m_set_func__16dBgS_MoveBgActor */
MoveBGActor_SetFunc dBgS_MoveBgActor::m_set_func;

/* 800786C8-800787BC 073008 00F4+00 1/1 0/0 0/0 .text MoveBGCreateHeap__16dBgS_MoveBgActorFv */
int dBgS_MoveBgActor::MoveBGCreateHeap() {
    if (!CreateHeap()) {
        return 0;
    }

    if (m_dzb_id == -1) {
        field_0x568 = NULL;
        return 1;
    } else {
        field_0x568 = new dBgW();
        if (field_0x568 != NULL) {
            cBgD_t* res = (cBgD_t*)dComIfG_getObjectRes(m_name, m_dzb_id);
            if (!field_0x568->Set(res, 1, &field_0x56c)) {
                if (m_set_func != NULL) {
                    field_0x568->SetCrrFunc(m_set_func);
                }
            } else {
                goto RET;  // probably fake match, clean up later
            }
        } else {
        RET:
            field_0x568 = NULL;
            return 0;
        }

        return 1;
    }
}

/* 800787BC-800788DC 0730FC 0120+00 0/0 0/0 169/169 .text
 * MoveBGCreate__16dBgS_MoveBgActorFPCciPFP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz_vUlPA3_A4_f
 */
// close
#ifdef NONMATCHING
int dBgS_MoveBgActor::MoveBGCreate(char const* p_name, int dzb_id, MoveBGActor_SetFunc set_func,
                                   u32 param_3, Mtx* param_4) {
    if (param_4 == NULL) {
        mDoMtx_stack_c::transS(current.pos.x, current.pos.y, current.pos.z);
        mDoMtx_stack_c::YrotM(mCollisionRot.y);
        mDoMtx_stack_c::scaleM(mScale.x, mScale.y, mScale.z);
        PSMTXCopy(mDoMtx_stack_c::get(), field_0x56c);
    } else {
        PSMTXCopy(*param_4, field_0x56c);
    }

    m_name = p_name;
    m_dzb_id = dzb_id;
    m_set_func = set_func;

    if (!fopAcM_entrySolidHeap(this, CheckCreateHeap, param_3)) {
        return 5;
    } else {
        if (field_0x568 == NULL || dComIfG_Bgsp().Regist(field_0x568, this)) {
            return 5;
        } else {
            return Create() + 5;
        }
    }
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm int dBgS_MoveBgActor::MoveBGCreate(char const* param_0, int param_1, MoveBGActor_SetFunc,
                                       u32 param_3, Mtx* param_4) {
    nofralloc
#include "asm/d/bg/d_bg_s_movebg_actor/func_800787BC.s"
}
#pragma pop
#endif

/* 800788DC-80078950 07321C 0074+00 0/0 0/0 169/169 .text MoveBGDelete__16dBgS_MoveBgActorFv */
bool dBgS_MoveBgActor::MoveBGDelete() {
    bool ret = Delete();

    if (field_0x568 != NULL && field_0x568->ChkUsed()) {
        dComIfG_Bgsp().Release(field_0x568);
    }
    return ret;
}

/* 80078950-80078A14 073290 00C4+00 0/0 0/0 183/183 .text MoveBGExecute__16dBgS_MoveBgActorFv */
bool dBgS_MoveBgActor::MoveBGExecute() {
    Mtx* tmp = NULL;

    bool ret = Execute(&tmp);
    if (tmp == NULL) {
        mDoMtx_stack_c::transS(current.pos.x, current.pos.y, current.pos.z);
        mDoMtx_stack_c::YrotM(mCollisionRot.y);
        mDoMtx_stack_c::scaleM(mScale.x, mScale.y, mScale.z);
        PSMTXCopy(mDoMtx_stack_c::get(), field_0x56c);
    } else {
        PSMTXCopy(*tmp, field_0x56c);
    }

    if (field_0x568 != NULL) {
        field_0x568->Move();
    }
    return ret;
}
