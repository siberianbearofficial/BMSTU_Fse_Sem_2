#include "input.h"

int ReadFile(FILE *file, int *arr, int *n)
{
    int exit_code = !file || !arr || !n;
    
    if (!exit_code)
    {
        *n = 0;
        int num;
        
        while (fscanf(file, "%d", &num) > 0 && !exit_code)
        {
            arr[*n] = num;
            (*n)++;
            if (*n == MAX_N)
                exit_code = LONG_FILE;
        }
        if (!*n)
            exit_code = EMPTY_FILE;
    }
    return exit_code;
}
