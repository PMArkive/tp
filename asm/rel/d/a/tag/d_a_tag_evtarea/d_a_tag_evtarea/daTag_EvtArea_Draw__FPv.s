lbl_8048CCE0:
/* 8048CCE0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8048CCE4  7C 08 02 A6 */	mflr r0
/* 8048CCE8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8048CCEC  4B FF FB A9 */	bl Draw__15daTag_EvtArea_cFv
/* 8048CCF0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8048CCF4  7C 08 03 A6 */	mtlr r0
/* 8048CCF8  38 21 00 10 */	addi r1, r1, 0x10
/* 8048CCFC  4E 80 00 20 */	blr 
