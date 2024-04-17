.section .data

int_fmt:
	.string "%ld\n"

.text
.globl main
.type main, @function

main:
	pushq %rbp
	movq %rsp, %rbp
	subq $8, %rsp
	movq $3, %rax
	movq %rax, -8(%rbp)
	subq $8, %rsp
	movq -8(%rbp), %rax
	movq %rax, -16(%rbp)
	subq $8, %rsp
	movq $2, %rax
	movq %rax, -24(%rbp)
	subq $8, %rsp
	movq -24(%rbp), %rax
	movq %rax, -32(%rbp)
	subq $8, %rsp
	movq $431, %rax
	movq %rax, -40(%rbp)
	subq $8, %rsp
	movq -40(%rbp), %rax
	movq %rax, -48(%rbp)
	subq $8, %rsp
	movq -16(%rbp), %rax
	movq %rax, -56(%rbp)
	movq -56(%rbp), %rsi
	subq $8, %rsp
	movq $int_fmt, %rdi
	call printf
	subq $8, %rsp
	movq -48(%rbp), %rax
	movq %rax, -64(%rbp)
	movq -64(%rbp), %rsi
	subq $8, %rsp
	movq $int_fmt, %rdi
	call printf
	subq $8, %rsp
	movq -32(%rbp), %rax
	movq %rax, -72(%rbp)
	movq -72(%rbp), %rsi
	subq $8, %rsp
	movq $int_fmt, %rdi
	call printf
	subq $8, %rsp
	movq -16(%rbp), %rax
	movq %rax, -80(%rbp)
	subq $8, %rsp
	movq -48(%rbp), %rax
	movq %rax, -88(%rbp)
	subq $8, %rsp
	movq -32(%rbp), %rax
	movq %rax, -96(%rbp)
	subq $8, %rsp
	movq -88(%rbp), %rax
	movq -96(%rbp), %rbx
	idivq %rbx
	movq %rax, -0(%rbp)
	movq -0(%rbp), %rax
	movq %rax, -16(%rbp)
	subq $8, %rsp
	movq -16(%rbp), %rax
	movq %rax, -104(%rbp)
	movq -104(%rbp), %rsi
	subq $8, %rsp
	movq $int_fmt, %rdi
	call printf

	leave
	ret
