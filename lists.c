#include "cs50.h"
#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    char* president;
    int votes;
    struct node* next;
}
node;

int main (void)
{
    int size = get_int("Enter no of prompts: ");

    node *list = NULL;
    for (int i = 0; i < size; i++)
    {
        node *tmp = malloc(sizeof(node));
        tmp->president = get_string("Enter name of president: ");
        tmp->votes = get_int("Enter votes: ");

        tmp->next = list;
        list = tmp;
    }

    for (node *i = list; i != NULL; i = i->next)
    {
        if (i->next != NULL)
        {
            printf("%s has %i votes, \n WHILE \n", i->president, i->votes);
        }

        else
        {
            printf("%s has %i votes. \n", i->president, i->votes);
        }
    }

    node *i = list; 
    while (i != NULL)
    {
        node *tmpfree = i->next;
        free(i);
        i = tmpfree;
    }
}
