extern printf

section .data
    msg: db "Hello, Holberton", 10, 0 ; add new line to end of string
    fmt: db "%s", 0

section .text
    global _start
_start:
    mov rdi,fmt
    mov rsi,msg
    xor rax,rax
    call printf
    xor rdi,rdi ; set exit status to 0
    mov rax,60 ; exit syscall number
    syscall

