#include<stdio.h>
#include "linklist2.h"

int main(int argc, char *argv[]){

        LINKLIST *mylist;

        mylist = linklist_new();
        linklist_append(mylist, 'a');
        linklist_prepend(mylist, 'b');
        linklist_append(mylist, 'c');
        linklist_append(mylist, 'd');
        linklist_prepend(mylist, 's');

        linklist_print(mylist); // b - a

        linklist_delete(mylist);

        return 0;
}
