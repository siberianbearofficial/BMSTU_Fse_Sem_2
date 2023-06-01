#!/bin/bash

gcc -std=c99 -g -Wall -Werror -Wextra -Wunused -Wpedantic -Wfloat-equal -Wfloat-conversion -Wvla -fsanitize=address -fno-omit-frame-pointer -fprofile-arcs -ftest-coverage -c ./*.c -fsanitize=address
gcc -std=c99 -g -Wall -Werror -Wextra -Wunused -Wpedantic -Wfloat-equal -Wfloat-conversion -Wvla -fsanitize=address -fno-omit-frame-pointer -fprofile-arcs -ftest-coverage ./*.o -o app.exe -lm -fsanitize=address
