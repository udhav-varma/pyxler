.section .data

int_fmt:
	.string "%ld\n"

.text
.globl main
.type main, @function

main:
	pushq %rbp
	movq %rsp, %rbp
	subq $128, %rsp
	movq $15, %rax
	movq %rax, -16(%rbp)
	movq -16(%rbp), %rax
	movq %rax, -24(%rbp)
	movq $20, %rax
	movq %rax, -40(%rbp)
	movq -40(%rbp), %rax
	movq %rax, -48(%rbp)

beginwhile1:
	movq -24(%rbp), %rax
	movq %rax, -56(%rbp)
	movq -48(%rbp), %rax
	movq %rax, -64(%rbp)
	movq -56(%rbp), %rax
	cmpq -64(%rbp), %rax
	setl %al
	movzbq %al, %rax
	movq %rax, -72(%rbp)
	movq -72(%rbp), %rax
	cmpq $0, %rax
	je endwhile1
	movq -24(%rbp), %rax
	movq %rax, -80(%rbp)
	movq -24(%rbp), %rax
	movq %rax, -88(%rbp)
	movq $1, %rax
	movq %rax, -104(%rbp)
	movq -88(%rbp), %rax
	addq -104(%rbp), %rax
	movq %rax, -112(%rbp)
	movq -112(%rbp), %rax
	movq %rax, -24(%rbp)
	movq -24(%rbp), %rax
	movq %rax, -120(%rbp)
	movq -120(%rbp), %rsi
	movq $int_fmt, %rdi
	call printf
	jmp beginwhile1

endwhile1:

	leave
	ret
