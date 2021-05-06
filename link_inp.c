#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node
{
    int num;
    struct node *next;
}
node;

// for counting how many elements we have added till now
unsigned int count = 0;

void free_list(node *list);

int main(void)
{
    // list
    node *list = NULL;

    // new elements
    char ch[3] = "Yes";
    while (strcasecmp(ch, "yes") == 0 || strcasecmp(ch, "y") == 0)
    {
        // new node for storing new data
        node *new = malloc(sizeof(node));

        if (new == NULL)
        {
            // freeing list
            free_list(list);
            return 1;
        }

        printf("New number: ");
        scanf("%i", &new->num);

        new->next = NULL;

        // adding this element to list
        for (node *last = list; 1; last = last->next)
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

        printf("Continue? (Y/N): ");
        scanf("%s", ch);
    }

    // printing the list
    for (node *tmp = list; tmp != NULL; tmp = tmp->next)
    {
        printf("%i\n", tmp->num);
    }

    free_list(list);
}

void free_list(node *list)
{
    if (list == NULL)
    {
        return;
    }
    else
    {
        while (list != NULL)
        {
            node *temp = list->next;
            free(list);
            list = temp;
        }
    }
}