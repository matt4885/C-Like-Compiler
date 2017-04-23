	.section	__TEXT,__text,regular,pure_instructions
	.macosx_version_min 10, 12
	.globl	_evaluate_char
	.p2align	4, 0x90
_evaluate_char:                         ## @evaluate_char
	.cfi_startproc
## BB#0:
	pushq	%rbp
Ltmp0:
	.cfi_def_cfa_offset 16
Ltmp1:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp2:
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movb	%dil, %al
	movb	%al, -1(%rbp)
	movsbl	-1(%rbp), %edi
	cmpl	$65, %edi
	jl	LBB0_3
## BB#1:
	movsbl	-1(%rbp), %eax
	cmpl	$122, %eax
	jg	LBB0_3
## BB#2:
	movq	_builtString@GOTPCREL(%rip), %rdi
	leaq	-1(%rbp), %rsi
	movl	$1, %eax
	movl	%eax, %edx
	movl	$128, %eax
	movl	%eax, %ecx
	callq	___strncat_chk
	movq	%rax, -16(%rbp)         ## 8-byte Spill
	jmp	LBB0_9
LBB0_3:
	movq	_builtString@GOTPCREL(%rip), %rdi
	movb	$0, %al
	callq	_compare_to_keyword
	leaq	L_.str(%rip), %rdi
	movq	%rax, %rsi
	movb	$0, %al
	callq	_printf
	movsbl	-1(%rbp), %ecx
	cmpl	$48, %ecx
	movl	%eax, -20(%rbp)         ## 4-byte Spill
	jl	LBB0_6
## BB#4:
	movsbl	-1(%rbp), %eax
	cmpl	$57, %eax
	jg	LBB0_6
## BB#5:
	jmp	LBB0_6
LBB0_6:
	movsbl	-1(%rbp), %eax
	cmpl	$32, %eax
	jle	LBB0_8
## BB#7:
	leaq	L_.str.1(%rip), %rdi
	movsbl	-1(%rbp), %esi
	movb	$0, %al
	callq	_printf
	movl	%eax, -24(%rbp)         ## 4-byte Spill
LBB0_8:
	movq	_builtString@GOTPCREL(%rip), %rax
	movb	$0, (%rax)
LBB0_9:
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc

	.comm	_builtString,128,4      ## @builtString
	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"%s"

L_.str.1:                               ## @.str.1
	.asciz	"%c\n"

	.comm	_builtNumber,128,4      ## @builtNumber
	.comm	_lexum,16,3             ## @lexum
	.comm	_type,16,3              ## @type
	.comm	_scope,16,3             ## @scope

.subsections_via_symbols
