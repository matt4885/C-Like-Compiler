	.section	__TEXT,__text,regular,pure_instructions
	.macosx_version_min 10, 12
	.globl	_compare_to_keyword
	.p2align	4, 0x90
_compare_to_keyword:                    ## @compare_to_keyword
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
	subq	$48, %rsp
	leaq	L_.str(%rip), %rsi
	movl	$2, %eax
	movl	%eax, %edx
	movq	%rdi, -16(%rbp)
	movq	-16(%rbp), %rdi
	callq	_strncmp
	cmpl	$0, %eax
	jne	LBB0_2
## BB#1:
	leaq	L_.str.1(%rip), %rax
	movq	-16(%rbp), %rcx
	movb	$0, (%rcx)
	movq	%rax, -8(%rbp)
	jmp	LBB0_27
LBB0_2:
	leaq	L_.str.2(%rip), %rsi
	movl	$4, %eax
	movl	%eax, %edx
	movq	-16(%rbp), %rdi
	callq	_strncmp
	cmpl	$0, %eax
	jne	LBB0_4
## BB#3:
	leaq	L_.str.3(%rip), %rax
	movq	-16(%rbp), %rcx
	movb	$0, (%rcx)
	movq	%rax, -8(%rbp)
	jmp	LBB0_27
LBB0_4:
	leaq	L_.str.4(%rip), %rsi
	movl	$6, %eax
	movl	%eax, %edx
	movq	-16(%rbp), %rdi
	callq	_strncmp
	cmpl	$0, %eax
	jne	LBB0_6
## BB#5:
	leaq	L_.str.5(%rip), %rax
	movq	-16(%rbp), %rcx
	movb	$0, (%rcx)
	movq	%rax, -8(%rbp)
	jmp	LBB0_27
LBB0_6:
	leaq	L_.str.6(%rip), %rsi
	movl	$3, %eax
	movl	%eax, %edx
	movq	-16(%rbp), %rdi
	callq	_strncmp
	cmpl	$0, %eax
	jne	LBB0_8
## BB#7:
	leaq	L_.str.7(%rip), %rax
	movq	-16(%rbp), %rcx
	movb	$0, (%rcx)
	movq	%rax, -8(%rbp)
	jmp	LBB0_27
LBB0_8:
	leaq	L_.str.8(%rip), %rsi
	movl	$6, %eax
	movl	%eax, %edx
	movq	-16(%rbp), %rdi
	callq	_strncmp
	cmpl	$0, %eax
	jne	LBB0_10
## BB#9:
	leaq	L_.str.9(%rip), %rax
	movq	-16(%rbp), %rcx
	movb	$0, (%rcx)
	movq	%rax, -8(%rbp)
	jmp	LBB0_27
LBB0_10:
	leaq	L_.str.10(%rip), %rsi
	movl	$5, %eax
	movl	%eax, %edx
	movq	-16(%rbp), %rdi
	callq	_strncmp
	cmpl	$0, %eax
	jne	LBB0_12
## BB#11:
	leaq	L_.str.11(%rip), %rax
	movq	-16(%rbp), %rcx
	movb	$0, (%rcx)
	movq	%rax, -8(%rbp)
	jmp	LBB0_27
LBB0_12:
	leaq	L_.str.12(%rip), %rsi
	movl	$6, %eax
	movl	%eax, %edx
	movq	-16(%rbp), %rdi
	callq	_strncmp
	cmpl	$0, %eax
	jne	LBB0_14
## BB#13:
	leaq	L_.str.13(%rip), %rax
	movq	-16(%rbp), %rcx
	movb	$0, (%rcx)
	movq	%rax, -8(%rbp)
	jmp	LBB0_27
LBB0_14:
	leaq	L_.str.14(%rip), %rsi
	movl	$3, %eax
	movl	%eax, %edx
	movq	-16(%rbp), %rdi
	callq	_strncmp
	cmpl	$0, %eax
	jne	LBB0_16
## BB#15:
	leaq	L_.str.15(%rip), %rax
	movq	-16(%rbp), %rcx
	movb	$0, (%rcx)
	movq	%rax, -8(%rbp)
	jmp	LBB0_27
LBB0_16:
	movq	-16(%rbp), %rdi
	callq	_strlen
	cmpq	$1, %rax
	jb	LBB0_18
## BB#17:
	movq	-16(%rbp), %rdi
	callq	_strlen
	addq	$4, %rax
	addq	$2, %rax
	movq	%rax, %rdi
	callq	_malloc
	leaq	L_.str.16(%rip), %rsi
	movq	$-1, %rdx
	movq	%rax, -24(%rbp)
	movq	-24(%rbp), %rax
	movb	$0, (%rax)
	movq	-24(%rbp), %rdi
	callq	___strcat_chk
	movq	$-1, %rdx
	movq	-24(%rbp), %rdi
	movq	-16(%rbp), %rsi
	movq	%rax, -32(%rbp)         ## 8-byte Spill
	callq	___strcat_chk
	leaq	L_.str.17(%rip), %rsi
	movq	$-1, %rdx
	movq	-24(%rbp), %rdi
	movq	%rax, -40(%rbp)         ## 8-byte Spill
	callq	___strcat_chk
	movq	-24(%rbp), %rdx
	movq	%rdx, -8(%rbp)
	movq	%rax, -48(%rbp)         ## 8-byte Spill
	jmp	LBB0_27
LBB0_18:
	jmp	LBB0_19
LBB0_19:
	jmp	LBB0_20
LBB0_20:
	jmp	LBB0_21
LBB0_21:
	jmp	LBB0_22
LBB0_22:
	jmp	LBB0_23
LBB0_23:
	jmp	LBB0_24
LBB0_24:
	jmp	LBB0_25
LBB0_25:
	jmp	LBB0_26
LBB0_26:
	leaq	L_.str.18(%rip), %rax
	movq	%rax, -8(%rbp)
LBB0_27:
	movq	-8(%rbp), %rax
	addq	$48, %rsp
	popq	%rbp
	retq
	.cfi_endproc

	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"if"

L_.str.1:                               ## @.str.1
	.asciz	"keyword: if\n"

L_.str.2:                               ## @.str.2
	.asciz	"else"

L_.str.3:                               ## @.str.3
	.asciz	"keyword: else\n"

L_.str.4:                               ## @.str.4
	.asciz	"return"

L_.str.5:                               ## @.str.5
	.asciz	"keyword: return\n"

L_.str.6:                               ## @.str.6
	.asciz	"int"

L_.str.7:                               ## @.str.7
	.asciz	"keyword: int\n"

L_.str.8:                               ## @.str.8
	.asciz	"double"

L_.str.9:                               ## @.str.9
	.asciz	"keyword: double\n"

L_.str.10:                              ## @.str.10
	.asciz	"float"

L_.str.11:                              ## @.str.11
	.asciz	"keyword: float\n"

L_.str.12:                              ## @.str.12
	.asciz	"string"

L_.str.13:                              ## @.str.13
	.asciz	"keyword: string\n"

L_.str.14:                              ## @.str.14
	.asciz	"char"

L_.str.15:                              ## @.str.15
	.asciz	"keyword: char\n"

L_.str.16:                              ## @.str.16
	.asciz	"id: "

L_.str.17:                              ## @.str.17
	.asciz	"\n"

L_.str.18:                              ## @.str.18
	.space	1

	.comm	_builtString,128,4      ## @builtString
	.comm	_builtNumber,128,4      ## @builtNumber
	.comm	_lexum,16,3             ## @lexum
	.comm	_type,16,3              ## @type
	.comm	_scope,16,3             ## @scope

.subsections_via_symbols
