.section .data
output_fmt:
    .string "%d\n"

.section .text
.globl main
.type main @function

main:
    enter $0, $0
    # Allocate space on the stack for a and b
    movq $10, -16(%rsp)   # a = 10
    subq $16, %rsp  # Allocate 16 bytes (8 bytes for each variable)

    # Initialize variables
    movq $20, 8(%rsp)  # b = 20

    # Load variables from the stack
    movq (%rsp), %rax  # %rax = a
    movq 8(%rsp), %rbx # %rbx = b

    # Check if a < b
    cmpq %rbx, %rax
    jl less_than

    # Check if a == b
    jne greater_than
    addq %rbx, %rax  # a = a + b
    jmp end_if

less_than:
    addq %rbx, %rax  # a = a + b
    jmp end_if

greater_than:
    subq %rax, %rbx  # a = b - a
    movq %rbx, %rax

end_if:
    # Store the updated value of a on the stack
    movq %rax, (%rsp)

    # Output a
    movq (%rsp), %rsi  # Move a into %rsi (second argument for printf)
    movq $output_fmt, %rdi  # Move format string into %rdi (first argument for printf)
    xorq %rax, %rax  # Clear %rax for printf call
    call printf

    # Deallocate stack space
    addq $16, %rsp

    # Exit the program
    leave
    movq $60, %rax
    xorq %rdi, %rdi
    syscall
