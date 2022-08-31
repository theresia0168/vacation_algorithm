#include <stdio.h>

void print_n(int *n, int len){
        printf("[ ");
        for(int i = 0; i < len; i++)
                printf("%d ", n[i]);
        printf("]\n");
}

int main(int argc, char *argv[]){

        int n[] = {6, 5, 3, 1, 8, 7, 2, 4};
        int i, j, tmp, len;
        len = sizeof(n)/4;

        printf("Orginal Array : ");
        print_n(n, len);printf("\n");

        for(i = 0; i < len; i++){
                for(j = 0; j < len - 1; j++){
                        if(n[j] > n[j+1]){
                                tmp = n[j];
                                n[j] = n[j+1];
                                n[j+1] = tmp;
                        }
                }
        }

        printf("Bubble sorted Array : ");
        print_n(n, len);printf("\n");

        return 0;
}
