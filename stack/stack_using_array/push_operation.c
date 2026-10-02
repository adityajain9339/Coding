#include<stdio.h>
#include<stdlib.h>
struct stack{
    int size;
    int top;
    int *arr;
};
void push(struct stack *sp, int value){
    if(sp->top== sp->size-1){
        printf("stack is overflow!!");
        return;
    }
    else{
        sp->top++;
        sp->arr[sp->top]= value;
        printf("your %d is enter ", value);
    }
}
int main(){
    struct stack *sp;
    sp->top =-1;
    sp->size= 4;
    sp->arr=(int*)malloc(sp->size * sizeof(int));
    push(sp, 23);
    push(sp, 7);

    push(sp, 1);
    push(sp, 45);
    push(sp, 23);




}
