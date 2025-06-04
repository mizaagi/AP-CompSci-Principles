########################################################################
# Description:
# Input two numbers and display their sum and difference
#
# Arguments:
#
# Returns:
########################################################################
.data
prompt1: .asciiz "Enter first int: "
prompt2: .asciiz "Enter second int: "
sum: .asciiz "The sum of the two ints is: "
diff: .asciiz "\nThe difference of the two ints is: "

.text
main:
	# === Input int1 ===
	la $a0, prompt1		# print_str(a0)
	li $v0, 4
	syscall
	li $v0, 5			# v0 = read_int()
	syscall
	move $t0, $v0		# t0 = v0
	# === Input int2 ===
	la $a0, prompt2		# print_str(a0)
	li $v0, 4
	syscall
	li $v0, 5			# v0 = read_int()
	syscall
	move $t1, $v0		# t0 = v0
	# === Calculate ===
	add $t2, $t0, $t1
	sub $t3, $t0, $t1
	# === Output ===
	la $a0, sum			# a0 = out1
	li $v0, 4			# print_str(a0)
	syscall
	move $a0, $t2		# a0 = t4
	li $v0, 1			# print_int(a0)
	syscall
	# Difference
	la $a0, diff		# a0 = out1
	li $v0, 4			# print_str(a0)
	syscall
	move $a0, $t3		# a0 = t4
	li $v0, 1			# print_int(a0)
	syscall
exit:
	li $v0, 10
	syscall