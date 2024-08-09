#include <stdio.h>
#include "cs50.h"

typedef struct 
{
    string name;
    int votes;
}
candidate;

candidate get_candidate();

int main(void)
{
    candidate president = get_candidate("Enter a Candidate: \n");
    printf("%s\n%i", president.name, president.votes);
}

candidate get_candidate(string prompt)
{
    printf("%s", prompt);

    candidate  c;
    c.name = get_string("Enter name: \n");
    c.votes = get_int("Enter votes: \n");

    return c;
}
