.section .data

.text
int_fmt:
	.string "%ld\n"

string1:
	.string	"__main__"

# -------->		=	beginfunc main	label	
.globl main
.type main, @function
main:
	pushq %rbp
	movq %rsp, %rbp
	subq $64, %rsp
# -------->	$1	=	0		
	movq $0, %rax
	movq %rax, -16(%rbp)
# -------->	i	=	$1		
	movq -16(%rbp), %rax
	movq %rax, -24(%rbp)
# -------->		=	beginfor1	label	

beginfor1:
# -------->	$2	=	5		
	movq $5, %rax
	movq %rax, -40(%rbp)
# -------->	$4	=	0		
	movq $0, %rax
	movq %rax, -56(%rbp)
# -------->	$5	=	$4	<	$2
	movq -56(%rbp), %rax
	cmpq -40(%rbp), %rax
	setl %al
	movzbq %al, %rax
	movq %rax, -64(%rbp)
# -------->	endfor1	=	if_false	goto	$5
	movq -64(%rbp), %rax
	cmpq $0, %rax
	je endfor1
# -------->	i	=	$4		
	movq -56(%rbp), %rax
	movq %rax, -24(%rbp)
# -------->	$3	=	i		
	movq -24(%rbp), %rax
	movq %rax, -48(%rbp)
# -------->	$3	=		param	
	movq -48(%rbp), %rdi
# -------->		=	print	callfunc	1
	movq %rdi, %rsi
	movq $int_fmt, %rdi
	xorq %rax, %rax
	call printf
# -------->	$4	=	$4	+	1
	movq -56(%rbp), %rax
	addq $1, %rax
	movq %rax, -56(%rbp)
# -------->	beginfor1	=		goto	
	jmp beginfor1
# -------->		=	endfor1	label	

endfor1:
# -------->		=	endfuncmain	label	

endfuncmain:

	leave
	ret

# -------->		=	beginif1	label	

beginif1:
# -------->	$6	=	__name__		
	movq -0(%rbp), %rax
	movq %rax, -8(%rbp)
# -------->	$7	=	$string1		"__main__"
	movq $string1, %rax
	movq %rax, -16(%rbp)
# -------->	$8	=	$6	==	$7
	movq -8(%rbp), %rax
	cmpq -16(%rbp), %rax
	sete %al
	movzbq %al, %rax
	movq %rax, -24(%rbp)
# -------->	endif1	=	if_false	goto	$8
	movq -24(%rbp), %rax
	cmpq $0, %rax
	je endif1
# -------->		=	main	callfunc	0
	call main
	addq $0, %rsp
# -------->	$9	=		popreturn	
	movq %rax, -32(%rbp)
# -------->	endifblock1	=		goto	
	jmp endifblock1
# -------->		=	endif1	label	

endif1:
# -------->		=	endifblock1	label	

endifblock1:
