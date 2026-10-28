#include<stdio.h>
#include <stdlib.h>
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
struct node *InsertionBeganning(struct node *head ,int data){
    
    if(head == NULL){
        printf("linklist is not craeted so created that !!!....");
        return;
    }

    struct node *temp = head;
    struct node *newnode= (struct node *)malloc(sizeof(struct node));
    newnode->data= data;
    newnode->next = head;
    head = newnode;
}