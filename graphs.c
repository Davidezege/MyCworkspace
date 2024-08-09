#include <stdio.h>
#include "cs50.h"
#include <stdlib.h>

#define MAX_VERTICES 100

typedef struct Node {
    int data;
    struct Node *next;
}
Node;

typedef struct Graph {
    Node *adjacency_array[MAX_VERTICES];
}
Graph;

Node* create_node();

int main(void)
{
    Node *first_node = NULL;
    Node *create_node(int data)
    {
        Node *newNode = malloc(sizeof(Node));
        newNode->data = data;
        newNode->next = first_node;
        
    }
}
