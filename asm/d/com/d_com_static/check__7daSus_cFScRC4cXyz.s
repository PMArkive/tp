lbl_80031434:
/* 80031434  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80031438  7C 08 02 A6 */	mflr r0
/* 8003143C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80031440  39 61 00 20 */	addi r11, r1, 0x20
/* 80031444  48 33 0D 95 */	bl _savegpr_28
/* 80031448  7C 9C 23 78 */	mr r28, r4
/* 8003144C  3C 80 80 42 */	lis r4, mData__7daSus_c@ha /* 0x80423FFC@ha */
/* 80031450  38 04 3F FC */	addi r0, r4, mData__7daSus_c@l /* 0x80423FFC@l */
/* 80031454  7C 1E 03 78 */	mr r30, r0
/* 80031458  3B A0 00 00 */	li r29, 0
/* 8003145C  7C 7F 07 74 */	extsb r31, r3
/* 80031460  48 00 00 4C */	b lbl_800314AC
lbl_80031464:
/* 80031464  88 7E 00 00 */	lbz r3, 0(r30)
/* 80031468  7C 60 07 75 */	extsb. r0, r3
/* 8003146C  41 80 00 38 */	blt lbl_800314A4
/* 80031470  7C 60 07 74 */	extsb r0, r3
/* 80031474  7C 1F 00 00 */	cmpw r31, r0
/* 80031478  40 82 00 2C */	bne lbl_800314A4
/* 8003147C  88 1E 00 04 */	lbz r0, 4(r30)
/* 80031480  28 00 00 00 */	cmplwi r0, 0
/* 80031484  41 82 00 20 */	beq lbl_800314A4
/* 80031488  7F C3 F3 78 */	mr r3, r30
/* 8003148C  7F 84 E3 78 */	mr r4, r28
/* 80031490  4B FF FB A9 */	bl check__Q27daSus_c6data_cFRC4cXyz
/* 80031494  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80031498  41 82 00 0C */	beq lbl_800314A4
/* 8003149C  38 60 00 01 */	li r3, 1
/* 800314A0  48 00 00 1C */	b lbl_800314BC
lbl_800314A4:
/* 800314A4  3B DE 00 24 */	addi r30, r30, 0x24
/* 800314A8  3B BD 00 01 */	addi r29, r29, 1
lbl_800314AC:
/* 800314AC  7F A0 07 34 */	extsh r0, r29
/* 800314B0  2C 00 00 20 */	cmpwi r0, 0x20
/* 800314B4  41 80 FF B0 */	blt lbl_80031464
/* 800314B8  38 60 00 00 */	li r3, 0
lbl_800314BC:
/* 800314BC  39 61 00 20 */	addi r11, r1, 0x20
/* 800314C0  48 33 0D 65 */	bl _restgpr_28
/* 800314C4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 800314C8  7C 08 03 A6 */	mtlr r0
/* 800314CC  38 21 00 20 */	addi r1, r1, 0x20
/* 800314D0  4E 80 00 20 */	blr 
