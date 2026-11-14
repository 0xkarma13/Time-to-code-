# Sum of 5+4+3+2+1 using a countdown loop.
# The result (15) is returned as the process exit code.
# Build and run:
#   as -o sum_countdown.o sum_countdown.s
#   ld -o sum_countdown sum_countdown.o
#   ./sum_countdown; echo $?     # prints 15

.intel_syntax noprefix
.global _start

_start:
    mov eax, 0              # eax = running sum, starts at 0
    mov edi, 5              # edi = loop counter, counts down from 5

count:
    add eax, edi            # sum += counter
    dec edi                 # counter-- (also sets the zero flag)
    jnz count               # if counter != 0, repeat the loop

    mov edi, eax            # exit code (1st syscall argument) = sum
    mov eax, 60             # syscall number 60 = exit
    syscall                 # exit(sum)
