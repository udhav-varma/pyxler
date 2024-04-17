.section .data
output_fmt:
    .string "%d\n"

.section .text
.globl main
.type main, @function

main:

    enter $0, $0
    # Initialize variables
    movq $10, %rax   # a = 10
    movq $20, %rbx   # b = 20
    movq $30, %rcx   # c = 30

    # Calculate d = a + b
    movq %rax, %rdi  # %rdi = a
    movq %rbx, %rsi  # %rsi = b
    call add         # call add(a, b)
    movq %rax, %r8   # d = %rax

    # Calculate e = b + c
    movq %rbx, %rdi  # %rdi = b
    movq %rcx, %rsi  # %rsi = c
    call add         # call add(b, c)
    movq %rax, %r9   # e = %rax

    # Calculate f = d + e
    movq %r8, %rdi   # %rdi = d
    movq %r9, %rsi   # %rsi = e
    call add         # call add(d, e)
    movq %rax, %r10  # f = %rax

    # Output f
    movq %r10, %rsi  # Move f into %rsi (second argument for printf)
    movq $output_fmt, %rdi # Move format string into %rdi (first argument for printf)
    xorq %rax, %rax  # Clear %rax for printf call
    call printf

    # Exit the program
    leave
    movq $60, %rax
    xorq %rdi, %rdi
    syscall

add:
    # Add two 64-bit integers
    addq %rsi, %rdi
    movq %rdi, %rax
    ret

