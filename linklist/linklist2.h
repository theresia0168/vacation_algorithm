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

void linklist_insert(LINKLIST *list, int n, char p){
        NODE *train = NULL;
        train = list->head;
        for(int i = 1; i < n; i++){
                train = train->next;
        }

        NODE *buf = NULL;
        buf = (NODE*)malloc(sizeof(NODE)*1);
        buf->c = p;
        buf->next = train->next;
        train->next = buf;
        list->node_amount++;
}

void linklist_remove(LINKLIST *list, int index){
        NODE *buf = NULL;
        NODE *train = NULL;
        if((index < 0)||(index > list->node_amount)){   // do nothing
                printf("DO NOTHING\n\n");
        }
        else if(index == 0){                            // remove head
                buf = (list->head)->next;
                free(list->head);
                list->head = buf;
                list->node_amount--;
                printf("HEAD REMOVED\n\n");
        }
        else if(index == list->node_amount){    // remove tail
                train = list->head;
                free(list->tail);
                for(int i = 1; i < index; i++)
                        train = train->next;
                train = list->tail;
                list->node_amount--;
                printf("TAIL REMOVED\n\n");
        }
        else{
                train = list->head;
                for(int i = 1; i < index; i++)
                        train = train->next;
                buf = (train->next)->next;
                free(train->next);
                train->next = buf;
                list->node_amount--;
                printf("NODE NO.%d REMOVED\n\n", index);
        }
}
/*      두 연결리스트 값의 위치를 바꾸는 함수
void linklist_swap(LINKLIST *list, int index1, int index2){
        NODE *first = NULL;
        NODE *second = NULL;
        first = list->head;
        second = second->head;
        for(int i = 1; i < index - 1; i++)
                first = first->next;
        for(int i = 1; i < index - 1; i++)
                second = second->next;
        NODE *buf = NULL;
        buf = first->next;
        first->next = second->next;
        
}
*/
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
