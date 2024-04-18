.section .data

.text
int_fmt:
	.string "%ld\n"

string1:
	.string	"__main__"

binarySearch:
	pushq %rbp
	movq %rsp, %rbp
	subq $80, %rsp
	movq $8, %rax
	movq %rax, -16(%rbp)
	movq -16(%rbp), %rax
	movq %rax, -24(%rbp)
	movq -24(%rbp), %rax
	movq %rax, -32(%rbp)
	movq 16(%rbp), %rax
	movq %rax, -40(%rbp)
	movq 24(%rbp), %rax
	movq %rax, -48(%rbp)
	movq -40(%rbp), %rax
	addq -48(%rbp), %rax
	movq %rax, -56(%rbp)
	movq -24(%rbp), %rax
	addq -56(%rbp), %rax
	movq %rax, -24(%rbp)
	movq -24(%rbp), %rax
	movq %rax, -64(%rbp)
	movq -64(%rbp), %rdi
	movq %rdi, %rsi
	movq $int_fmt, %rdi
	xorq %rax, %rax
	call printf
	movq -24(%rbp), %rax
	movq %rax, -72(%rbp)
	movq -72(%rbp), %rax

endfuncbinarySearch:

	leave
	ret

.globl main
.type main, @function
main:
	pushq %rbp
	movq %rsp, %rbp
	subq $64, %rsp
	movq $0, %rax
	movq %rax, -16(%rbp)
	movq -16(%rbp), %rax
	movq %rax, -24(%rbp)

beginfor1:
	movq $10, %rax
	movq %rax, -40(%rbp)
	movq , %rax
	movq %rax, -56(%rbp)
	movq -56(%rbp), %rax
	cmpq -40(%rbp), %rax
	setl %al
	movzbq %al, %rax
	movq %rax, -64(%rbp)
	movq -64(%rbp), %rax
	cmpq $0, %rax
	je endfor1
	movq -56(%rbp), %rax
	movq %rax, 
	movq -24(%rbp), %rax
	movq %rax, -48(%rbp)
	movq -48(%rbp), %rdi
	movq %rdi, %rsi
	movq $int_fmt, %rdi
	xorq %rax, %rax
	call printf
	movq -56(%rbp), %rax
	addq , %rax
	movq %rax, -56(%rbp)
	jmp beginfor1

endfor1:

endfuncmain:

	leave
	ret


beginif1:
	movq -0(%rbp), %rax
	movq %rax, -8(%rbp)
	movq string1, %rax
	movq %rax, -16(%rbp)
	movq -8(%rbp), %rax
	cmpq -16(%rbp), %rax
	sete %al
	movzbq %al, %rax
	movq %rax, -24(%rbp)
	movq -24(%rbp), %rax
	cmpq $0, %rax
	je endif1
	call main
	addq $0, %rsp
	movq %rax, -32(%rbp)
	jmp endifblock1

endif1:

endifblock1:
