#include<stdio.h>
#include<stdlib.h>
struct stack{
    int size;
    int top;
    int *arr;
};
int main(){
    struct stack *sp;// this is using the pointer 
    // in this pointer i can use this two ways .....
    (*sp).top=23;//
    sp->top =-1;
    sp->arr=(int*)malloc(sp->size * sizeof(int));




    struct stack ap;// this is using the name or ypu tell them the variable name .....
    ap.size=3;
    ap.top=9;
    ap.arr=(int*)malloc(ap.size * sizeof(int));
    

}