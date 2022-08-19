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
        int node_amonunt;
}LINKLIST;

LINKLIST *linklist_new(){

}
//malloc new LINKLIST
//set head, tail to NULL
//set node_count to 0
//return new LINKLIST

void linklist_append(LINKLIST *list, char p){

}

void linklist_prepend(LINKLIST *list, char p){

}

#endif
