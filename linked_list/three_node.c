#include<stdio.h>
#include<stdlib.h>
struct node{
    int data ;
    struct node *next;
};
struct node* instionatfirst(struct node *head, int data )
{
    
};

void main (){
    struct node *newnode1 = (struct node *) malloc(sizeof(struct node));
    struct node *newnode2 = (struct node *) malloc(sizeof(struct node));
    struct node *newnode3 = (struct node *) malloc(sizeof(struct node));
    newnode1->data =10;
    newnode2->data =20;
    newnode3->data =30;
    newnode1->next=newnode2;
    newnode2->next=newnode3;
    newnode3->next=NULL;

    struct node *temp = newnode1;

while(temp != NULL)
{
    printf("%d ", temp->data);
    temp = temp->next;
}
free(newnode1);
free(newnode2);
free(newnode3);


    
}