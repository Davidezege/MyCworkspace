#include <stdio.h>
#include "cs50.h"

int main(void)
{
    int size;
    do
    {
        size = get_int("Enter size of Numbers: ");
    } while (size < 1);

    int array[size];

    for (int i = 0; i < size; i++)
    {
        array[i] = get_int("Enter array[%i]: ", i);
    }

    int max_no = 0;
    for (int i = 0; i < size; i++)
    {
        if (i + 1 < size)
        {
            if (array[i] > array[i + 1])
            {
                max_no = array[i];
            }
        }
        
    }
    printf("The max number is: %i", max_no);
}

// long sort(long array[])
// {
//     int size = sizeof(array);

//     for (int i = 0; i < sizeof(array); i++)
//     {
//         for(int j = 0; j < size; j++)
//         {
//             int max_no = 0;

//             if (array[j] > array[j + 1])
//             {
//                 max_no = array[j];
//             }
//             size--;
            
//         }
//     }
    
// }
