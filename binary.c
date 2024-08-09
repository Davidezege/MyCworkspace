#include <stdio.h>
#include "cs50.h"
#include <stdlib.h>

int main(void)
{
    int array[] = {2, 5, 6, 7, 8, 10, 16, 19, 23, 25, 27, 30, 41, 43, 45};
}

int binary_search(int sorted_arr[], int desired_num, int start, int end)
{
    int mid = (start + end)/2;
    int very_end = end;

    if(mid == start || end)
    {
        return 1;
    }

    if(desired_num == mid)
    {
        return mid;
    }

    else if (desired_num < mid)
    {
        end = mid;
    }

    else
    {
        start = mid;
    }

    binary_search(sorted_arr[very_end], desired_num, start, end);
}