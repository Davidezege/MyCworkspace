#include <stdio.h>
#include "cs50.h"

void primeNo();

int main(void)
{
    int prime1, prime2;
    do
    {
        prime1 = get_int("Enter first no: ");
    }   while (prime1 < 2);

    do
    {
        prime2 = get_int("Enter second no: ");
    }   while (prime2 < prime1);

    primeNo(prime1, prime2);
}

void primeNo(int prime1, int prime2)
{
    int diff = prime2 - prime1;
    diff++;

    for(int i = 0; i < diff; i++)
    {
        int count = prime1 - 2;
        int divisor = 2;
        bool isPrimeNum = true;
        for (int j = 0; j < count; j++)
        {
            int division = prime1 % divisor;
            if (division == 0)
            {
                isPrimeNum = false;
                break;
            }
            divisor++;
        }

        if (isPrimeNum == true)
        {
            printf("%i ", prime1);
        }
        prime1++;
    }
}

// void primeNo(int p1, int p2)
// {
//     if (p1 == 2)
//     {
//         printf("%i  ", p1);
//         p1++;
//     }
//     int diff = p2 - p1;

//     for (int i = 0; i < diff; i++)
//     {
//         for (int j = 3; j <= p1; j++)
//         {
//             int rem = p1 % j;
//             if(j == p1)
//             {
//                 printf("%i  ", p1);
//                 break;
//             }

//             else if(rem == 0)
//             {
//                 break;
//             }
//         }
//         p1++;
//         if (p1 > p2)
//         {
//             break;
//         }
//     }
// }