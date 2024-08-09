#include <stdio.h>
#include "cs50.h"

int main (void)
{
    FILE *file = fopen("phonebook.csv", "r");

    if (file == NULL)
    {
        printf("Not succesfully opened");
        return 1;
    }
    
    string buffer;

    while(fgets(buffer, sizeof(buffer), file) != NULL) 
    {
        printf("%s", buffer);
    }

    fclose(file);

    file = fopen("write.txt", "w");

    fputs("Unya David Eze\n", file);
    fputs("Ewa Kelechi BigFish.\n", file);

    fclose(file);
}