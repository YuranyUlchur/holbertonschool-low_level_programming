#!bin/bash
gcc -c *.c
ranlib libname.a
ar -rc liball.a *.o
