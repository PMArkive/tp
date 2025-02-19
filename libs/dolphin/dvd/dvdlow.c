//
// Generated By: dol2asm
// Translation Unit: dvdlow
//

#include "dolphin/dvd/dvdlow.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

void __DVDInitWA();
void __DVDInterruptHandler();
static void AlarmHandler();
static void AlarmHandlerForTimeout();
static void Read();
static void SeekTwiceBeforeRead();
void DVDLowRead();
void DVDLowSeek();
void DVDLowWaitCoverClose();
void DVDLowReadDiskID();
void DVDLowStopMotor();
void DVDLowRequestError();
void DVDLowInquiry();
void DVDLowAudioStream();
void DVDLowRequestAudioStatus();
void DVDLowAudioBufferConfig();
void DVDLowReset();
void DVDLowBreak();
void DVDLowClearCallback();
void __DVDLowSetWAType();
void __DVDLowTestAlarm();

//
// External References:
//

void OSInitAlarm();
void OSCreateAlarm();
void OSSetAlarm();
void OSCancelAlarm();
void OSSetCurrentContext();
void OSClearContext();
void OSDisableInterrupts();
void OSRestoreInterrupts();
void __OSMaskInterrupts();
void __OSGetSystemTime();
void DVDGetCurrentDiskID();

//
// Declarations:
//

/* ############################################################################################## */
/* 8044C830-8044C870 079550 003C+04 6/6 0/0 0/0 .bss             CommandList */
static u8 CommandList[60 + 4 /* padding */];

/* 80451710-80451714 000C10 0004+00 12/12 0/0 0/0 .sbss            StopAtNextInt */
static u8 StopAtNextInt[4];

/* 80451714-80451718 000C14 0004+00 1/1 0/0 0/0 .sbss            LastLength */
static u8 LastLength[4];

/* 80451718-8045171C 000C18 0004+00 13/13 0/0 0/0 .sbss            Callback */
static u8 Callback[4];

/* 8045171C-80451720 000C1C 0004+00 1/1 0/0 0/0 .sbss            ResetCoverCallback */
static u8 ResetCoverCallback[4];

/* 80451720-80451724 000C20 0004+00 2/2 0/0 0/0 .sbss            LastResetEnd */
static u8 LastResetEnd[4];

/* 80451724-80451728 000C24 0004+00 2/2 0/0 0/0 .sbss            None */
static u8 data_80451724[4];

/* 80451728-8045172C 000C28 0004+00 2/2 0/0 0/0 .sbss            ResetOccurred */
static u8 ResetOccurred[4];

/* 8045172C-80451730 000C2C 0004+00 3/3 0/0 0/0 .sbss            WaitingCoverClose */
static u8 WaitingCoverClose[4];

/* 80451730-80451734 000C30 0004+00 2/2 0/0 0/0 .sbss            Breaking */
static u8 Breaking[4];

/* 80451734-80451738 000C34 0004+00 2/2 0/0 0/0 .sbss            WorkAroundType */
static u8 WorkAroundType[4];

/* 80451738-80451740 000C38 0004+04 2/2 0/0 0/0 .sbss            WorkAroundSeekLocation */
static u8 WorkAroundSeekLocation[4 + 4 /* padding */];

/* 80451740-80451744 000C40 0004+00 2/2 0/0 0/0 .sbss            LastReadFinished */
static u8 LastReadFinished[4];

/* 80451744-80451748 000C44 0004+00 2/2 0/0 0/0 .sbss            None */
static u8 data_80451744[4];

/* 80451748-8045174C 000C48 0004+00 1/1 0/0 0/0 .sbss            LastReadIssued */
static u8 LastReadIssued[4];

/* 8045174C-80451750 000C4C 0004+00 1/1 0/0 0/0 .sbss            None */
static u8 data_8045174C[4];

/* 80451750-80451754 000C50 0004+00 2/2 0/0 0/0 .sbss            LastCommandWasRead */
static u8 LastCommandWasRead[4];

/* 80451754-80451758 000C54 0004+00 5/5 0/0 0/0 .sbss            NextCommandNumber */
static u8 NextCommandNumber[4];

/* 80347674-803476B4 341FB4 0040+00 0/0 1/1 0/0 .text            __DVDInitWA */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __DVDInitWA() {
    nofralloc
#include "asm/dolphin/dvd/dvdlow/__DVDInitWA.s"
}
#pragma pop

/* ############################################################################################## */
/* 8044C870-8044C898 079590 0028+00 0/1 0/0 0/0 .bss             AlarmForWA */
#pragma push
#pragma force_active on
static u8 AlarmForWA[40];
#pragma pop

/* 8044C898-8044C8C0 0795B8 0028+00 9/11 0/0 0/0 .bss             AlarmForTimeout */
static u8 AlarmForTimeout[40];

/* 8044C8C0-8044C8E8 0795E0 0028+00 1/1 0/0 0/0 .bss             AlarmForBreak */
static u8 AlarmForBreak[40];

/* 8044C8E8-8044C8F4 079608 000C+00 0/1 0/0 0/0 .bss             Prev */
#pragma push
#pragma force_active on
static u8 Prev[12];
#pragma pop

/* 8044C8F4-8044C900 079614 000C+00 0/2 0/0 0/0 .bss             Curr */
#pragma push
#pragma force_active on
static u8 Curr[12];
#pragma pop

/* 804509D8-804509E0 000458 0004+04 2/2 0/0 0/0 .sdata           FirstRead */
SECTION_SDATA static u32 FirstRead[1 + 1 /* padding */] = {
    0x00000001,
    /* padding */
    0x00000000,
};

/* 803476B4-80347994 341FF4 02E0+00 0/0 1/1 0/0 .text            __DVDInterruptHandler */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __DVDInterruptHandler() {
    nofralloc
#include "asm/dolphin/dvd/dvdlow/__DVDInterruptHandler.s"
}
#pragma pop

/* 80347994-80347A18 3422D4 0084+00 1/1 0/0 0/0 .text            AlarmHandler */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void AlarmHandler() {
    nofralloc
#include "asm/dolphin/dvd/dvdlow/AlarmHandler.s"
}
#pragma pop

/* 80347A18-80347A88 342358 0070+00 9/9 0/0 0/0 .text            AlarmHandlerForTimeout */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void AlarmHandlerForTimeout() {
    nofralloc
#include "asm/dolphin/dvd/dvdlow/AlarmHandlerForTimeout.s"
}
#pragma pop

/* 80347A88-80347B98 3423C8 0110+00 3/3 0/0 0/0 .text            Read */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void Read() {
    nofralloc
#include "asm/dolphin/dvd/dvdlow/Read.s"
}
#pragma pop

/* 80347B98-80347C18 3424D8 0080+00 1/1 0/0 0/0 .text            SeekTwiceBeforeRead */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void SeekTwiceBeforeRead() {
    nofralloc
#include "asm/dolphin/dvd/dvdlow/SeekTwiceBeforeRead.s"
}
#pragma pop

/* 80347C18-80347EB0 342558 0298+00 0/0 4/4 0/0 .text            DVDLowRead */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void DVDLowRead() {
    nofralloc
#include "asm/dolphin/dvd/dvdlow/DVDLowRead.s"
}
#pragma pop

/* 80347EB0-80347F44 3427F0 0094+00 3/3 2/2 0/0 .text            DVDLowSeek */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void DVDLowSeek() {
    nofralloc
#include "asm/dolphin/dvd/dvdlow/DVDLowSeek.s"
}
#pragma pop

/* 80347F44-80347F70 342884 002C+00 0/0 3/3 0/0 .text            DVDLowWaitCoverClose */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void DVDLowWaitCoverClose() {
    nofralloc
#include "asm/dolphin/dvd/dvdlow/DVDLowWaitCoverClose.s"
}
#pragma pop

/* 80347F70-80348014 3428B0 00A4+00 0/0 2/2 0/0 .text            DVDLowReadDiskID */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void DVDLowReadDiskID() {
    nofralloc
#include "asm/dolphin/dvd/dvdlow/DVDLowReadDiskID.s"
}
#pragma pop

/* 80348014-803480A0 342954 008C+00 0/0 9/9 0/0 .text            DVDLowStopMotor */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void DVDLowStopMotor() {
    nofralloc
#include "asm/dolphin/dvd/dvdlow/DVDLowStopMotor.s"
}
#pragma pop

/* 803480A0-8034812C 3429E0 008C+00 0/0 7/7 0/0 .text            DVDLowRequestError */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void DVDLowRequestError() {
    nofralloc
#include "asm/dolphin/dvd/dvdlow/DVDLowRequestError.s"
}
#pragma pop

/* 8034812C-803481C8 342A6C 009C+00 0/0 1/1 0/0 .text            DVDLowInquiry */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void DVDLowInquiry() {
    nofralloc
#include "asm/dolphin/dvd/dvdlow/DVDLowInquiry.s"
}
#pragma pop

/* 803481C8-80348260 342B08 0098+00 0/0 2/2 0/0 .text            DVDLowAudioStream */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void DVDLowAudioStream() {
    nofralloc
#include "asm/dolphin/dvd/dvdlow/DVDLowAudioStream.s"
}
#pragma pop

/* 80348260-803482EC 342BA0 008C+00 0/0 1/1 0/0 .text            DVDLowRequestAudioStatus */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void DVDLowRequestAudioStatus() {
    nofralloc
#include "asm/dolphin/dvd/dvdlow/DVDLowRequestAudioStatus.s"
}
#pragma pop

/* 803482EC-80348388 342C2C 009C+00 0/0 3/3 0/0 .text            DVDLowAudioBufferConfig */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void DVDLowAudioBufferConfig() {
    nofralloc
#include "asm/dolphin/dvd/dvdlow/DVDLowAudioBufferConfig.s"
}
#pragma pop

/* 80348388-80348444 342CC8 00BC+00 0/0 1/1 0/0 .text            DVDLowReset */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void DVDLowReset() {
    nofralloc
#include "asm/dolphin/dvd/dvdlow/DVDLowReset.s"
}
#pragma pop

/* 80348444-80348458 342D84 0014+00 0/0 1/1 0/0 .text            DVDLowBreak */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void DVDLowBreak() {
    nofralloc
#include "asm/dolphin/dvd/dvdlow/DVDLowBreak.s"
}
#pragma pop

/* 80348458-80348474 342D98 001C+00 0/0 1/1 0/0 .text            DVDLowClearCallback */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void DVDLowClearCallback() {
    nofralloc
#include "asm/dolphin/dvd/dvdlow/DVDLowClearCallback.s"
}
#pragma pop

/* 80348474-803484B8 342DB4 0044+00 1/1 0/0 0/0 .text            __DVDLowSetWAType */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __DVDLowSetWAType() {
    nofralloc
#include "asm/dolphin/dvd/dvdlow/__DVDLowSetWAType.s"
}
#pragma pop

/* 803484B8-803484F0 342DF8 0038+00 0/0 1/1 0/0 .text            __DVDLowTestAlarm */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __DVDLowTestAlarm() {
    nofralloc
#include "asm/dolphin/dvd/dvdlow/__DVDLowTestAlarm.s"
}
#pragma pop
