#!/bin/bash

gcc -std=c99 -g -Wall -Werror -Wextra -Wunused -Wpedantic -Wfloat-equal -Wfloat-conversion -Wvla -fsanitize=undefined -fprofile-arcs -ftest-coverage -c ./*.c -fsanitize=undefined
gcc -std=c99 -g -Wall -Werror -Wextra -Wunused -Wpedantic -Wfloat-equal -Wfloat-conversion -Wvla -fsanitize=undefined -fprofile-arcs -ftest-coverage ./*.o -o app.exe -lm -fsanitize=undefined
