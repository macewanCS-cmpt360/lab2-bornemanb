.DEFAULT_GOAL := all
q1: q1.c
	gcc q1.c -o q1
q2: q2.c
	gcc q2.c -o q2
q3: q3.c
	gcc q3.c -o q3
q7: q7.c
	gcc q7.c -o q7
shell: shell.c 
	gcc shell.c -o shell
all: q1 q2 q3 q7 shell
