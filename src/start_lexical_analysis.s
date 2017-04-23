	.section	__TEXT,__text,regular,pure_instructions
	.macosx_version_min 10, 12
	.globl	_start_lexical_analysis
	.p2align	4, 0x90
_start_lexical_analysis:                ## @start_lexical_analysis
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
	subq	$160, %rsp
	movq	___stack_chk_guard@GOTPCREL(%rip), %rax
	movq	(%rax), %rax
	movq	%rax, -8(%rbp)
	movq	%rdi, -152(%rbp)
LBB0_1:                                 ## =>This Inner Loop Header: Depth=1
	movl	$128, %esi
	leaq	-144(%rbp), %rdi
	movq	-152(%rbp), %rdx
	callq	_fgets
	cmpq	$0, %rax
	je	LBB0_3
## BB#2:                                ##   in Loop: Header=BB0_1 Depth=1
	leaq	-144(%rbp), %rdi
	movb	$0, %al
	callq	_inspect_line
	jmp	LBB0_1
LBB0_3:
	movq	_lexum@GOTPCREL(%rip), %rdi
	movq	_type@GOTPCREL(%rip), %rsi
	movq	_scope@GOTPCREL(%rip), %rdx
	callq	_print_symbol_table
	movq	___stack_chk_guard@GOTPCREL(%rip), %rdx
	movq	(%rdx), %rdx
	movq	-8(%rbp), %rsi
	cmpq	%rsi, %rdx
	jne	LBB0_5
## BB#4:
	addq	$160, %rsp
	popq	%rbp
	retq
LBB0_5:
	callq	___stack_chk_fail
	.cfi_endproc

	.comm	_lexum,16,3             ## @lexum
	.comm	_type,16,3              ## @type
	.comm	_scope,16,3             ## @scope
	.comm	_builtString,128,4      ## @builtString
	.comm	_builtNumber,128,4      ## @builtNumber

.subsections_via_symbols
