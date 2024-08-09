#include <stdio.h>
#include <string.h>
#include "cs50.h"

typedef struct
{
    string name;
    string number;

}
person;
    

int main(void)
{
    person people[5];

    people[0].name = "eze";
    people[0].number = "+234-913-222-6971";

    people[1].name = "kelechi";
    people[1].number = "+234-803-091-9667";

    people[2].name = "emmanuel";
    people[2].number = "+234-704-354-0277";

    people[3].name = "lawco";
    people[3].number = "+234-902-142-4366";

    people[4].name ="mummy";
    people[4].number = "+234-806-857-3036";

    string n = get_string("Enter name: ");
    for(int i = 0; i < 5; i++)
    {
        if (strcmp(n, people[i].name) == 0)
        {
            printf("Found\nPhonenumber of %s is : %s.\n", n, people[i].number);
            return 0;
        }
    }
    printf("Not Found\n");
    return 1;

}