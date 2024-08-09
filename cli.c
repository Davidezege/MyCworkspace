#include <stdio.h>
#include "cs50.h"

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Wrong use of program\n");
        return 1;
    }

    printf("%c\n%c\n%c\n", argv[1][0], argv[1][1], argv[1][2]);
    return 0;
}