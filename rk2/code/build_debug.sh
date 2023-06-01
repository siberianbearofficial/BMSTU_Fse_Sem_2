#!/bin/bash

gcc -Wall -Werror -Wpedantic -Wextra -Wfloat-equal -Wfloat-conversion -lm -g3 -Wvla -c --coverage ./*.c
gcc ./*.o -o app.exe -lm --coverage

