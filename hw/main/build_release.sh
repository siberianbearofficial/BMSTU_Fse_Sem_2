#!/bin/bash

gcc -std=c99 -Wall -Werror -Wpedantic -Wextra -Wfloat-equal -Wfloat-conversion -lm -O3 -Wvla -c --coverage ./*.c
gcc ./*.o -o app.exe -lm --coverage

