.text
li $a0 5
jal fact

li $v0 10
syscall

fact:
addi $sp $sp -8
sw $ra 4($sp)
sw $a0 0($sp)

ble $a0 1 fact_base

addi $a0 $a0 -1
jal fact

move $t0 $v0
lw $t1 0($sp)

mul $v0 $t0 $t1
j fact_return

fact_base:
li $v0 1

fact_return:
lw $ra 4($sp)
addi $sp $sp 8
jr $ra

