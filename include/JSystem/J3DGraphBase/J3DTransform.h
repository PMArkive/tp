#ifndef J3DTRANSFORM_H
#define J3DTRANSFORM_H

#include "JSystem/JGeometry.h"
#include "dolphin/mtx/mtxvec.h"
#include "dolphin/types.h"

struct J3DTransformInfo {
    /* 0x00 */ JGeometry::TVec3<f32> mScale;
    /* 0x0C */ JGeometry::TVec3<s16> mRotation;
    /* 0x14 */ JGeometry::TVec3<f32> mTranslate;
};  // Size: 0x20

extern J3DTransformInfo const j3dDefaultTransformInfo;
extern Vec const j3dDefaultScale;
extern Mtx const j3dDefaultMtx;

void J3DGetTranslateRotateMtx(J3DTransformInfo const&, Mtx);
void J3DGetTranslateRotateMtx(s16, s16, s16, f32, f32, f32, Mtx);

#endif /* J3DTRANSFORM_H */
