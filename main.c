#include <stdio.h>
#include <stdlib.h>
#include "linklist.h"

int main(int argc, char *argv[]){

        NODE *n1;

        n1 = node_new('a');

        int link;
        char value;
/*
        printf("How many link will you make? ");
        scanf("%d", &link);
        for(int i = 0; i < link; i++){
                printf("Type the node value : ");
                scanf("%c", &value);
                node_append(n1, value);
        }
*/ 
        node_append(n1, 'b');
        node_append(n1, 'c');

        node_print(n1); // node value : a

        node_print_link(n1); // a - b

        node_free(n1);

        return 0;
}
