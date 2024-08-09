#include <stdio.h>
#include <string.h>
#include "cs50.h"

int main(void)
{
    string a;
    int length;
    do
    {
    a = get_string("What is your name? ");
    length = strlen(a);
    }
    while (length < 2);

    for(int i = 0; i < length; i++)
    {
        printf("%c ", a[i]);
        printf("%i\n", a[i]);
    }
}