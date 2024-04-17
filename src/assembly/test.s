.section .data
a: .quad 4 # Declare and initialize the integer 'a' to 4
format_str: .string "%ld\n"

.section .text
.globl main
.type main, @function

main:
    # Set up the stack frame
    pushq %rbp
    movq %rsp, %rbp

    # Load the value of 'a' into a register
    movq a(%rip), %rax

    # Add 10 to the value of 'a'
    addq $10, %rax

    # Store the updated value of 'a'
    movq %rax, a(%rip)

    # Print the value of 'a'
	movq $format_str, %rdi
    movq a(%rip), %rsi # Pointer to the value of 'a'
    call printf

    # Restore the stack frame and exit
    leave
    movq $60, %rax # System call number for exit (60)
    xorq %rdi, %rdi # Return code (0)
    syscall

