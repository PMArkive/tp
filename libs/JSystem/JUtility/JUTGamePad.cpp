//
// Generated By: dol2asm
// Translation Unit: JUTGamePad
//

#include "JSystem/JUtility/JUTGamePad.h"
#include "MSL_C/math.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

extern "C" void __ct__10JUTGamePadFQ210JUTGamePad8EPadPort();
extern "C" void __dt__10JUTGamePadFv();
extern "C" void initList__10JUTGamePadFv();
extern "C" void init__10JUTGamePadFv();
extern "C" void clear__10JUTGamePadFv();
extern "C" void read__10JUTGamePadFv();
extern "C" void assign__10JUTGamePadFv();
extern "C" void checkResetCallback__10JUTGamePadFx();
extern "C" void update__10JUTGamePadFv();
extern "C" void checkResetSwitch__10JUTGamePadFv();
extern "C" void clearForReset__10JUTGamePadFv();
extern "C" void clear__Q210JUTGamePad7CButtonFv();
extern "C" void update__Q210JUTGamePad7CButtonFPC9PADStatusUl();
extern "C" void clear__Q210JUTGamePad6CStickFv();
extern "C" void
update__Q210JUTGamePad6CStickFScScQ210JUTGamePad10EStickModeQ210JUTGamePad11EWhichStickUl();
extern "C" void getButton__Q210JUTGamePad6CStickFUl();
extern "C" void clear__Q210JUTGamePad7CRumbleFv();
extern "C" void clear__Q210JUTGamePad7CRumbleFP10JUTGamePad();
extern "C" void startMotor__Q210JUTGamePad7CRumbleFi();
extern "C" void stopMotor__Q210JUTGamePad7CRumbleFib();
extern "C" static void getNumBit__FPUci();
extern "C" void update__Q210JUTGamePad7CRumbleFs();
extern "C" void triggerPatternedRumble__Q210JUTGamePad7CRumbleFUl();
extern "C" void startPatternedRumble__Q210JUTGamePad7CRumbleFPvQ310JUTGamePad7CRumble7ERumbleUl();
extern "C" void stopPatternedRumble__Q210JUTGamePad7CRumbleFs();
extern "C" void stopPatternedRumbleAtThePeriod__Q210JUTGamePad7CRumbleFv();
extern "C" void getGamePad__10JUTGamePadFi();
extern "C" void setEnabled__Q210JUTGamePad7CRumbleFUl();
extern "C" void setRepeat__Q210JUTGamePad7CButtonFUlUlUl();
extern "C" void recalibrate__10JUTGamePadFUl();
extern "C" void checkCallback__19JUTGamePadLongPressFiUl();
extern "C" void __sinit_JUTGamePad_cpp();
extern "C" void func_802E1C54(void* _this);
extern "C" void __ct__Q210JUTGamePad6CStickFv();
extern "C" void __ct__Q210JUTGamePad7CButtonFv();
extern "C" void func_802E1D08(void* _this);
extern "C" u8 sChannelMask__Q210JUTGamePad7CRumble[16];
extern "C" u8 mPadList__10JUTGamePad[12];
extern "C" u8 mPadStatus__10JUTGamePad[48];
extern "C" u8 mPadButton__10JUTGamePad[192];
extern "C" u8 mPadMStick__10JUTGamePad[64];
extern "C" u8 mPadSStick__10JUTGamePad[64];
extern "C" u8 sPatternList__19JUTGamePadLongPress[12];
extern "C" u32 sStickMode__10JUTGamePad;
extern "C" u32 sClampMode__10JUTGamePad;
extern "C" f32 sPressPoint__Q210JUTGamePad6CStick;
extern "C" f32 sReleasePoint__Q210JUTGamePad6CStick;
extern "C" u32 sResetPattern__Q210JUTGamePad13C3ButtonReset;
extern "C" u32 sResetMaskPattern__Q210JUTGamePad13C3ButtonReset;
extern "C" u8 mPadAssign__10JUTGamePad[4];
extern "C" u8 sSuppressPadReset__10JUTGamePad[4];
extern "C" u8 sAnalogMode__10JUTGamePad[4];
extern "C" u8 sRumbleSupported__10JUTGamePad[4];
extern "C" u8 mStatus__Q210JUTGamePad7CRumble[4];
extern "C" u8 mEnabled__Q210JUTGamePad7CRumble[4];
extern "C" u8 sCallback__Q210JUTGamePad13C3ButtonReset[4];
extern "C" u8 sCallbackArg__Q210JUTGamePad13C3ButtonReset[4 + 4 /* padding */];
extern "C" u8 sThreshold__Q210JUTGamePad13C3ButtonReset[4];
extern "C" u8 sResetOccurredPort__Q210JUTGamePad13C3ButtonReset[4];

//
// External References:
//

extern "C" void __dl__FPv();
extern "C" void __ct__11JKRDisposerFv();
extern "C" void __dt__11JKRDisposerFv();
extern "C" void __ct__10JSUPtrLinkFPv();
extern "C" void __dt__10JSUPtrLinkFv();
extern "C" void __ct__10JSUPtrListFb();
extern "C" void __dt__10JSUPtrListFv();
extern "C" void initiate__10JSUPtrListFv();
extern "C" void append__10JSUPtrListFP10JSUPtrLink();
extern "C" void remove__10JSUPtrListFP10JSUPtrLink();
extern "C" void __register_global_object();
extern "C" void __construct_array();
extern "C" void _savegpr_22();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_22();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();

//
// Declarations:
//

/* ############################################################################################## */
/* 803CC5F0-803CC600 029710 0010+00 3/3 0/0 0/0 .data sChannelMask__Q210JUTGamePad7CRumble */
SECTION_DATA PADMask JUTGamePad::CRumble::sChannelMask[4] = {
    PAD_CHAN0_BIT,
    PAD_CHAN1_BIT,
    PAD_CHAN2_BIT,
    PAD_CHAN3_BIT,
};

/* 803CC600-803CC610 029720 0010+00 2/2 0/0 0/0 .data            channel_mask */
SECTION_DATA static u32 channel_mask[4] = {0x80000000, 0x40000000, 0x20000000, 0x10000000};

/* 804343E4-804343F0 061104 000C+00 4/6 0/0 0/0 .bss             mPadList__10JUTGamePad */
JSUList<JUTGamePad> JUTGamePad::mPadList(false);

/* 804514D0-804514D4 0009D0 0004+00 1/1 0/0 0/0 .sbss            None */
bool JUTGamePad::mListInitialized;

/* 804514D4-804514D8 0009D4 0004+00 3/3 0/0 0/0 .sbss            mPadAssign__10JUTGamePad */
u8 JUTGamePad::mPadAssign[4];

/* 802E06DC-802E07B0 2DB01C 00D4+00 0/0 4/4 0/0 .text __ct__10JUTGamePadFQ210JUTGamePad8EPadPort
 */
JUTGamePad::JUTGamePad(EPadPort port) : mRumble(this), mLink(this) {
    mPortNum = port;
    if (mPortNum >= 0) {
        mPadAssign[port]++;
    }

    initList();
    mPadList.append(&mLink);
    update();
    mPadRecord = 0;
    mPadReplay = 0;
    clear();
}

/* 802E07B0-802E085C 2DB0F0 00AC+00 1/0 2/2 0/0 .text            __dt__10JUTGamePadFv */
JUTGamePad::~JUTGamePad() {
    if (mPortNum >= 0) {
        mPadAssign[mPortNum]--;
        mPortNum = -1;
    }

    mPadList.remove(&mLink);
}

/* 802E085C-802E0898 2DB19C 003C+00 1/1 0/0 0/0 .text            initList__10JUTGamePadFv */
void JUTGamePad::initList() {
    if (!mListInitialized) {
        mPadList.initiate();
        mListInitialized = true;
    }
}

/* ############################################################################################## */
/* 804514D8-804514DC 0009D8 0004+00 2/2 0/0 0/0 .sbss            sSuppressPadReset__10JUTGamePad */
u32 JUTGamePad::sSuppressPadReset;

/* 804514DC-804514E0 0009DC 0004+00 1/1 1/1 0/0 .sbss            sAnalogMode__10JUTGamePad */
s32 JUTGamePad::sAnalogMode;

/* 802E0898-802E08D0 2DB1D8 0038+00 0/0 1/1 0/0 .text            init__10JUTGamePadFv */
s32 JUTGamePad::init() {
    PADSetSpec(5);
    setAnalogMode(3);
    return PADInit();
}

/* 802E08D0-802E08E4 2DB210 0014+00 1/1 0/0 0/0 .text            clear__10JUTGamePadFv */
void JUTGamePad::clear() {
    mButtonReset.mReset = false;
    field_0xa8 = 1;
}

/* ############################################################################################## */
/* 804343F0-80434420 061110 0030+00 1/3 1/1 0/0 .bss             mPadStatus__10JUTGamePad */
PADStatus JUTGamePad::mPadStatus[4];

/* 80434420-804344E0 061140 00C0+00 1/4 0/0 0/0 .bss             mPadButton__10JUTGamePad */
JUTGamePad::CButton JUTGamePad::mPadButton[4];

/* 804344E0-80434520 061200 0040+00 0/3 0/0 0/0 .bss             mPadMStick__10JUTGamePad */
#pragma push
#pragma force_active on
JUTGamePad::CStick JUTGamePad::mPadMStick[4];
#pragma pop

/* 80434520-80434560 061240 0040+00 0/3 0/0 0/0 .bss             mPadSStick__10JUTGamePad */
#pragma push
#pragma force_active on
JUTGamePad::CStick JUTGamePad::mPadSStick[4];
#pragma pop

/* 804508D8-804508DC 000358 0004+00 1/1 0/0 0/0 .sdata           sStickMode__10JUTGamePad */
SECTION_SDATA JUTGamePad::EStickMode JUTGamePad::sStickMode = STICK_MODE_1;

/* 804508DC-804508E0 00035C 0004+00 2/2 0/0 0/0 .sdata           sClampMode__10JUTGamePad */
SECTION_SDATA u32 JUTGamePad::sClampMode = 0x00000001;

/* 804514E0-804514E4 0009E0 0004+00 1/1 2/2 0/0 .sbss            sRumbleSupported__10JUTGamePad */
u32 JUTGamePad::sRumbleSupported;

/* 802E08E4-802E0BBC 2DB224 02D8+00 0/0 2/2 0/0 .text            read__10JUTGamePadFv */
#ifdef NONMATCHING
u32 JUTGamePad::read() {
    sRumbleSupported = PADRead(mPadStatus);

    switch (sClampMode) {
    case 1:
        PADClamp(mPadStatus);
        break;
    case 2:
        PADClampCircle(mPadStatus);
        break;
    }

    u32 mask = 0;
    for (int i = 0; i < 4; i++) {
        u32 mask_tmp = 0x80000000 >> i;
        if (mPadStatus[i].error == 0) {
            u32 m_stick = mPadMStick[i].update(mPadStatus[i].stick_x, mPadStatus[i].stick_y,
                                               sStickMode, WS_MAIN_STICK, mPadButton[i].mButton)
                          << 0x18;
            u32 s_stick = mPadSStick[i].update(mPadStatus[i].substick_x, mPadStatus[i].substick_y,
                                               sStickMode, WS_SUB_STICK, mPadButton[i].mButton)
                          << 0x10;
            u32 tmp = m_stick | s_stick;
            mPadButton[i].update(&mPadStatus[i], tmp);
        } else if (mPadStatus[i].error == -1) {
            u32 m_stick = mPadMStick[i].update(0, 0, sStickMode, WS_MAIN_STICK, 0);
            u32 s_stick = mPadSStick[i].update(0, 0, sStickMode, WS_SUB_STICK, 0);
            mPadButton[i].update(NULL, 0);

            if (!(sSuppressPadReset & mask_tmp)) {
                mask |= mask_tmp;
            }
        } else {
            mPadButton[i].mTrigger = 0;
            mPadButton[i].mRelease = 0;
            mPadButton[i].mRepeat = 0;
        }
    }

    JSUListIterator<JUTGamePad> pad(mPadList.getFirst());
    for (; pad != mPadList.getEnd(); pad++) {
        if (pad->getPadReplay() && pad->getPadReplay()->mActive) {
            PADStatus status;
            pad->getPadReplay()->unk1(&status);
            u32 m_stick = pad->mMainStick.update(status.stick_x, status.stick_y, sStickMode,
                                                 WS_MAIN_STICK, pad->mButton.mButton)
                          << 0x18;
            u32 s_stick = pad->mSubStick.update(status.substick_x, status.substick_y, sStickMode,
                                                WS_SUB_STICK, pad->mButton.mButton)
                          << 0x10;
            pad->mButton.update(&status, m_stick | s_stick);
        } else {
            if (pad->mPortNum == -1) {
                pad->assign();
            }
            pad->update();
        }

        if (pad->getPadRecord() && pad->getPadRecord()->mActive) {
            s32 portNum = pad->mPortNum;
            if (portNum >= 0 && mPadStatus[portNum].error == 0) {
                pad->getPadRecord()->unk2();
            }
        }
    }

    if (mask != 0) {
        PADReset((PADMask)mask);
    }

    checkResetSwitch();
    return sRumbleSupported;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm u32 JUTGamePad::read() {
    nofralloc
#include "asm/JSystem/JUtility/JUTGamePad/read__10JUTGamePadFv.s"
}
#pragma pop
#endif

/* 802E0BBC-802E0C6C 2DB4FC 00B0+00 1/1 0/0 0/0 .text            assign__10JUTGamePadFv */
void JUTGamePad::assign() {
    for (int i = 0; i < 4; i++) {
        if (mPadStatus[i].error == 0 && mPadAssign[i] == 0) {
            mPortNum = i;
            mPadAssign[i] = 1;
            mPadButton[i].setRepeat(mButton.field_0x24, mButton.field_0x28, mButton.field_0x2c);
            mRumble.clear(this);
            return;
        }
    }
}

/* ############################################################################################## */
/* 804514E4-804514E8 0009E4 0004+00 5/5 0/0 0/0 .sbss            mStatus__Q210JUTGamePad7CRumble */
bool JUTGamePad::CRumble::mStatus[4];

/* 804514E8-804514EC 0009E8 0004+00 5/5 0/0 0/0 .sbss            mEnabled__Q210JUTGamePad7CRumble */
PADMask JUTGamePad::CRumble::mEnabled;

/* 804514EC-804514F0 0009EC 0004+00 2/2 4/4 0/0 .sbss sCallback__Q210JUTGamePad13C3ButtonReset */
callbackFn JUTGamePad::C3ButtonReset::sCallback;

/* 804514F0-804514F8 0009F0 0004+04 2/2 4/4 0/0 .sbss sCallbackArg__Q210JUTGamePad13C3ButtonReset
 */
void* JUTGamePad::C3ButtonReset::sCallbackArg;

/* 804514F8-80451500 0009F8 0008+00 2/2 0/0 0/0 .sbss sThreshold__Q210JUTGamePad13C3ButtonReset */
OSTime JUTGamePad::C3ButtonReset::sThreshold = (OSTime)((OS_BUS_CLOCK / 4) / 60) * 30;

/* 80451500-80451504 -00001 0004+00 3/3 6/6 0/0 .sbss            None */
/* 80451500 0001+00 data_80451500 None */
/* 80451501 0003+00 data_80451501 None */
bool JUTGamePad::C3ButtonReset::sResetSwitchPushing;
bool JUTGamePad::C3ButtonReset::sResetOccurred;

/* 80451504-80451508 000A04 0004+00 2/2 0/0 0/0 .sbss
 * sResetOccurredPort__Q210JUTGamePad13C3ButtonReset            */
s32 JUTGamePad::C3ButtonReset::sResetOccurredPort;

/* 802E0C6C-802E0CD8 2DB5AC 006C+00 1/1 1/1 0/0 .text            checkResetCallback__10JUTGamePadFx
 */
void JUTGamePad::checkResetCallback(OSTime holdTime) {
    if (holdTime < JUTGamePad::C3ButtonReset::sThreshold) {
        return;
    }

    JUTGamePad::C3ButtonReset::sResetOccurred = true;
    JUTGamePad::C3ButtonReset::sResetOccurredPort = mPortNum;

    if (JUTGamePad::C3ButtonReset::sCallback != NULL) {
        JUTGamePad::C3ButtonReset::sCallback(mPortNum, JUTGamePad::C3ButtonReset::sCallbackArg);
    }
}

/* 8043456C-80434578 06128C 000C+00 1/2 0/0 0/0 .bss             sPatternList__19JUTGamePadLongPress
 */
JSUList<JUTGamePadLongPress> JUTGamePadLongPress::sPatternList(false);

/* 804508E0-804508E4 000360 0004+00 1/1 0/0 0/0 .sdata           sPressPoint__Q210JUTGamePad6CStick
 */
SECTION_SDATA f32 JUTGamePad::CStick::sPressPoint = 0.5f;

/* 804508E4-804508E8 000364 0004+00 1/1 0/0 0/0 .sdata sReleasePoint__Q210JUTGamePad6CStick */
SECTION_SDATA f32 JUTGamePad::CStick::sReleasePoint = 0.25f;

/* 804508E8-804508EC 000368 0004+00 1/1 0/0 0/0 .sdata
 * sResetPattern__Q210JUTGamePad13C3ButtonReset                 */
SECTION_SDATA u32 JUTGamePad::C3ButtonReset::sResetPattern = 0x00001600;

/* 804508EC-804508F0 00036C 0004+00 1/1 0/0 0/0 .sdata
 * sResetMaskPattern__Q210JUTGamePad13C3ButtonReset             */
SECTION_SDATA u32 JUTGamePad::C3ButtonReset::sResetMaskPattern = 0x0000FFFF;

/* 802E0CD8-802E0FA4 2DB618 02CC+00 2/2 0/0 0/0 .text            update__10JUTGamePadFv */
#ifdef NONMATCHING
void JUTGamePad::update() {
    if (mPortNum != -1) {
        if (mPortNum >= 0 && mPortNum < 4) {
            mButton = mPadButton[mPortNum];
            mMainStick = mPadMStick[mPortNum];
            mSubStick = mPadSStick[mPortNum];
            mErrorStatus = mPadStatus[mPortNum].error;
        }

        if (field_0xa8 == 0 ||
            (mButton.mButton & C3ButtonReset::sResetMaskPattern) != C3ButtonReset::sResetPattern) {
            mButtonReset.mReset = false;
        } else if (!JUTGamePad::C3ButtonReset::sResetOccurred) {
            if (mButtonReset.mReset == true) {
                checkResetCallback(OSGetTime() - mResetTime);
            } else {
                mButtonReset.mReset = true;
                mResetTime = OSGetTime();
            }
        }

        JSUListIterator<JUTGamePadLongPress> pad(JUTGamePadLongPress::sPatternList.getFirst());
        for (; pad != JUTGamePadLongPress::sPatternList.getEnd(); pad++) {
            if (pad->mValid) {
                if (mPortNum >= 0 && mPortNum < 4) {
                    if ((mButton.mButton & pad->getMaskPattern()) == pad->getPattern()) {
                        if (pad->field_0x20[mPortNum] == true) {
                            pad->checkCallback(mPortNum, OSGetTime() - pad->mTimer[mPortNum]);
                        } else {
                            pad->field_0x20[mPortNum] = true;
                            pad->mTimer[mPortNum] = OSGetTime();
                        }
                    } else {
                        pad->field_0x20[mPortNum] = false;
                    }
                }
            }
        }

        if (mPortNum >= 0 && mPortNum < 4) {
            mRumble.update(mPortNum);
        }
    }
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTGamePad::update() {
    nofralloc
#include "asm/JSystem/JUtility/JUTGamePad/update__10JUTGamePadFv.s"
}
#pragma pop
#endif

/* 802E0FA4-802E1024 2DB8E4 0080+00 1/1 0/0 0/0 .text            checkResetSwitch__10JUTGamePadFv */
void JUTGamePad::checkResetSwitch() {
    if (!JUTGamePad::C3ButtonReset::sResetOccurred) {
        if (OSGetResetSwitchState()) {
            C3ButtonReset::sResetSwitchPushing = true;
        } else {
            if (C3ButtonReset::sResetSwitchPushing == true) {
                C3ButtonReset::sResetOccurred = true;
                C3ButtonReset::sResetOccurredPort = -1;

                if (C3ButtonReset::sCallback != NULL) {
                    C3ButtonReset::sCallback(-1, C3ButtonReset::sCallbackArg);
                }
            }
            C3ButtonReset::sResetSwitchPushing = false;
        }
    }
}

/* 802E1024-802E1050 2DB964 002C+00 0/0 1/1 0/0 .text            clearForReset__10JUTGamePadFv */
void JUTGamePad::clearForReset() {
    CRumble::setEnabled(0);
    recalibrate(PAD_CHAN3_BIT | PAD_CHAN2_BIT | PAD_CHAN1_BIT | PAD_CHAN0_BIT);
}

/* 802E1050-802E108C 2DB990 003C+00 2/2 0/0 0/0 .text            clear__Q210JUTGamePad7CButtonFv */
void JUTGamePad::CButton::clear() {
    mButton = 0;
    mTrigger = 0;
    mRelease = 0;
    mRepeat = 0;
    mAnalogA = 0;
    mAnalogB = 0;
    mAnalogL = 0;
    mAnalogR = 0;
    field_0x1c = 0;
    field_0x20 = 0;
    field_0x24 = 0;
    field_0x28 = 0;
    field_0x2c = 0;
}

/* 802E108C-802E121C 2DB9CC 0190+00 1/1 0/0 0/0 .text
 * update__Q210JUTGamePad7CButtonFPC9PADStatusUl                */
void JUTGamePad::CButton::update(PADStatus const* padStatus, u32 stickStatus) {
    u32 buttons;
    if (padStatus != NULL) {
        buttons = padStatus->button;
    } else {
        buttons = 0;
    }

    buttons = stickStatus | buttons;
    mRepeat = 0;

    if (field_0x28 != 0 && field_0x24 != 0) {
        u32 repeatButton = buttons & field_0x24;
        mRepeat = 0;

        if (repeatButton == 0) {
            field_0x20 = 0;
            field_0x1c = 0;
        } else if (field_0x20 == repeatButton) {
            field_0x1c++;

            if (field_0x1c == field_0x28 ||
                (field_0x1c > field_0x28 && (field_0x1c - field_0x28) % field_0x2c == 0)) {
                mRepeat = repeatButton;
            }
        } else {
            mRepeat = repeatButton & (field_0x20 ^ 0xFFFFFFFF);
            field_0x20 = repeatButton;
            field_0x1c = 0;
        }
    }

    mTrigger = buttons & (buttons ^ mButton);
    mRelease = mButton & (buttons ^ mButton);
    mButton = buttons;
    mRepeat |= (field_0x24 ^ 0xFFFFFFFF) & mTrigger;

    if (padStatus != NULL) {
        mAnalogA = padStatus->analog_a;
        mAnalogB = padStatus->analog_b;
        mAnalogL = padStatus->trigger_left;
        mAnalogR = padStatus->trigger_right;
    } else {
        mAnalogA = 0;
        mAnalogB = 0;
        mAnalogL = 0;
        mAnalogR = 0;
    }

    mAnalogLf = (s32)mAnalogL / 150.0f;
    mAnalogRf = (s32)mAnalogR / 150.0f;
}

/* 802E121C-802E1238 2DBB5C 001C+00 2/2 0/0 0/0 .text            clear__Q210JUTGamePad6CStickFv */
void JUTGamePad::CStick::clear() {
    mPosX = 0.0f;
    mPosY = 0.0f;
    mValue = 0.0f;
    mAngle = 0;
}

/* 802E1238-802E1500 2DBB78 02C8+00 1/1 0/0 0/0 .text
 * update__Q210JUTGamePad6CStickFScScQ210JUTGamePad10EStickModeQ210JUTGamePad11EWhichStickUl */
u32 JUTGamePad::CStick::update(s8 x_val, s8 y_val, JUTGamePad::EStickMode mode,
                               JUTGamePad::EWhichStick stick, u32 buttons) {
    s32 clamp;
    switch (sClampMode) {
    case 1:
        clamp = stick == WS_MAIN_STICK ? 54 : 42;
        break;
    case 2:
        clamp = stick == WS_MAIN_STICK ? 38 : 29;
        break;
    default:
        clamp = stick == WS_MAIN_STICK ? 69 : 57;
        break;
    }

    field_0xe = x_val;
    field_0xf = y_val;
    mPosX = (f32)x_val / (f32)clamp;
    mPosY = (f32)y_val / (f32)clamp;
    mValue = sqrtf((mPosX * mPosX) + (mPosY * mPosY));

    if (mValue > 1.0f) {
        if (mode == STICK_MODE_1) {
            mPosX /= mValue;
            mPosY /= mValue;
        }
        mValue = 1.0f;
    }

    if (mValue > 0.0f) {
        if (mPosY == 0.0f) {
            if (mPosX > 0.0f) {
                mAngle = 0x4000;
            } else {
                mAngle = -0x4000;
            }
        } else {
            mAngle = 10430.379f * atan2f(mPosX, -mPosY);
        }
    }

    u32 buttonType = stick == WS_MAIN_STICK ? 0x18 : 0x10;
    return getButton(buttons >> buttonType);
}

/* 802E1500-802E15B4 2DBE40 00B4+00 1/1 0/0 0/0 .text            getButton__Q210JUTGamePad6CStickFUl
 */
u32 JUTGamePad::CStick::getButton(u32 buttons) {
    u32 button = buttons & 0xF;

    if (-sReleasePoint < mPosX && mPosX < sReleasePoint) {
        button = button & 0xFFFFFFFC;
    } else if (mPosX <= -sPressPoint) {
        button = (button & 0xFFFFFFFD) | 1;
    } else if (mPosX >= sPressPoint) {
        button = (button & 0xFFFFFFFE) | 2;
    }

    if (-sReleasePoint < mPosY && mPosY < sReleasePoint) {
        button = button & 0xFFFFFFF3;
    } else if (mPosY <= -sPressPoint) {
        button = (button & 0xFFFFFFF7) | 4;
    } else if (mPosY >= sPressPoint) {
        button = (button & 0xFFFFFFFB) | 8;
    }

    return button;
}

/* 802E15B4-802E15D8 2DBEF4 0024+00 1/1 0/0 0/0 .text            clear__Q210JUTGamePad7CRumbleFv */
void JUTGamePad::CRumble::clear() {
    field_0x0 = 0;
    field_0x4 = 0;
    field_0x8 = 0;
    field_0xc = 0;
    field_0x10 = 0;
    mEnabled = (PADMask)(PAD_CHAN3_BIT | PAD_CHAN2_BIT | PAD_CHAN1_BIT | PAD_CHAN0_BIT);
}

/* 802E15D8-802E1634 2DBF18 005C+00 2/2 0/0 0/0 .text clear__Q210JUTGamePad7CRumbleFP10JUTGamePad
 */
void JUTGamePad::CRumble::clear(JUTGamePad* pad) {
    if (pad->getPortNum() >= 0 && pad->getPortNum() < 4) {
        mStatus[pad->getPortNum()] = false;
        pad->stopMotorHard();
    }
    clear();
}

/* 802E1634-802E168C 2DBF74 0058+00 1/1 0/0 0/0 .text startMotor__Q210JUTGamePad7CRumbleFi */
void JUTGamePad::CRumble::startMotor(int portNo) {
    if (isEnabledPort(portNo)) {
        PADControlMotor(portNo, 1);
        mStatus[portNo] = true;
    }
}

/* 802E168C-802E16F8 2DBFCC 006C+00 4/4 3/3 0/0 .text stopMotor__Q210JUTGamePad7CRumbleFib */
void JUTGamePad::CRumble::stopMotor(int portNo, bool stop) {
    if (isEnabledPort(portNo)) {
        u8 command = stop ? 2 : 0;
        PADControlMotor(portNo, command);
        mStatus[portNo] = false;
    }
}

/* 802E16F8-802E1720 2DC038 0028+00 1/1 0/0 0/0 .text            getNumBit__FPUci */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm u8 getNumBit(u8* param_0, int param_1) {
    nofralloc
#include "asm/JSystem/JUtility/JUTGamePad/getNumBit__FPUci.s"
}
#pragma pop

/* 802E1720-802E18A4 2DC060 0184+00 1/1 0/0 0/0 .text            update__Q210JUTGamePad7CRumbleFs */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTGamePad::CRumble::update(s16 param_0) {
    nofralloc
#include "asm/JSystem/JUtility/JUTGamePad/update__Q210JUTGamePad7CRumbleFs.s"
}
#pragma pop

/* 802E18A4-802E18CC 2DC1E4 0028+00 1/1 0/0 0/0 .text
 * triggerPatternedRumble__Q210JUTGamePad7CRumbleFUl            */
void JUTGamePad::CRumble::triggerPatternedRumble(u32 param_0) {
    if (field_0x8 != NULL && field_0xc != 0) {
        field_0x4 = param_0;
        field_0x0 = 0;
    }
}

/* 802E18CC-802E1948 2DC20C 007C+00 0/0 2/2 0/0 .text
 * startPatternedRumble__Q210JUTGamePad7CRumbleFPvQ310JUTGamePad7CRumble7ERumbleUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTGamePad::CRumble::startPatternedRumble(void* param_0,
                                                   JUTGamePad::CRumble::ERumble param_1,
                                                   u32 param_2) {
    nofralloc
#include "asm/JSystem/JUtility/JUTGamePad/startPatternedRumble__Q210JUTGamePad7CRumbleFPvQ310JUTGamePad7CRumble7ERumbleUl.s"
}
#pragma pop

/* 802E1948-802E1978 2DC288 0030+00 1/1 3/3 0/0 .text
 * stopPatternedRumble__Q210JUTGamePad7CRumbleFs                */
void JUTGamePad::CRumble::stopPatternedRumble(s16 port) {
    field_0x4 = 0;
    stopMotor(port, true);
}

/* 802E1978-802E199C 2DC2B8 0024+00 0/0 1/1 0/0 .text
 * stopPatternedRumbleAtThePeriod__Q210JUTGamePad7CRumbleFv     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTGamePad::CRumble::stopPatternedRumbleAtThePeriod() {
    nofralloc
#include "asm/JSystem/JUtility/JUTGamePad/stopPatternedRumbleAtThePeriod__Q210JUTGamePad7CRumbleFv.s"
}
#pragma pop

/* 802E199C-802E19D8 2DC2DC 003C+00 1/1 1/1 0/0 .text            getGamePad__10JUTGamePadFi */
JUTGamePad* JUTGamePad::getGamePad(int padNo) {
    JSUListIterator<JUTGamePad> pad(mPadList.getFirst());

    for (; pad != mPadList.getEnd(); pad++) {
        if (padNo == pad->mPortNum) {
            return pad.getObject();
        }
    }

    return NULL;
}

/* 802E19D8-802E1A7C 2DC318 00A4+00 1/1 1/1 0/0 .text setEnabled__Q210JUTGamePad7CRumbleFUl */
void JUTGamePad::CRumble::setEnabled(u32 mask) {
    for (int i = 0; i < 4; i++) {
        if ((mEnabled & channel_mask[i]) == 0) {
            if (mStatus[i]) {
                stopMotor(i, false);
            }

            JUTGamePad* pad = getGamePad(i);
            if (pad != NULL) {
                pad->mRumble.stopPatternedRumble(pad->mPortNum);
            }
        }
    }
    mEnabled = (PADMask)(mask & (PAD_CHAN3_BIT | PAD_CHAN2_BIT | PAD_CHAN1_BIT | PAD_CHAN0_BIT));
}

/* 802E1A7C-802E1A98 2DC3BC 001C+00 1/1 0/0 0/0 .text setRepeat__Q210JUTGamePad7CButtonFUlUlUl */
void JUTGamePad::CButton::setRepeat(u32 param_0, u32 param_1, u32 param_2) {
    field_0x20 = 0;
    field_0x1c = 0;
    field_0x24 = param_0;
    field_0x28 = param_1;
    field_0x2c = param_2;
}

/* 802E1A98-802E1AFC 2DC3D8 0064+00 1/1 0/0 0/0 .text            recalibrate__10JUTGamePadFUl */
bool JUTGamePad::recalibrate(u32 mask) {
    for (int i = 0; i < 4; i++) {
        if (sSuppressPadReset & channel_mask[i]) {
            mask &= channel_mask[i] ^ 0xFFFFFFFF;
        }
    }

    return PADRecalibrate((PADMask)mask);
}

/* 802E1AFC-802E1B60 2DC43C 0064+00 1/1 0/0 0/0 .text checkCallback__19JUTGamePadLongPressFiUl */
void JUTGamePadLongPress::checkCallback(int port, u32 timer) {
    if (port >= 0 && timer >= field_0x1c) {
        field_0x11 = true;
        field_0x48[port] = true;

        if (mCallback != NULL) {
            mCallback(port, this, field_0x50);
        }
    }
}
