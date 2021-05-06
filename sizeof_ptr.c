#include <stdio.h>

typedef struct node
{
    int num;
    struct node* next;
}
node;

int main(void)
{
    printf("%zu %zu\n", sizeof(int), sizeof(node *));
}

