#include "main.h"

const char file_names[][25] = {
        "unit_tests/pos.txt",
        "unit_tests/empty.txt",
        "unit_tests/not_exist.txt",
};

int main(void)
{
    int count = 0;
    for (int i = 0; i < 3; i++)
    {
        FILE *fin = fopen(file_names[i], "r");

        if (fin)
        {
            int exit_code = read_file(fin, stdout);
            count += exit_code == EXIT_SUCCESS && i != 0;
            count += exit_code == EMPTY_FILE && i != 1;
            count += exit_code == LONG_LINE && i != 2;
        }
        else
            count++;
    }
    printf("SUCCESSFUL: %d/3", count);
    return EXIT_SUCCESS;
}
