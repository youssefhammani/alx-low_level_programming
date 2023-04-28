section .data
    hello db "Hello, Holberton", 0
    format db "%s\n", 0

section .text
    global main

main:
    ; Prepare the arguments for printf
    mov rdi, format
    mov rsi, hello

    ; Call printf
    xor eax, eax
    call printf

    ; Exit the program
    xor eax, eax
    ret
