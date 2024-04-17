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
	movq $2, %rax
	movq %rax, -8(%rbp)
	subq $8, %rsp
	movq -8(%rbp), %rax
	movq %rax, -16(%rbp)
	subq $8, %rsp
	movq -16(%rbp), %rax
	movq %rax, -24(%rbp)
	subq $8, %rsp
	movq -16(%rbp), %rax
	movq %rax, -32(%rbp)
	subq $8, %rsp
	movq $8, %rax
	movq %rax, -40(%rbp)
	subq $8, %rsp
	movq -32(%rbp), %rax
	shlq -40(%rbp), %rax
	movq %rax, -0(%rbp)
	movq -0(%rbp), %rax
	movq %rax, -16(%rbp)
	subq $8, %rsp
	movq -16(%rbp), %rax
	movq %rax, -48(%rbp)
	subq $8, %rsp
	movq -16(%rbp), %rax
	movq %rax, -56(%rbp)
	subq $8, %rsp
	movq $81, %rax
	movq %rax, -64(%rbp)
	subq $8, %rsp
	movq -56(%rbp), %rax
	subq -64(%rbp), %rax
	movq %rax, -0(%rbp)
	movq -0(%rbp), %rax
	movq %rax, -16(%rbp)
	subq $8, %rsp
	movq -16(%rbp), %rax
	movq %rax, -72(%rbp)
	movq -72(%rbp), %rsi
	subq $8, %rsp
	movq $int_fmt, %rdi
	call printf

	leave
	ret
