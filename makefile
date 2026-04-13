# CC = gcc
# CFLAGS = -Wall -Wextra -g -pedantic -std=c99

1 :
	gcc -std=c11 -O2 p01_main.c p01_student.c stack.c -o p01
2 :
	gcc -std=c11 -O2 p02_main.c -o p02
3 : 
	gcc -std=c11 -O2 p03_main.c p03_student.c stack.c queue.c -o p03
4 :
	gcc -std=c11 -O2 p04_main.c stack.c -o p04
5 :
	gcc -std=c11 -O2 p05_main.c -o p05
6 : 
	gcc -std=c11 -O2 p06_main.c p06_student.c -o p06
7 :
	gcc -std=c11 -O2 p07_main.c p07_student.c ll.c -o p07
8 :
	gcc -std=c11 -O2 p08_main.c p08_student.c ll.c -o p08
9 : 
	gcc -std=c11 -O2 p09_main.c p09_student.c ll.c -o p09
10 : 
	gcc -std=c11 -O2 p10_main.c p10_student.c ll.c -o p10

clean :
	rm -rf p01 p02 p03 p04 p05 p06 p07 p08 p09 p10