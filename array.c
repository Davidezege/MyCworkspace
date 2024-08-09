#include "cs50.h"
#include <stdio.h>

int main()
{
    //prompt user for array length.
    int length;

    do
    {
        length = get_int("Enter Length: ");
    }
    while (length < 1);

    int array[length];

    int i = 0;
    array[i] = 1;

    while(i < length)
    {
        printf("%i\n", array[i]);
        i++;
        while(i < length)
        {
            array[i] = array[i-1]*2;
            printf("%i\n", array[i]);
            i++;
        }
    }
    
}