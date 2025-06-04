########################################################################
# Description:
# Loops 4 times, adding 20 to a total variable set to 40, if the total 
# is greater than 100, subtract 100, then move the total into a 
# register and print.
#
# Arguments:
#
# Returns:
########################################################################
.data
output: .asciiz "Total: "

.text
main:
	li $t0, 40
	li $t1, 4
	li $t2, 1
	li $t3, 100
loop:
	addi $t0, $t0, 20
	addi $t2, $t2, 1
	ble $t2, $t1, loop
check:
	ble $t3, $t0, subtract
	j print
subtract:
	subi $t0, $t0, 100
print:
	la $a0, output
	li $v0, 4
	syscall
	move $a0, $t0		# a0 = t4
	li $v0, 1			# print_int(a0)
	syscall