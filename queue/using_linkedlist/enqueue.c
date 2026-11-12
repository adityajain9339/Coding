#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node * enqueue(struct node *head, int data){
    if(head == NULL){
        printf("the linked list is not there!!..");
        return  ;
    }
    else{
        struct node *newnode = (struct node)malloc(sizeof(struct node));
        newnode->data= data;
        newnode->next = head;
        head = newnode;
        return head;
    }
}
int main(){

}