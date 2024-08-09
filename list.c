#include <stdio.h>
#include <stdlib.h>
#include "cs50.h"

typedef struct node
{
    int age;
    struct node *next;
}
node;

int main(void)
{
    node *list = NULL;
    
    int size = get_int("No of Prompt: ");

    for (int i = 0; i < size; i++)
    {
        node *n = malloc(sizeof(node));
        if (n == NULL)
        {
            return 1;
        }

        n->age = get_int("Enter age: ");
        n->next = list;
        list = n;
    }

    node *ptr = list;
    while (ptr != NULL)
    {
        printf("%i\n", ptr->age);
        ptr = ptr->next;
    }
    

}







































































int myList(void)
{
    int *list = malloc(4 * sizeof(int));
    if (list == NULL)
    {
        printf("something went wrong.");
        return 1;
    }
    
    list[0] = 5;
    list[1] = 10;
    list[2] = 15;
    list[3] = 20;

    for (int i = 0; i < 4; i++)
    {
        printf("%i\n", list[i]);
    }

    int *tmp = realloc(list, 6 * sizeof(int));
    if (tmp == NULL)
    {
        free(list);
        return 1;
    }

    list = tmp;
    list[4] = 25;
    list[5] = 30;

    for (int i = 0; i < 6; i++)
    {
        printf("%i\n", list[i]);
    }
    free(list);
}