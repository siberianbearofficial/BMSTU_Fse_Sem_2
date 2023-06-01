#include "main.h"

int main(int argc, char **argv)
{
    int exit_code = EXIT_FAILURE;
    if (argc == 3)
    {
        FILE *fin = fopen(argv[1], "r");
        FILE *fout = fopen(argv[2], "w");
        if (fin && fout)
            exit_code = read_file(fin, fout);
    }
    return exit_code;
}
