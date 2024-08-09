#include <stdio.h>
#include <stdlib.h>
#include "cs50.h"

typedef struct node
{
    string name;
    int age;
    struct node *next;
} node;

int main(void)
{
    //create initial list
    node *list = NULL;

    //get no of prompts
    int size = get_int("No of Prompts: ");

    //prepend linked list using temporary value
    for (int i = 0; i < size; i++)
    {
        node *tmpList = malloc(sizeof(node));
        if (tmpList == NULL)
        {
            return 1;
        }

        tmpList->name = get_string("Enter Name: ");
        tmpList->age = get_int("Enter age: ");

        tmpList->next = list;

        list = tmpList;
    }

    //print list
    for (node *i = list; i != NULL; i = i->next)
    {
        printf("%s, %i\n", i->name, i->age);
    }

    node *i = list;
    while (i != NULL)
    {
        node *tmpfree = i->next;
        free(i);
        i = tmpfree;
    }
}
