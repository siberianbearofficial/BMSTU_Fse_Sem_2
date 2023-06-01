#include "main.h"

char out_lines[][25] = {
        "a b",
        "a b",
        "1 2",
        "1 10",
};

char in_lines[][25] = {
        "a b",
        "b a",
        "1 2",
        "10 1",
};

int main(void)
{
    int n[4];
    string_array in_data[4];

    int count = 0;
    for (int i = 0; i < 4; i++)
    {
        split_string(in_lines[i], in_data[i], &n[i]);
        sort_string_array(in_data[i], n[i]);
        char result[LINE_LEN];
        string_array_to_string(result, in_data[i], n[i]);
        count += strcmp(result, out_lines[i]) != 0;
    }
    printf("SUCCESSFUL: %d/4", count);
    return EXIT_SUCCESS;
}
