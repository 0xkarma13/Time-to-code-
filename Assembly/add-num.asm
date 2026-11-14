.intel_syntax noprefix
.global _start


_start:
 mov eax, 8
 mov edi, 8
 cmp eax, edi
 je label
 mov edi, 0
 mov eax, 60
 syscall




 label: 
  inc eax
  sub eax, 3
  add eax, edi
  mov edi, eax
  mov eax, 60
  syscall

