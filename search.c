#include <stdio.h>
#include "cs50.h"
#include <string.h>

int numbers();
int strings();

int main(void)
{
    numbers();
    strings();
}

int numbers()
{
    int array[] = {30, 40, 20, 90, 50, 60};

    int n = get_int("Number: ");
    for(int i = 0; i < 6; i++)
    {
        if(array[i] == n)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not Found\n");
    return 1;
}

int strings()
{
    string words[] = {"hammer", "shovel", "spanner", "pickaxe", "screw", "plier"};
    
    string w = get_string("Enter Word: ");
    for(int i = 0; i < 6; i++)
    {
        if(strlen(words[i]) == strlen(w))
        {
            printf("Found.\n");
            return 0;
        }
    }
    printf("Not Found\n");
    return 1;
}