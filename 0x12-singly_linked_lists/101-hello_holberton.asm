; File: 101-hello_holberton.asm
; Assembly code to print "Hello, Holberton"
	global main
	extern printf
	
	section .data
msg:	db	'Hello, Holberton', 0
	section .text

main:	
; prepare arguments for printf
	push	rbp
	mov	rdi, msg
	xor	eax, eax
	call	printf
	
	; clean up stack and return
	pop	rdp
	ret
