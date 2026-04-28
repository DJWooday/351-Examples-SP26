.data
prompt: .asciiz "Gimme number: "
answerMsg: .asciiz "Answer is: "

.text
main:
# Print prompt
la $a0 prompt
li $v0 4
syscall

# Get user response as int
li $v0 5
syscall
move $s0 $v0

# Go to fib function with s0 as input
move $a0 $s0
jal fib
move $a0 $v0

li $v0 1
syscall

li $v0 10
syscall

fib:
# push the stack back 3 spaces to hold:
move $fp $sp
addi $sp $sp -12
sw $a0 0($sp) # our argument
sw $ra 4($sp) # our return address
# and later, our answer from the first fib call

# Consider base cases
beq $a0 $zero fib_0
beq $a0 1 fib_1

# not a base case, we have to recurse
addi $a0 $a0 -1 #First, fib(n-1)
jal fib # Once we get back, we've got the answer in v0
sw $v0 8($sp) # save that here, cause we're about to recurse again

# now we need to recurse again
lw $a0 0($sp) # get n back
addi $a0 $a0 -2
jal fib # Again when we get back, we got the answer in v0
# but we don't need to recurse again, so we don't gotta store it

# compute answer and put it in return register
lw $t0 8($sp) #get fib(n-1) back
add $v0 $t0 $v0 # t0 is fib(n-1), v0 is fib(n-1), put it in return register
j fib_return

fib_0:
li $v0 0
j fib_return

fib_1:
li $v0 1
j fib_return

fib_return:
# To return, get the return address back and push the stack back up
lw $ra 4($sp)
add $sp $sp 12
jr $ra # go from whence we came

End:
