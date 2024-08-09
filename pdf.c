#include <stdio.h>
#include <stdint.h>
#include "cs50.h"

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Wrong use of the Program!");
        return 1;
    }

    // open new file.
    string filename = argv[1];
    FILE *pdf = fopen(filename, "r");

    //check if pdf exists
    if (pdf == NULL)
    {
        printf("File not found");
        return 1;
    }

    uint8_t buffer[4];
    fread(buffer, 1, 4, pdf);

    int signature[] = {37, 80, 68, 70};
    for (int i = 0; i < 4; i++)
    {
        if (buffer[i] != signature[i])
        {
            printf("Likely not a pdf.");
            return 0;
            fclose(pdf);
        }
    }
    printf("Likely a pdf!");
    fclose(pdf);
}
