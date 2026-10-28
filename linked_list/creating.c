#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *creatingLinkedList(int no_node)
{
    if (no_node == 0)
    {
        printf("please enter the valid number of node!!!...");
        return;
    }
    else
    {
        struct node *head = NULL; 
        struct node *temp = NULL;
        for (int i = 1; i < no_node; i++)
        {
            struct node *newnode = (struct node *)malloc(sizeof(struct node));
            if (newnode == NULL)
            {
                printf("memory is full sorry!!!!....");
                return;
            }
            int data;
            printf("enter the data : ");
            scanf("%d", &data);
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
}


int main()
{
}