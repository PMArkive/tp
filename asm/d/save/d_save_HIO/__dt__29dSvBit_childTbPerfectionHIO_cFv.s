lbl_8025C374:
/* 8025C374  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8025C378  7C 08 02 A6 */	mflr r0
/* 8025C37C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8025C380  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8025C384  7C 7F 1B 79 */	or. r31, r3, r3
/* 8025C388  41 82 00 1C */	beq lbl_8025C3A4
/* 8025C38C  3C A0 80 3C */	lis r5, __vt__29dSvBit_childTbPerfectionHIO_c@ha /* 0x803C3324@ha */
/* 8025C390  38 05 33 24 */	addi r0, r5, __vt__29dSvBit_childTbPerfectionHIO_c@l /* 0x803C3324@l */
/* 8025C394  90 1F 00 00 */	stw r0, 0(r31)
/* 8025C398  7C 80 07 35 */	extsh. r0, r4
/* 8025C39C  40 81 00 08 */	ble lbl_8025C3A4
/* 8025C3A0  48 07 29 9D */	bl __dl__FPv
lbl_8025C3A4:
/* 8025C3A4  7F E3 FB 78 */	mr r3, r31
/* 8025C3A8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8025C3AC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8025C3B0  7C 08 03 A6 */	mtlr r0
/* 8025C3B4  38 21 00 10 */	addi r1, r1, 0x10
/* 8025C3B8  4E 80 00 20 */	blr 
