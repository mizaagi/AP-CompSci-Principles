########################################################################
# Description:
# Compute (1000 - 200 + 30), multiply by 2, and display the result
#
# Arguments:
#
# Returns:
########################################################################
.data
msg_res: .asciiz "The result  is: "

.text
main:
	# Assign numbers
	li $t0, 1000
	li $t1, 200
	li $t2, 30
	li $t3, 2
	
	sub $t0, $t0, $t1
	add $t0, $t0, $t2
	mul $t0, $t0, $t3
	
	li $v0, 4			# a0 = msg_sum
	la $a0, msg_res		# print_str(a0)
	syscall
	
	move $a0, $t0		# a0 = t4
	li $v0, 1			# print_int(a0)
	syscall
