.data
prompt: .asciiz "Enter number for fact: "

.text
li $v0 4
la $a0 prompt
syscall

li $v0 5
syscall
move $a0 $v0 # assign input to a0

# call fact(input)
jal fact

move $a0 $v0 #print(return)
li $v0 1
syscall

li $v0 10
syscall

fact:
addi $sp $sp -8
sw $ra 4($sp)
sw $a0 0($sp)

# base case, n == 1
beq $a0 1 fact_base

# it's not 1, do recursion
addi $a0 $a0 -1 #n-1
jal fact # fact(n-1)

lw $t0 0($sp) # get my parameter (n) back
mul $v0 $v0 $t0 # return n * fact(n-1)
j fact_return

fact_base:
li $v0 1 # return 1

fact_return:
lw $ra 4($sp)
addi $sp $sp 8
jr $ra