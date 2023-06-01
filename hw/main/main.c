#include "main.h"

int main(int argc, char **argv)
{
    char exit_code = EXIT_FAILURE;
    FILE *file;
    if (argc > 1 && (file = fopen(argv[1], "r")))
    {
        int n, arr[MAX_N];
        exit_code = ReadFile(file, (int *) arr, &n);
        if (exit_code == EMPTY_FILE)
            printf("Файл пуст\n");
        else if (exit_code == LONG_FILE)
            printf("В файле слишком много элементов\n");
        else
        {
            exit_code = EXIT_FAILURE;
            for (int i = 0; i < n; i++)
            {
                if (IsPalindrome(arr[i]))
                {
                    printf("%d ", arr[i]);
                    exit_code = EXIT_SUCCESS;
                }
            }
            if (exit_code)
                printf("Файл не содержит чисел-палиндромов\n");
        }
        fclose(file);
    }
    else
        printf("Файл не существует\n");
    return exit_code;
}
