.section .data

.text
int_fmt:
	.string "%ld\n"

string1:
	.string	"__main__"

# -------->		=	beginfunc func	label	
func:
	pushq %rbp
	movq %rsp, %rbp
	subq $144, %rsp
# -------->	a	=		popparam	
# -------->	b	=		popparam	
# -------->	$1	=	0		
	movq $0, %rax
	movq %rax, -16(%rbp)
# -------->	$3	=	8	*	$1
	movq $8, %rax
	imulq -16(%rbp), %rax
	movq %rax, -32(%rbp)
# -------->	$3	=	$3	+	8
	movq -32(%rbp), %rax
	addq $8, %rax
	movq %rax, -32(%rbp)
# -------->	$2	=	**(a + $3)		
	movq -32(%rbp), %r9
	movq 16(%rbp), %r10
	movq (%r9, %r10), %rax
	movq %rax, -24(%rbp)
# -------->	$4	=	0		
	movq $0, %rax
	movq %rax, -48(%rbp)
# -------->	$6	=	8	*	$4
	movq $8, %rax
	imulq -48(%rbp), %rax
	movq %rax, -64(%rbp)
# -------->	$6	=	$6	+	8
	movq -64(%rbp), %rax
	addq $8, %rax
	movq %rax, -64(%rbp)
# -------->	$5	=	**(a + $6)		
	movq -64(%rbp), %r9
	movq 16(%rbp), %r10
	movq (%r9, %r10), %rax
	movq %rax, -56(%rbp)
# -------->	$7	=	1		
	movq $1, %rax
	movq %rax, -80(%rbp)
# -------->	$9	=	8	*	$7
	movq $8, %rax
	imulq -80(%rbp), %rax
	movq %rax, -96(%rbp)
# -------->	$9	=	$9	+	8
	movq -96(%rbp), %rax
	addq $8, %rax
	movq %rax, -96(%rbp)
# -------->	$8	=	**(a + $9)		
	movq -96(%rbp), %r9
	movq 16(%rbp), %r10
	movq (%r9, %r10), %rax
	movq %rax, -88(%rbp)
# -------->	$10	=	$5	+	$8
	movq -56(%rbp), %rax
	addq -88(%rbp), %rax
	movq %rax, -104(%rbp)
# -------->	*(a + $3)	=	$10		
	movq -32(%rbp), %r9
	movq 16(%rbp), %r10
	movq -104(%rbp), %rax
	movq %rax, (%r9, %r10)
# -------->	$11	=	0		
	movq $0, %rax
	movq %rax, -120(%rbp)
# -------->	$13	=	8	*	$11
	movq $8, %rax
	imulq -120(%rbp), %rax
	movq %rax, -136(%rbp)
# -------->	$13	=	$13	+	8
	movq -136(%rbp), %rax
	addq $8, %rax
	movq %rax, -136(%rbp)
# -------->	$12	=	**(a + $13)		
	movq -136(%rbp), %r9
	movq 16(%rbp), %r10
	movq (%r9, %r10), %rax
	movq %rax, -128(%rbp)
# -------->	$12	=		param	
	movq -128(%rbp), %rdi
# -------->		=	print	callfunc	1
	movq %rdi, %rsi
	movq $int_fmt, %rdi
	xorq %rax, %rax
	call printf
# -------->		=	endfuncfunc	label	

endfuncfunc:

	leave
	ret

# -------->		=	beginfunc main	label	
.globl main
.type main, @function
main:
	pushq %rbp
	movq %rsp, %rbp
	subq $272, %rsp
# -------->	$14	=	2		
	movq $2, %rax
	movq %rax, -16(%rbp)
# -------->	$15	=	3		
	movq $3, %rax
	movq %rax, -32(%rbp)
# -------->	24	=		param	
	movq $24, %rdi
# -------->		=	allocmem 1	callfunc	
	call malloc
# -------->	a	=		popreturn	
	movq %rax, -40(%rbp)
# -------->	*(a)	=	2		
	movq $0, %r9
	movq -40(%rbp), %r10
	movq $2, %rax
	movq %rax, (%r9, %r10)
# -------->	*(a + 8)	=	$14		
	movq $8, %r9
	movq -40(%rbp), %r10
	movq -16(%rbp), %rax
	movq %rax, (%r9, %r10)
# -------->	*(a + 16)	=	$15		
	movq $16, %r9
	movq -40(%rbp), %r10
	movq -32(%rbp), %rax
	movq %rax, (%r9, %r10)
# -------->	$16	=	0		
	movq $0, %rax
	movq %rax, -56(%rbp)
# -------->	$18	=	8	*	$16
	movq $8, %rax
	imulq -56(%rbp), %rax
	movq %rax, -72(%rbp)
# -------->	$18	=	$18	+	8
	movq -72(%rbp), %rax
	addq $8, %rax
	movq %rax, -72(%rbp)
# -------->	$17	=	**(a + $18)		
	movq -72(%rbp), %r9
	movq -40(%rbp), %r10
	movq (%r9, %r10), %rax
	movq %rax, -64(%rbp)
# -------->	$19	=	0		
	movq $0, %rax
	movq %rax, -88(%rbp)
# -------->	$21	=	8	*	$19
	movq $8, %rax
	imulq -88(%rbp), %rax
	movq %rax, -104(%rbp)
# -------->	$21	=	$21	+	8
	movq -104(%rbp), %rax
	addq $8, %rax
	movq %rax, -104(%rbp)
# -------->	$20	=	**(a + $21)		
	movq -104(%rbp), %r9
	movq -40(%rbp), %r10
	movq (%r9, %r10), %rax
	movq %rax, -96(%rbp)
# -------->	$22	=	1		
	movq $1, %rax
	movq %rax, -120(%rbp)
# -------->	$24	=	8	*	$22
	movq $8, %rax
	imulq -120(%rbp), %rax
	movq %rax, -136(%rbp)
# -------->	$24	=	$24	+	8
	movq -136(%rbp), %rax
	addq $8, %rax
	movq %rax, -136(%rbp)
# -------->	$23	=	**(a + $24)		
	movq -136(%rbp), %r9
	movq -40(%rbp), %r10
	movq (%r9, %r10), %rax
	movq %rax, -128(%rbp)
# -------->	$25	=	$20	+	$23
	movq -96(%rbp), %rax
	addq -128(%rbp), %rax
	movq %rax, -144(%rbp)
# -------->	*(a + $18)	=	$25		
	movq -72(%rbp), %r9
	movq -40(%rbp), %r10
	movq -144(%rbp), %rax
	movq %rax, (%r9, %r10)
# -------->	$26	=	0		
	movq $0, %rax
	movq %rax, -160(%rbp)
# -------->	$28	=	8	*	$26
	movq $8, %rax
	imulq -160(%rbp), %rax
	movq %rax, -176(%rbp)
# -------->	$28	=	$28	+	8
	movq -176(%rbp), %rax
	addq $8, %rax
	movq %rax, -176(%rbp)
# -------->	$27	=	**(a + $28)		
	movq -176(%rbp), %r9
	movq -40(%rbp), %r10
	movq (%r9, %r10), %rax
	movq %rax, -168(%rbp)
# -------->	$27	=		param	
	movq -168(%rbp), %rdi
# -------->		=	print	callfunc	1
	movq %rdi, %rsi
	movq $int_fmt, %rdi
	xorq %rax, %rax
	call printf
# -------->	$29	=	a		
	movq -40(%rbp), %rax
	movq %rax, -184(%rbp)
# -------->	$30	=	2		
	movq $2, %rax
	movq %rax, -200(%rbp)
# -------->	$30	=		param	
	pushq -200(%rbp)
# -------->	$29	=		param	
	pushq -184(%rbp)
# -------->		=	func	callfunc	2
	call func
	addq $16, %rsp
# -------->	$31	=		popreturn	
	movq %rax, -208(%rbp)
# -------->	$32	=	0		
	movq $0, %rax
	movq %rax, -224(%rbp)
# -------->	$34	=	8	*	$32
	movq $8, %rax
	imulq -224(%rbp), %rax
	movq %rax, -240(%rbp)
# -------->	$34	=	$34	+	8
	movq -240(%rbp), %rax
	addq $8, %rax
	movq %rax, -240(%rbp)
# -------->	$33	=	**(a + $34)		
	movq -240(%rbp), %r9
	movq -40(%rbp), %r10
	movq (%r9, %r10), %rax
	movq %rax, -232(%rbp)
# -------->	$35	=	3		
	movq $3, %rax
	movq %rax, -256(%rbp)
# -------->	$36	=	$33	+	$35
	movq -232(%rbp), %rax
	addq -256(%rbp), %rax
	movq %rax, -264(%rbp)
# -------->	$36	=		param	
	movq -264(%rbp), %rdi
# -------->		=	print	callfunc	1
	movq %rdi, %rsi
	movq $int_fmt, %rdi
	xorq %rax, %rax
	call printf
# -------->		=	endfuncmain	label	

endfuncmain:

	leave
	ret

# -------->		=	beginif1	label	

beginif1:
# -------->	$37	=	__name__		
	movq -0(%rbp), %rax
	movq %rax, -8(%rbp)
# -------->	$38	=	string1		"__main__"
	movq string1, %rax
	movq %rax, -16(%rbp)
# -------->	$39	=	$37	==	$38
	movq -8(%rbp), %rax
	cmpq -16(%rbp), %rax
	sete %al
	movzbq %al, %rax
	movq %rax, -24(%rbp)
# -------->	endif1	=	if_false	goto	$39
	movq -24(%rbp), %rax
	cmpq $0, %rax
	je endif1
# -------->		=	main	callfunc	0
	call main
	addq $0, %rsp
# -------->	$40	=		popreturn	
	movq %rax, -32(%rbp)
# -------->	endifblock1	=		goto	
	jmp endifblock1
# -------->		=	endif1	label	

endif1:
# -------->		=	endifblock1	label	

endifblock1:
