lbl_80D4D64C:
/* 80D4D64C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80D4D650  7C 08 02 A6 */	mflr r0
/* 80D4D654  90 01 00 14 */	stw r0, 0x14(r1)
/* 80D4D658  4B FF FF 39 */	bl draw__10daSkip2D_cFv
/* 80D4D65C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80D4D660  7C 08 03 A6 */	mtlr r0
/* 80D4D664  38 21 00 10 */	addi r1, r1, 0x10
/* 80D4D668  4E 80 00 20 */	blr 
