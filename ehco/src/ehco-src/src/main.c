#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
    if (argc == 1)
    {
        printf("enter something bro\n");
        return 1;
    }
    char *arr = "";
    for (int i = 1; i < argc; i++)
    {
        printf("%s", strfry(argv[i]));
        if (argc - 1 != i)
        {
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}