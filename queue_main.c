#include <stdio.h>
#include "queue.h"

int main(int argc, char *argv[]){

        QUEUE *myq = NULL;
        char d;

        myq = queue_new();
        queue_enq(myq, 'a');
        queue_enq(myq, 'b');
        queue_enq(myq, 'c');

        queue_deq(myq, &d);
        printf("%c ", d);
        queue_deq(myq, &d);
        printf("%c ", d);
        queue_deq(myq, &d);
        printf("%c\n", d);

        return 0;
}
