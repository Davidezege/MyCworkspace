#include <stdio.h>
#include "cs50.h"

void draw1();

int main(void)
{
    int num;
    do
    {
        num = get_int("No of Bricks: ");
    } while (num < 1);
    draw1(num);
}

void draw(int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < i + 1; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}

void draw1(int no)
{
    if(no <= 0)
    {
        return;
    }

    draw1(no - 1);

    for(int i = 0; i < no; i++)
    {
        printf("#");
    }
    printf("\n");
}