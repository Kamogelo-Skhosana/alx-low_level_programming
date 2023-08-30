#!/bin/bash
# Conpile c files
gcc -c *.c
# create static library
ar rc liball.a *.o
ranlib liball.a
# remove object files
rm *.o
