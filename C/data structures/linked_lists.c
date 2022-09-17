#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//Linked list data type declaration
typedef struct node
{
    int number;
    struct node *next;
} node;

int main(void)
{
    //a linked list
    node *list;
    node *n = malloc(sizeof(node));
    if (n == NULL)
    {
        return 1;
    }
    n->number = 1;
    n->next = NULL;

    //Update list to point to a new node
    list = n;

    //for loop for assigning lilnked list
    node *tmp = NULL;
    node *temp = NULL;
    for(int i = 0; i < 5 ; temp = tmp, tmp = tmp->next, i++)
    {
        n = malloc(sizeof(node));
        if (n == NULL)
        {
            return 1;
        }
        n->number = i * 9;
        n->next = NULL;
        tmp = n;
        if (i == 0)
        {
            list->next = tmp;
        }
        else
        {
            temp->next = tmp;
        }
    }


    //Print numbers
    for (tmp = list;tmp != NULL; tmp = tmp->next)
    {
        printf("\n%i\n", tmp->number);
    }

    //free all members of a linked list
    while(list != NULL)
    {
        tmp = list->next;
        free(list);
        list = tmp;
    }
    return 0;
}
