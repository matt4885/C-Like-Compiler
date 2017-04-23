	.section	__TEXT,__text,regular,pure_instructions
	.macosx_version_min 10, 12
	.globl	_print_symbol_table
	.p2align	4, 0x90
_print_symbol_table:                    ## @print_symbol_table
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
	subq	$80, %rsp
	leaq	L_.str(%rip), %rax
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-8(%rbp), %rdx
	movq	%rdx, -32(%rbp)
	movq	-16(%rbp), %rdx
	movq	%rdx, -40(%rbp)
	movq	-24(%rbp), %rdx
	movq	%rdx, -48(%rbp)
	movq	%rax, %rdi
	movb	$0, %al
	callq	_printf
	leaq	L_.str.1(%rip), %rdi
	movl	%eax, -52(%rbp)         ## 4-byte Spill
	callq	_puts
	leaq	L_.str.2(%rip), %rdi
	movl	%eax, -56(%rbp)         ## 4-byte Spill
	callq	_puts
	leaq	L_.str.3(%rip), %rdi
	movl	%eax, -60(%rbp)         ## 4-byte Spill
	callq	_puts
	leaq	L_.str.2(%rip), %rdi
	movl	%eax, -64(%rbp)         ## 4-byte Spill
	callq	_puts
	movl	%eax, -68(%rbp)         ## 4-byte Spill
LBB0_1:                                 ## =>This Inner Loop Header: Depth=1
	cmpq	$0, -32(%rbp)
	je	LBB0_3
## BB#2:                                ##   in Loop: Header=BB0_1 Depth=1
	leaq	L_.str.4(%rip), %rdi
	movq	-32(%rbp), %rax
	movq	(%rax), %rsi
	movb	$0, %al
	callq	_printf
	leaq	L_.str.5(%rip), %rdi
	movq	-40(%rbp), %rsi
	movq	(%rsi), %rsi
	movl	%eax, -72(%rbp)         ## 4-byte Spill
	movb	$0, %al
	callq	_printf
	leaq	L_.str.6(%rip), %rdi
	movq	-48(%rbp), %rsi
	movl	(%rsi), %esi
	movl	%eax, -76(%rbp)         ## 4-byte Spill
	movb	$0, %al
	callq	_printf
	movq	-32(%rbp), %rdi
	movq	8(%rdi), %rdi
	movq	%rdi, -32(%rbp)
	movq	-40(%rbp), %rdi
	movq	8(%rdi), %rdi
	movq	%rdi, -40(%rbp)
	movq	-48(%rbp), %rdi
	movq	8(%rdi), %rdi
	movq	%rdi, -48(%rbp)
	movl	%eax, -80(%rbp)         ## 4-byte Spill
	jmp	LBB0_1
LBB0_3:
	addq	$80, %rsp
	popq	%rbp
	retq
	.cfi_endproc

	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"\n"

L_.str.1:                               ## @.str.1
	.asciz	"Lexical Analyzer Symbol Table"

L_.str.2:                               ## @.str.2
	.asciz	"------------------------------"

L_.str.3:                               ## @.str.3
	.asciz	"ID             |Type    |Scope"

L_.str.4:                               ## @.str.4
	.asciz	"%s\t\t"

L_.str.5:                               ## @.str.5
	.asciz	"%s\t "

L_.str.6:                               ## @.str.6
	.asciz	"%d\n"

	.comm	_builtString,128,4      ## @builtString
	.comm	_builtNumber,128,4      ## @builtNumber
	.comm	_lexum,16,3             ## @lexum
	.comm	_type,16,3              ## @type
	.comm	_scope,16,3             ## @scope

.subsections_via_symbols
