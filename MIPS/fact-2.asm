.data
prompt: .asciiz "Enter a number for fact: "

.text
li $v0 4
la $a0 prompt
syscall

li $v0 5
syscall
move $a0 $v0

#li $a0 5
jal fact

move $a0 $v0 
li $v0 1
syscall

li $v0 10
syscall

fact:
move $t0 $a0
addi $sp $sp -8 # push stack down 2 words
sw $t0 0($sp)
sw $ra 4($sp)

# base case, if n == 1
beq $t0 1 fact_base

# Recursive case fact(n-1)
addi $a0 $t0 -1 # n - 1
jal fact #fact(n-1)
move $t1 $v0
lw $t0 0($sp) # grabbing n back from stack
mul $v0 $t1 $t0  # doing n * fact(n-1)
j fact_return

fact_base:
li $v0 1

fact_return:
lw $ra 4($sp) # get this function's return address
addi $sp $sp 8
jr $ra