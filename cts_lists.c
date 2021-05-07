#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <strings.h>

typedef struct node
{
    char *word;
    struct node *next;
}
node;

size_t count = 0;

void free_list(node *list);

int main(void)
{
    // list
    node *list = NULL;

    char *go = "yes";

    while (strcasecmp(go, "yes") == 0 || strcasecmp(go, "y") == 0)
    {
        // new element
        node *new = malloc(sizeof(node));
        if (new == NULL)
        {
            free_list(list);
            return 1;
        }

        // getting input into this new element
        new->word = get_string("Word: ");
        new->next = NULL;

        // adding this new element to end of the list
        for (node *last = list; true; last = last->next)
        {
            if (count == 0)
            {
                list = new;
                count++;
                break;
            }
            else if (last->next == NULL)
            {
                last->next = new;
                count++;
                break;
            }
        }

        // asking to go
        go = get_string("Want to add more? (Y/n): ");
    }

    // Printing the linked list
    printf("\n===========\n");
    for (node *temp = list; temp != NULL; temp = temp->next)
    {
        printf("%s\n", temp->word);
    }
    printf("===========\n");

    // Freeing the list from memory
    free_list(list);
    
    return 0;
}

void free_list(node *list)
{
    while (list != NULL)
    {
        node *temp = list->next;
        free(list);
        list = temp;
    }

    return;
}