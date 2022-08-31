#ifndef __QUEUE_H__
#define __QUEUE_H__
#include <stdlib.h>

typedef struct queue{
        char value;
        struct queue *next;
}QUEUE_NODE;

typedef struct node{
        QUEUE_NODE *head;
        QUEUE_NODE *tail;
}QUEUE;

QUEUE *queue_new(){
        QUEUE *buf = NULL;
        buf = (QUEUE*)malloc(sizeof(QUEUE)*1);
        return buf;
}

void queue_enq(QUEUE *que, char c){
        QUEUE_NODE *buf = NULL;
        buf = (QUEUE_NODE*)malloc(sizeof(QUEUE_NODE)*1);
        buf->value = c;
        if(que->head == NULL){
                que->head = buf;
                que->tail = buf;
        }
        else{
                (que->tail)->next = buf;
                que->tail = buf;
        }
}

void queue_deq(QUEUE *que, char *c){
        QUEUE_NODE *buf = NULL;
        buf = que->head;
        *c = buf->value;
        que->head = buf->next;
        free(buf);
}

#endif
