section .data
	info db 'Hello, Holberton',10   ;prints string followed by a new line(10)
	info_len equ $ - info		;calculates the length of string

section .text
	global main	;main declared as program entry point

main:
	mov rax, 1	;mov loads values into registers and rax 1 represents write
	mov rdi, 1	;load file decriptor 1(stdout) into rdi register
	mov rsi, info	;load the address of the string into rsi
	mov rdx, info_len	;lead the length of the string into rdx
	syscall		;write the string to stdout

	mov rax, 60	;prepare syscall number 60 (exit)
	xor rdi, rdi	;clear rdi (exit status 0 (success))
	syscall		;invoke syscall to exit the program
