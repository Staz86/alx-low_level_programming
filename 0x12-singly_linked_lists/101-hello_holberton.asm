section .data
    hello_msg db "Hello, Holberton", 0
    nl_msg db 10, 0

section .text
    global main
    extern printf

main:
    push rbp
    mov rbp, rsp

    ; align the stack to a 16-byte boundary
    sub rsp, 8
    and rsp, -16

    ; print hello_msg
    lea rdi, [hello_msg]
    xor eax, eax
    call printf

    ; print nl_msg
    lea rdi, [nl_msg]
    xor eax, eax
    call printf

    ; restore the stack pointer and base pointer
    mov rsp, rbp
    pop rbp
    xor eax, eax
    ret

