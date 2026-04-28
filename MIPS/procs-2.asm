main:
li $s0 3
li $s1 4

# do some other stuff ideally

move $a0 $s0
move $a1 $s1
jal addition # add(x, y)

move $s2 $v0 #s2 = add(x, y)

move $a0 $s2
li $v0 1
syscall

j end

addition:
move $t0 $a0 
move $t1 $a1

add $t2 $t0 $t1

move $v0 $t2 # set return value
jr $ra

end: