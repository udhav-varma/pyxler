.section .data
output_fmt:
    .string "%d\n"

.section .text
.globl main
.type main, @function

main:

    enter $0, $0
    # Initialize variables
    movq $1, %rax   # a = 1
    movq $430, %rbx # b = 430

    # Calculate c = a + b
    addq %rbx, %rax # %rax = %rax + %rbx

    # Output c
    movq %rax, %rsi # Move c into %rsi (second argument for printf)
    movq $output_fmt, %rdi # Move format string into %rdi (first argument for printf)
    xorq %rax, %rax # Clear %rax for printf call
    call printf

    # Exit the program
    leave
    movq $60, %rax
    xorq %rdi, %rdi
    syscall

