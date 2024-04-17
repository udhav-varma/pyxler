.section .data
output_fmt:
    .string "%d\n"

.section .text
.globl main
.type main, @function

main:

    enter $0, $0
    # Initialize variables
    movq $5, %rdi   # x = 5

    # Calculate y = x!
    call factorial  # call factorial(x)
    movq %rax, %r8  # y = %rax

    # Output y
    movq %r8, %rsi  # Move y into %rsi (second argument for printf)
    movq $output_fmt, %rdi # Move format string into %rdi (first argument for printf)
    # xorq %rax, %rax # Clear %rax for printf call
    call printf

    # Exit the program
    leave
    movq $60, %rax
    xorq %rdi, %rdi
    syscall

factorial:
    # Calculate the factorial of the value in %rdi
    movq %rdi, %rax # Copy the input value to %rax
    movq $1, %rbx   # Initialize the result to 1
    jmp check_loop_condition

loop:
    imulq %rax, %rbx # %rbx = %rbx * %rax
    decq %rax        # Decrement %rax

check_loop_condition:
    cmpq $1, %rax    # Check if %rax is 1
    jg loop          # Loop if %rax is greater than 1

    movq %rbx, %rax  # Move the result to %rax for returning
    ret

