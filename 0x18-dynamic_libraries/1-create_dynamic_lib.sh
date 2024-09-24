#!/bin/bash
for file in my_functions/*.c; do
    gcc -c -fPIC "$file" -o "${file%.c}.o"
done
gcc -shared -o liball.so *.o
