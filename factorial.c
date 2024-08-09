#include <stdio.h>
#include "cs50.h"

int factorial(int no);

int main(void)
{
    int n = get_int("Enter no: ");
    factorial(n);
    printf("%i", factorial(n));

}

int factorial(int no)
{
    if(no == 1)
    {
        return 1;
    }

    return no * factorial(no - 1);
}