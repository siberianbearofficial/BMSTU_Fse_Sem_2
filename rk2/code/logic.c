#include "logic.h"

int full_line(const char *);

int input_line(FILE *f, char *str);

int output_line(FILE *f, char *str);

int full_line(const char *str)
{
    char exit_code = EXIT_FAILURE;
    if (str && *str)
    {
        int i = strlen(str);
        exit_code = i < 1 || str[i - 1] != '\n';
    }
    return exit_code;
}

int input_line(FILE *f, char *str)
{
    return !fgets(str, LINE_LEN, f) || full_line(str);
}

int output_line(FILE *f, char *str)
{
    return !fputs(str, f);
}

int read_file(FILE *fin, FILE *fout)
{
    int exit_code = EMPTY_FILE;
    char line[LINE_LEN];
    while (!input_line(fin, line))
    {
        string_array words;
        int n;
        if (!(exit_code = split_string(line, words, &n)))
        {
            sort_string_array(words, n);
            string_array_to_string(line, words, n);
            output_line(fout, line);
        }
    }
    return exit_code;
}
