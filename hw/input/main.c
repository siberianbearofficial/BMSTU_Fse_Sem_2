#include <stdio.h>
#include <stdlib.h>

#include "input.h"
#include "constants.h"

const char file_names[][25] = {
    "unit_tests/pos.txt",
    "unit_tests/empty.txt",
    "unit_tests/long.txt",
    "unit_tests/not_exist.txt",
};
    
int main(void)
{    
	int n, arr[MAX_N];
    int count = 0;
    for (int i = 0; i < TESTS_COUNT; i++)
    {    
        FILE *file = fopen(file_names[i], "r");
        int exit_code = ReadFile(file, arr, &n);
        count += exit_code == EXIT_SUCCESS && i == 0;
        count += exit_code == EMPTY_FILE && i == 1;
        count += exit_code == LONG_FILE && i == 2;
        count += exit_code == EXIT_FAILURE && i == 3;
    }
    printf("FAILED: %d\n", TESTS_COUNT - count);
    return EXIT_SUCCESS;
}
