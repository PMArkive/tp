lbl_8067840C:
/* 8067840C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80678410  7C 08 02 A6 */	mflr r0
/* 80678414  90 01 00 14 */	stw r0, 0x14(r1)
/* 80678418  3C 80 80 68 */	lis r4, struct_80679070+0x0@ha /* 0x80679070@ha */
/* 8067841C  38 E4 90 70 */	addi r7, r4, struct_80679070+0x0@l /* 0x80679070@l */
/* 80678420  88 07 00 00 */	lbz r0, 0(r7)
/* 80678424  7C 00 07 75 */	extsb. r0, r0
/* 80678428  40 82 00 34 */	bne lbl_8067845C
/* 8067842C  3C 80 80 68 */	lis r4, l_func_3791@ha /* 0x80678F98@ha */
/* 80678430  38 C4 8F 98 */	addi r6, r4, l_func_3791@l /* 0x80678F98@l */
/* 80678434  3C 80 80 68 */	lis r4, lit_3792@ha /* 0x80678F8C@ha */
/* 80678438  38 A4 8F 8C */	addi r5, r4, lit_3792@l /* 0x80678F8C@l */
/* 8067843C  80 85 00 00 */	lwz r4, 0(r5)
/* 80678440  80 05 00 04 */	lwz r0, 4(r5)
/* 80678444  90 86 00 00 */	stw r4, 0(r6)
/* 80678448  90 06 00 04 */	stw r0, 4(r6)
/* 8067844C  80 05 00 08 */	lwz r0, 8(r5)
/* 80678450  90 06 00 08 */	stw r0, 8(r6)
/* 80678454  38 00 00 01 */	li r0, 1
/* 80678458  98 07 00 00 */	stb r0, 0(r7)
lbl_8067845C:
/* 8067845C  88 03 06 38 */	lbz r0, 0x638(r3)
/* 80678460  1C A0 00 0C */	mulli r5, r0, 0xc
/* 80678464  3C 80 80 68 */	lis r4, l_func_3791@ha /* 0x80678F98@ha */
/* 80678468  38 04 8F 98 */	addi r0, r4, l_func_3791@l /* 0x80678F98@l */
/* 8067846C  7D 80 2A 14 */	add r12, r0, r5
/* 80678470  4B CE 9C 15 */	bl __ptmf_scall
/* 80678474  60 00 00 00 */	nop 
/* 80678478  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8067847C  7C 08 03 A6 */	mtlr r0
/* 80678480  38 21 00 10 */	addi r1, r1, 0x10
/* 80678484  4E 80 00 20 */	blr 
