#ifndef __STACK_H__
#define __STACK_H__
#include <stdlib.h>

typedef struct node{
        char data;
        struct node *next;
}STACK_NODE;

STACK_NODE *stack_push(STACK_NODE *stack, char c){
        STACK_NODE *buf = NULL;
        buf = (STACK_NODE*)malloc(sizeof(STACK_NODE)*1);
        buf->data = c;
        buf->next = stack;
        return buf;
}

STACK_NODE *stack_pop(STACK_NODE *stack, char *c){
        STACK_NODE *buf = NULL;
        *c = stack->data;
        buf = stack->next;
        free(stack);
        return buf;
}

#endif
