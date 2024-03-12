#!/bin/bash

echo 'void srand(unsigned int seed) {}' > rand.c
echo 'int rand(void) { return 9; }' >> rand.c
gcc -shared -fPIC -o rand.so rand.c -ldl
export LD_PRELOAD=./rand.so
