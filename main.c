#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include "linklist.h"

using namespace std;

int main(int argc, char *argv[]){

        NODE *head = NULL;
        NODE *tail = NULL;
        head = node_new('a');
        tail = head;

        int link;
        char value;

        while(1){
                cout << ("Type the node value : ");
                cin >> value;
                if(value == 'x')
                        break;
                tail = node_append2(tail, value);
        }

        tail = node_append2(tail, 'b');
        tail = node_append2(tail, 'c');
        head = node_prepend(head, 'z');

        // node_print(head);    // node value : a

        node_print_link(head);  // a - b

        node_free(head);

        return 0;
}
