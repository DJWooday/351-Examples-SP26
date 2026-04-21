.data
array: .word 8 23 10 44 29 45

.text
la $s0 array

#print array[2] + 4
lw $t0 8($s0)
li $t1 4
add $a0 $t1 $t0
li $v0 1
syscall

#print array[3] + array[4]
lw $t0 12($s0) #array[3]
lw $t1 16($s0) #array[4]
li $v0 1 # not needed
add $a0 $t1 $t0
syscall

sw $a0 20($s0)

move $s7 $sp

li $t0 100
sw $t0 0($sp)
addi $sp $sp 4

li $t0 200
sw $t0 0($sp)
addi $sp $sp 4

li $t0 250 
sw $t0 0($sp)
addi $sp $sp 4



#li $s0 4
#li $s1 3
#mul $t1 $s0 $s1

#li $v0 11
#add $a0 $t1 $zero
#syscall
