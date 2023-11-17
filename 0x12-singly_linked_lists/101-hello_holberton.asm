section .data
	hello db "Hello, Holberton", 0
	format db "%s", 10

section .text
	global main
	extern printf

main:
	push rbp
	mov rdi, format
	mov rsi, hello
	call printf
	pop rbp
	mov eax, 0
	ret
