section .data
    hello db "Hello, Holberton", 10 ; message to print

section .text
    global main

    extern printf

main:
    push rbp        ; set up stack frame
    mov rbp, rsp

    push hello      ; push message pointer onto stack
    call printf     ; call printf function
    add rsp, 8      ; adjust stack pointer to remove message pointer

    mov rsp, rbp    ; tear down stack frame
    pop rbp

    ret             ; return from main
