#include "cs50.h"
#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>

int binary_search(int start, int end, int mid, int array[]);

int main(void)
{   
    // int list[] = {0, 2, 3, 5, 9, 14, 21, 134, 235, 894, 1024, 2048, 8192, 16384};

    int user_num = 0;
    do
    {
        user_num = get_int("Enter number of prompts: ");
    } while (user_num <= 0);

    int list[user_num];

    for (int i = 0; i < user_num; i++)
    {
        list[i] = get_int("Enter the number: ");
    }

    int user_choice = get_int("Enter your choice: ");
    
    
    binary_search(0, user_num - 1, user_choice, list);
    return 0;
}

int binary_search(int start, int end, int d_array, int array[])
{
    int mid = (start + end) / 2;
    
    if(start > end)
    {
        printf("Not Found\n");
        return -1;
    }
    
    else if(array[mid] == d_array)
    {
        printf("found\n");
        return 0;
    }
    
    else if(array[mid] > d_array)
    {
        binary_search(start, mid - 1, d_array, array);
    }
    
    else if (array[mid] < d_array)
    {
        binary_search(mid + 1, end, d_array, array);
    }
}

// int main(void)
// {
//     string word = "AZ";
//     string word2 = "az";

//     int b = atoi(word);

//     printf("%i\n", b);
//     printf("%i \n%i \n%i \n%i \n", word[0], word[1], word2[0], word2[1]);
// }