	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 13, 0	sdk_version 13, 3
	.globl	_main                           ; -- Begin function main
	.p2align	2
_main:                                  ; @main
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #16
	.cfi_def_cfa_offset 16
	str	wzr, [sp, #12]
	mov	w8, #1
	str	w8, [sp, #8]
	mov	w8, #2
	str	w8, [sp, #4]
	ldr	w8, [sp, #8]
	subs	w8, w8, #1
	cset	w8, ne
	tbnz	w8, #0, LBB0_2
	b	LBB0_1
LBB0_1:
	str	wzr, [sp, #8]
	b	LBB0_2
LBB0_2:
	ldr	w8, [sp, #4]
	subs	w8, w8, #2
	cset	w8, ne
	tbnz	w8, #0, LBB0_4
	b	LBB0_3
LBB0_3:
	str	wzr, [sp, #4]
	b	LBB0_4
LBB0_4:
	ldr	w8, [sp, #8]
	subs	w8, w8, #0
	cset	w8, eq
	tbnz	w8, #0, LBB0_6
	b	LBB0_5
LBB0_5:
	ldr	w8, [sp, #4]
	subs	w8, w8, #0
	cset	w8, ne
	tbnz	w8, #0, LBB0_7
	b	LBB0_6
LBB0_6:
	mov	w8, #2
	str	w8, [sp]
	b	LBB0_7
LBB0_7:
	ldr	w0, [sp, #12]
	add	sp, sp, #16
	ret
	.cfi_endproc
                                        ; -- End function
.subsections_via_symbols
