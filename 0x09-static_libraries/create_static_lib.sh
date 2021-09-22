#! /bin/bash
for f in *.c;
do 
gcc -c $f
done
ar -rc libmy.a *.o
ranlib libmy.a

