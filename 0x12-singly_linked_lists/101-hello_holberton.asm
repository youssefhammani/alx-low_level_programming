section .data
    hello db "Hello, Holberton", 0
    fmt db "%s\n", 0

section .text
    global _start

_start:
    push hello
    push fmt
    call printf
    add rsp, 16  ; clean up the stack

    mov eax, 1   ; exit system call
    xor ebx, ebx ; return 0 status
    int 0x80     ; execute syscall

