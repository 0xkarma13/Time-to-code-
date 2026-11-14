# Factorial of 3 using a loop (3! = 1 * 2 * 3 = 6).
# The result is returned as the process exit code.
# Build and run:
#   as -o factorial_3.o factorial_3.s
#   ld -o factorial_3 factorial_3.o
#   ./factorial_3; echo $?     # prints 6

.intel_syntax noprefix
.global _start

_start:
    mov eax, 1              # eax = result, starts at 1 (starting at 0 would zero every product)
    mov edi, 1              # edi = loop counter, starts at 1

factorial:
    imul eax, edi           # result *= counter
    inc edi                 # counter++
    cmp edi, 3              # compare counter with 3
    jle factorial           # if counter <= 3, repeat the loop

    mov edi, eax            # exit code (1st syscall argument) = result
    mov eax, 60             # syscall number 60 = exit
    syscall                 # exit(result)
