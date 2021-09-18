#! /bin/bash
for f in .c;
do 
	gcc -c *.c
done
ar rs liball.a *.o

