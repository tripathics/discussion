#include <stdio.h>
#include <stdlib.h>

// element of linked list
typedef struct node
{
    int num;
    struct node* next;
}
node;

int main(void)
{
    node *a = NULL;

    node *temp = malloc(sizeof(node));
    if (temp == NULL)
    {
        return 1;
    }

    // entering data
    temp->num = 1;
    temp->next = NULL;

    // linking this new node to the starting element
    a = temp;

    temp = malloc(sizeof(node));
    if (temp == NULL)
    {
        free(a);
        return 1;
    }

    // entering data
    temp->num = 2;
    temp->next = NULL;

    // linking this new node to the starting element
    a->next = temp;

    temp = malloc(sizeof(node));
    if (temp == NULL)
    {
        free(a->next);
        free(a);
        return 1;
    }

    // entering data
    temp->num = 3;
    temp->next = NULL;

    // linking this new node to the starting element
    a->next->next = temp;

    for (node *tmp = a; tmp != NULL ; tmp = tmp->next)
    {
        printf("%i\n", tmp->num);
    }

    // freeing up DMA memory
    while(a != NULL)
    {
        node *tmp = a->next;
        free(a);
        
        a = tmp;
    }

    return 0;
}