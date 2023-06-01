#!/bin/bash

gcc -std=c99 -g -Wall -Werror -Wextra -Wunused -Wpedantic -Wfloat-equal -Wfloat-conversion -Wvla -fsanitize=memory -fno-omit-frame-pointer -fprofile-arcs -ftest-coverage -c ./*.c -fsanitize=memory
gcc -std=c99 -g -Wall -Werror -Wextra -Wunused -Wpedantic -Wfloat-equal -Wfloat-conversion -Wvla -fsanitize=memory -fno-omit-frame-pointer -fprofile-arcs -ftest-coverage ./*.o -o app.exe -lm -fsanitize=memory
