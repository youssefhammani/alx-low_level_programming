section .data
    msg db "Hello, Holberton", 0
    fmt db "%s\n", 0

section .text
    global main

main:
    ; Set up stack frame
    push rbp
    mov rbp, rsp

    ; Call printf function
    mov rdi, fmt
    mov rsi, msg
    xor rax, rax
    call printf

    ; Clean up stack and exit
    mov rsp, rbp
    pop rbp
    xor eax, eax
    ret
