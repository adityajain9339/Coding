//APPROACH -01:
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *CreatingLinkedLIST(int data)
{
    struct node *newnode = malloc(sizeof(struct node));

    if (newnode == NULL)
    {
        printf("Memory allocation failed!\n");
        exit(EXIT_FAILURE);
    }

    newnode->data = data;
    newnode->next = NULL;

    return newnode;
}
void TraversalLinkedLIST(struct node *head)
{
    struct node *temp = head;

    while (temp != NULL)
    {
        printf("%d", temp->data);

        if (temp->next != NULL)
        {
            printf(" -> ");
        }

        temp = temp->next;
    }

    printf("\n");
}
int main(){
    struct node *p =CreatingLinkedLIST(3);
    struct node *p1 =CreatingLinkedLIST(7); 
    struct node *p2 =CreatingLinkedLIST(4);
    p->next=p1;
    p1->next= p2;
    TraversalLinkedLIST(p);


}

