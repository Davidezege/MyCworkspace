#include <stdio.h>
#include "cs50.h"

int main(void)
{
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < (i + height + 2); j++)
        {
            if (j < height)
            {
                if (i + j < (height - 1))
                {
                    printf(" ");
                }
                else
                {
                    printf("#");
                }
            }

            else if (j == height)
            {
                printf("  ");
            }

            else
            {
                printf("#");
            }
        }
        printf("\n");
    }
}