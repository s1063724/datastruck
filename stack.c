#include <stdio.h>
#include <stdlib.h>
#include "stack.h"


//stack represent stack
Stack* stack_init(int capacity){
    Stack* stk = (Stack*)malloc(sizeof(Stack));
    stk->top = -1;
    stk->capacity = capacity;
    stk->arr=(int*)malloc(capacity*sizeof(int));
    return stk;
};
static void push(Stack* stack, int val){
    if(stack->top == stack->capacity-1){
        return;
    }
    stack->arr[++stack-> top]=val;
    return;
};
static void pop(Stack* stack, int* element){
    if(stack->top == -1){
        return;
    }
    *(element) = stack->arr[stack->top--];
    return;
};
int EmptyStack(Stack* stack){
    if(stack->top==-1){
        puts("the stack is empty");
    }
};
int FullStack(Stack* stack){
    if(stack->top==stack-> capacity-1){
        puts("the stack is full");
    }
};
/*
int push(Stack* stack, int val){
    if(stack->top == stack->capacity-1){
        return 0;
    }
    stack->arr[++stack-> top]=val;
    return 1;
};
int pop(Stack* stack, int* element){
    if(stack->top == -1){
        return 0;
    }
    *(element) = stack->arr[stack->top--];
    return 1;
};
int EmptyStack(Stack* stack){
    if(stack->top==-1){
        puts("the stack is empty");
    }
};
int FullStack(Stack* stack){
    if(stack->top==stack-> capacity-1){
        puts("the stack is full");
    }
};*/