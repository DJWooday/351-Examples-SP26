.data
array1: .word 5 5 5 5 10
array2: .word 1 2 3 4 5
.text
li $s0 3
li $s1 5

beq $s0 $s1 TheyWereEqual
li $a0 0
li $v0 1
syscall
j AfterTheIf

TheyWereEqual:
li $t0 1
li $v0 1
add $a0 $t0 $zero
syscall

AfterTheIf:


li $s0 100
li $s1 200
mult $s0 $s1

li $s0 11
li $s1 4
div $s0 $s1


li $s3 0
li $s5 5
la $s6 array1
Loop:
sll $t1 $s3 2
add $t1 $t1 $s6
lw $t0 0($t1)
bne $t0 $s5 Exit

addi $s3 $s3 1
j Loop

Exit:

li $s5 5 #len = 5
li $s3 0 #i = 0
la $s6 array2

SumLoop:
beq $s3 $s5 SumLoopExit

sll $t1 $s3 2 # i = i *4 gets offet
add $t1 $t1 $s6 # add offset to address
lw $t0 0($t1) 
add $s7 $s7 $t0

addi $s3 $s3 1
j SumLoop

SumLoopExit:
li $v0 1
move $a0 $s7
syscall


