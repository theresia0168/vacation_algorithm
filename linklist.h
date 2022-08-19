#ifndef __LINKLIST_H__
#define __LINKLIST_H__
#include <stdio.h>
#include <stdlib.h>

typedef struct node{
        char value;
        struct node *next;
}NODE;

NODE *node_new(char p){
        NODE *buf = NULL;
        buf = (NODE*)malloc(sizeof(NODE)*1);
        if(buf==NULL)
                return NULL;
        buf->value = p;
        buf->next = NULL;
        return buf;
}

NODE *node_prepend(NODE *n, char p){
        NODE *buf = NULL;
        buf = node_new(p);
        buf->next = n;
        return buf;
}

NODE *node_append(NODE *n, char p){
        NODE *buf = NULL;
        buf = (NODE*)malloc(sizeof(NODE)*1);
        buf->value = p;
        while(n->next!=NULL){
                n = n->next;
        }
        n->next = buf;
        return buf;
}

NODE *node_append2(NODE *n, char p){
        NODE *buf = NULL;
        buf = node_new(p);
        n->next = buf;
        return buf;
}

void node_print(NODE *n){
        printf("Node value is \'%c\'\n", n->value);
}

void node_print_link(NODE *n){
        NODE *next1 = n;
        while(1){
                printf("%c",next1->value);
                if(next1->next!=NULL)
                        printf(" - ");
                else
                        break;
                next1 = next1->next;
        }
        printf("\n");
}

void node_free(NODE *n){
        free(n);
}

#endif
