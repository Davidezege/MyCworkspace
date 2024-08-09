#include <stdio.h>
#include "cs50.h"

int get_size();
int print_grid();

int main(void)
{
    get_size();
    print_grid();
}



int size;

int get_size()
{
    //get size of grid
    do
    {
        size = get_int("Size: ");
    }
    while(size<1);
}

int print_grid()
{
    //print grid with #
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
