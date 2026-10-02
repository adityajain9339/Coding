#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
};
void push(struct stack *sp, int value)
{
    if (sp->top == sp->size - 1)
    {
        printf("stack is overflow!!");
        return;
    }
    else
    {
        sp->top++;
        sp->arr[sp->top] = value;
        printf("your %d is enter \n ", value);
    }
}
int pop(struct stack *sp)
{
    if (sp->top == -1)
    {
        printf("the stack is underflow!!..\n");
        return -1;
    }
    else
    {
        int val = sp->arr[sp->top];
        sp->top--;
        return val;
    }
}
int main()
{
    struct stack *sp;
    sp->top = -1;
    sp->size = 4;
    sp->arr = (int *)malloc(sp->size * sizeof(int));
    push(sp, 23);
    push(sp, 7);

    push(sp, 1);
    push(sp, 45);

    int a = pop(sp);
    printf("the pop element is %d\n", a);
    a = pop(sp);
    printf("the pop element is %d\n", a);
    a = pop(sp);
    printf("the pop element is %d\n", a);
}
