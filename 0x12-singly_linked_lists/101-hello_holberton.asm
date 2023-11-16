section .data
    format db 'Hello, Holberton', 0xA; new line character

section .text
    global main
    extern printf

main:
    mov edi, format
    xor eax, eax
    call printf
    xor eax, eax   ; Set eax to 0 (optional, as it's already 0)
    ret
