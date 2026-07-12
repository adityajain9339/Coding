#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    struct Node *newNode;
    int data;
    newNode = (struct Node *)malloc(sizeof(struct Node));
    printf("enter the data: ");
    scanf("%d", &data);
    newNode->data = data;
    newNode->next = NULL;
    printf("you are entering the data %d", newNode->data);
    free(newNode);
    return 0;
}