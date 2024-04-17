.section .data
format_str: .string "%ld\n"
.text
.globl main
.type main, @function

main:
	pushq %rbp
	movq %rsp, %rbp
	subq $8, %rsp
	movq $3, -8(%rbp)
	subq $8, %rsp
	movq -8(%rbp), -8(%rbp)

	leave
	ret
