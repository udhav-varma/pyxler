.section .data
output_fmt:
    .string "%d\n"

.section .text
.globl main
.type main, @function

main:

    # Set up the stack frame
    pushq %rbp
    movq %rsp, %rbp

    # Initialize variables
    movq $0, %rax   # x = 0
    movq $0, %rbx   # i = 0

loop:
    # Check loop condition
    cmpq $10, %rbx
    jge end_loop

    # Loop body
    addq %rbx, %rax # x = x + i

    # Increment loop counter
    incq %rbx
    jmp loop

end_loop:
   # Prepare arguments for printf
    movq %rax, %rsi # Move x into %rsi (second argument)
    movq $output_fmt, %rdi # Move format string into %rdi (first argument)
    call printf

    # Restore the stack frame and exit
    leave
    movq $60, %rax # System call number for exit (60)
    xorq %rdi, %rdi # Return code (0)
    syscall
