#ifndef __LINKLIST2_H__
#define __LINKLIST2_H__
#include <stdio.h>
#include <stdlib.h>

typedef struct node{
        char c;
        struct node *next;
}NODE;

typedef struct linkledlist{
        NODE *head;
        NODE *tail;
        int node_amount;
}LINKLIST;

LINKLIST *linklist_new(){
        LINKLIST *n = NULL;
        n = (LINKLIST*)malloc(sizeof(LINKLIST)*1);
        n->node_amount = 0;
        return n;
}

void linklist_append(LINKLIST *list, char p){
        NODE *buf = NULL;
        buf = (NODE*)malloc(sizeof(NODE)*1);
        buf->c = p;
        if(list->tail != NULL){
                list->tail->next = buf;
        }
        if((list->head)==NULL)
                list->head = buf;
        list->tail = buf;
        list->node_amount++;
}

void linklist_append(LINKLIST *list, char p){
        NODE *buf = NULL;
        buf = (NODE*)malloc(sizeof(NODE)*1);
        buf->c = p;
        if(list->tail != NULL){
                list->tail->next = buf;
        }
        if((list->head)==NULL)
                list->head = buf;
        list->tail = buf;
        list->node_amount++;
}

void linklist_prepend(LINKLIST *list, char p){
        NODE *buf = NULL;
        buf = (NODE*)malloc(sizeof(NODE)*1);
        buf->c = p;
        buf->next = list->head;
        if((list->tail)==NULL)
                list->tail = buf;
        list->head = buf;
        list->node_amount++;
}

void linklist_print(LINKLIST *list){
        int na = list->node_amount;
        NODE *train = list->head;
        printf("LINKLIST STARTED - ");
        for(int i = 0; i < na; i++){
                printf("%c - ", train->c);
                if(i == na - 1)
                        printf("LINKLIST ENDED\n");
                train = train->next;
        }
        printf("Amount of Node is %d\n", list->node_amount);
}

void linklist_delete(LINKLIST *list){
        free(list);
}

#endif
