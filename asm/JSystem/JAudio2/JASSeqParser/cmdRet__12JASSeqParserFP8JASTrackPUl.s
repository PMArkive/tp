lbl_8029429C:
/* 8029429C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802942A0  7C 08 02 A6 */	mflr r0
/* 802942A4  90 01 00 14 */	stw r0, 0x14(r1)
/* 802942A8  7C 83 23 78 */	mr r3, r4
/* 802942AC  48 00 1F D1 */	bl ret__12JASSeqReaderFv
/* 802942B0  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 802942B4  20 00 00 00 */	subfic r0, r0, 0
/* 802942B8  7C 60 01 10 */	subfe r3, r0, r0
/* 802942BC  38 00 00 00 */	li r0, 0
/* 802942C0  7C 03 18 78 */	andc r3, r0, r3
/* 802942C4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802942C8  7C 08 03 A6 */	mtlr r0
/* 802942CC  38 21 00 10 */	addi r1, r1, 0x10
/* 802942D0  4E 80 00 20 */	blr 
