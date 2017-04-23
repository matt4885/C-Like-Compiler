	.section	__TEXT,__text,regular,pure_instructions
	.macosx_version_min 10, 12
	.globl	_inspect_line
	.p2align	4, 0x90
_inspect_line:                          ## @inspect_line
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
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_strlen
	cmpq	$1, %rax
	jbe	LBB0_2
## BB#1:
	leaq	L_.str(%rip), %rdi
	movq	-8(%rbp), %rsi
	movb	$0, %al
	callq	_printf
	movl	%eax, -16(%rbp)         ## 4-byte Spill
LBB0_2:
	movl	$0, -12(%rbp)
LBB0_3:                                 ## =>This Inner Loop Header: Depth=1
	movslq	-12(%rbp), %rax
	movq	-8(%rbp), %rdi
	movq	%rax, -24(%rbp)         ## 8-byte Spill
	callq	_strlen
	movq	-24(%rbp), %rdi         ## 8-byte Reload
	cmpq	%rax, %rdi
	jae	LBB0_6
## BB#4:                                ##   in Loop: Header=BB0_3 Depth=1
	movslq	-12(%rbp), %rax
	movq	-8(%rbp), %rcx
	movsbl	(%rcx,%rax), %edi
	callq	_evaluate_char
## BB#5:                                ##   in Loop: Header=BB0_3 Depth=1
	movl	-12(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -12(%rbp)
	jmp	LBB0_3
LBB0_6:
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc

	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"INPUT: %s"

	.comm	_builtString,128,4      ## @builtString
	.comm	_builtNumber,128,4      ## @builtNumber
	.comm	_lexum,16,3             ## @lexum
	.comm	_type,16,3              ## @type
	.comm	_scope,16,3             ## @scope

.subsections_via_symbols
