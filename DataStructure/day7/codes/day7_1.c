#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

typedef struct stack
{
    int arr[SIZE];
    int top;
}stack;

void init_stack(stack *ps);
void push(stack *ps,int data);
void pop(stack *ps);
int peek(stack *ps);
int stack_full(stack *ps);
int stack_empty(stack *ps);


int main()
{
    stack s;
    init_stack(&s);
    int choice,data;
do{
    printf("Enter your choice :\n");
    printf("0.Exit\n1.Push\n2.Pop\n3.Peek: ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 0 : exit(0);
        case 1: // push
                if(stack_full(&s))
                    printf("Stack is Full !\n");
                else
                {
                    printf("Enter the data to push :");
                    scanf("%d",&data);
                    push(&s,data);
                    printf("Element inserted = %d\n",data);
                }
                break;
        case 2 : // pop
                if(stack_empty(&s))
                    printf("Stack is Empty !\n");
                else
                {
                    int ele = peek(&s);
                    pop(&s);
                    printf("Element popped = %d\n",ele);
                }
                break;
        case 3: // peek
                if(stack_empty(&s))
                    printf("Stack empty ! Peek not possible !\n");
                else{
                    int data = peek(&s);
                    printf("Topmost element = %d\n",data);
                }
                break;
        default :
                printf("Enter the valid choice !\n");

    } // end of switch
}while(choice != 0);
    return 0;
}

void init_stack(stack *ps)
{
    ps->top = -1;
}

void push(stack *ps,int data)
{
    // increment the top
    ps->top++;
    // insert the element at the top position
    ps->arr[ps->top] = data;
}

void pop(stack *ps)
{
    ps->arr[ps->top] = 0;
    ps->top--;
}

int peek(stack *ps)
{
    return ps->arr[ps->top];
}

int stack_full(stack *ps)
{
    if(ps->top == SIZE-1) // stack full
        return 1;
    else
        return 0; // stack not full
}

int stack_empty(stack *ps)
{
    if(ps->top == -1)
        return 1; // stack empty
    else
        return 0; // stack not empty
}