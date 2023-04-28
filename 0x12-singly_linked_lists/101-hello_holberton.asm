section .data
    hello db "Hello, Holberton", 0
    format db "%s\n", 0

section .text
    global main

    ; Declare the printf function as external
    extern printf

main:
    ; Save the base pointer
    push rbp
    mov rbp, rsp

    ; Prepare the arguments for printf
    mov rdi, format
    mov rsi, hello

    ; Call printf
    call printf

    ; Restore the base pointer and return
    leave
    ret

