#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
struct node
{
    int data;
    struct node *next;
};
struct node *creatinglinkedlist(int no_node)
{
    struct node *head = NULL;
    struct node *temp = NULL;
    for (int i = 1; i <= no_node; i++)
    {
        int data;
        struct node *newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the data in the node %d : ", i);
        scanf("%d", &data);
        if (newnode == NULL)
        {
            printf("Memory allocation failed\n");
            return head;
        }
        newnode->data = data;
        newnode->next = NULL;
        if (head == NULL)
        {
            head = newnode;
        }
        else
        {
            temp->next = newnode;
        }

        temp = newnode;
    }
    return head;
}
void linkedlistfree(struct node *head)
{
}

int main()
{
    int numberNode;
    printf("enter the number of node that you want to add ");
    scanf("%d", &numberNode);
    if (numberNode > 0)
    {
        struct node *head = creatinglinkedlist(numberNode);
        printf("%p", (void *)head);
    } else {
        printf("value is not negetive so the function is not call!!!");
    }
    

    return 0;
}