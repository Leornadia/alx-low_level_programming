section .data
    message db "Hello, Holberton!", 0

section .text
    global _start

_start:
    ; Write to stdout
    mov rax, 1           ; syscall: SYS_write
    mov rdi, 1           ; file descriptor: stdout
    mov rsi, message     ; pointer to the message
    mov rdx, 18          ; length of the message
    syscall             ; invoke syscall

    ; Exit the program
    mov rax, 60          ; syscall: SYS_exit
    xor rdi, rdi         ; status: 0
    syscall             ; invoke syscall

