#include <stdio.h>
#include "stack.h"

int main(int argc, char *argv[]){

        STACK_NODE *head = NULL;
        char c;

        head = stack_push(head, 'a');
        head = stack_push(head, 'b');
        head = stack_push(head, 'c');

        head = stack_pop(head, &c);
        printf("%c ", c);

        head = stack_pop(head, &c);
        printf("%c ", c);

        head = stack_pop(head, &c);
        printf("%c ", c);

        printf("\n");
        return 0;
}
