//
// Created by 10305 on 2020/2/10.
//

#ifndef DATASTRUCK_STACK_H
#define DATASTRUCK_STACK_H
typedef struct stack{
    int top;
    int capacity;
    int *arr;
}Stack;

struct ANYTYPE
{
    enum {
        typUndefined,
        typInt,           // 1
        typUint,
        typString,
        typByteString,
        typLong,          // 5
        typFloat,
        typDouble,
    } iType;


    void *val;
};

Stack* stack_init(int capacity);
static void push(Stack* stack, int val);
static void pop(Stack* stack, int* element);
int EmptyStack(Stack* stack);
int FullStack(Stack* stack);
/*
Stack* stack_init(int capacity);
int push(Stack* stack, int val);
int pop(Stack* stack, int* element);
int EmptyStack(Stack* stack);
int FullStack(Stack* stack);
*/
#endif //DATASTRUCK_STACK_H
