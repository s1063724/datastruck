//
// Created by 10305 on 2020/2/10.
//

#include <stdio.h>
#include "../stack.h"

int main(){
    Stack* stk = stack_init(3);//初始stack容量
    push(stk,ccc);
    push(stk, 6);
    push(stk, 4);
//    if(!push(stk, 3)){
//        puts("error");
//    }
    for(int i=0;i<stk->capacity;i++){
        printf("%d\n",stk->arr[i]);
    }
    if(stk->capacity==-1){
        return EmptyStack(stk);
    }
    if(stk->top==stk->capacity-1){
        return FullStack(stk);
    }
//    int i;
//    pop (stk, &i);

//    printf("%d", i);

//    return 0;
}
/*
int main(){
    Stack* stk = stack_init(3);//初始stack容量
    push(stk,5) ;//堆5
    push(stk, 6);
    push(stk, 4);
//    if(!push(stk, 3)){
//        puts("error");
//    }
    for(int i=0;i<stk->capacity;i++){
        printf("%d\n",stk->arr[i]);
    }
    if(stk->capacity==-1){
        return EmptyStack(stk);
    }
    if(stk->top==stk->capacity-1){
        return FullStack(stk);
    }
//    int i;
//    pop (stk, &i);

//    printf("%d", i);

//    return 0;
}
*/