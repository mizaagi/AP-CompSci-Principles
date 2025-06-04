.data
prompt1: .asciiz "Enter an integer: "
evenstr: .asciiz "\nThe integer is even."
oddstr: .asciiz "\nThe integer is odd."

.text
main:
	# === Input int1 ===
	la $a0, prompt1		# print_str(a0)
	li $v0, 4
	syscall
	li $v0, 5			# v0 = read_int()
	syscall
	move $t0, $v0		# t0 = v0
	# Check
	li $t2, 2
	div $t0, $t2
	mfhi $t1
	bnez $t1, odd
even:
	la $a0, evenstr
	li $v0, 4
	syscall
	j exit
odd:
	la $a0, oddstr
	li $v0, 4
	syscall
exit:
	li $v0, 10
	syscall
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
