# Sum of 1..5 using a loop.
# The result (15) is returned as the process exit code.
# Run: as -o sum.o sum.s && ld -o sum sum.o && ./sum; echo $?

.intel_syntax noprefix
.global _start

_start:
    mov eax, 0              # eax = running sum, starts at 0
    mov ecx, 1              # ecx = loop counter, starts at 1
    jmp loop_call           # jump into the loop

loop_call:
    add eax, ecx            # sum += counter
    inc ecx                 # counter++
    cmp ecx, 5              # compare counter with 5
    jle loop_call           # if counter <= 5, repeat the loop

    mov edi, eax            # exit code (1st syscall argument) = sum
    mov eax, 60             # syscall number 60 = exit
    syscall                 # exit(sum) -> echo $? prints 15
