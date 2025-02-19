#include "JSystem/JAudio2/JAISoundChild.h"
#include "dol2asm.h"
#include "dolphin/types.h"

void JAISoundChild::init() {
    mMove.init();
    mParams.init();
}

void JAISoundChild::mixOut(JASTrack* pTrack) {
    mParams = mMove.mParams;
    pTrack->assignExtBuffer(0, &mParams);
}

void JAISoundChild::calc() {
    mMove.calc();
}
