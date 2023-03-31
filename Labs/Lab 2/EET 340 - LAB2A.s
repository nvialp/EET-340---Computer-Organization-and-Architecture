mov r2, #0
mov r3, #1
loop: cmp r3, #10
BGT exit
ADD r2, r2, r3
ADD r3, r3, #1
B loop
exit:
	