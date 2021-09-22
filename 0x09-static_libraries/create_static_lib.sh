#! /bin/bash
for f in *.c;
do 
gcc -c $f
done
ar -rc liball.a *.o
ranlib liball.a

