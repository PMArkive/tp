lbl_801005CC:
/* 801005CC  3C 80 80 39 */	lis r4, m__22daAlinkHIO_roofHang_c0@ha /* 0x8038EBFC@ha */
/* 801005D0  38 84 EB FC */	addi r4, r4, m__22daAlinkHIO_roofHang_c0@l /* 0x8038EBFC@l */
/* 801005D4  C0 44 00 24 */	lfs f2, 0x24(r4)
/* 801005D8  C0 23 33 A8 */	lfs f1, 0x33a8(r3)
/* 801005DC  C0 04 00 28 */	lfs f0, 0x28(r4)
/* 801005E0  EC 00 10 28 */	fsubs f0, f0, f2
/* 801005E4  EC 01 00 32 */	fmuls f0, f1, f0
/* 801005E8  EC 22 00 2A */	fadds f1, f2, f0
/* 801005EC  4E 80 00 20 */	blr 
