#include<stdio.h>
#include<stdlib.h>
struct node{
    int data ;
    struct node *next;
};
int main(){
    struct node *newnode1 = (struct node*)malloc(sizeof(struct node));
    struct node *newnode2 = (struct node*)malloc(sizeof(struct node));
    int data1,data2;    
    printf("enter the data for first node: ");
    scanf("%d",&data1);
    newnode1->data = data1;
    newnode1->next = newnode2;
    printf("enter the data for second node: ");
    scanf("%d",&data2);
    newnode2->data = data2; 
    newnode2 ->next= NULL;
    printf("you are entering the data %d and %d",newnode1->data,newnode2->data);
    free(newnode1); 
    free(newnode2);
    return 0;
}
