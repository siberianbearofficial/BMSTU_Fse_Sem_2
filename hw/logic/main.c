#include <stdio.h>

#include "logic.h"

#define N 11

const int in_data[N] = {
    -1010,
    -1001,
    -101,
    -100,
    -1,
    0,
    1,
    100,
    101,
    1001,
    1010,
};

const int out_data[N] = {
    0,
    0,
    0,
    0,
    0,
    1,
    1,
    0,
    1,
    1,
    0,
};

int main(void)
{
    int count = 0;
    for (int i = 0; i < N && !count; i++)
        count += IsPalindrome(in_data[i]) != out_data[i];
    printf("FAILED: %d\n", count);
    return 0;
}
