#include <stdio.h>

#define N 8

int map[N][N] = {
			{0, 1, 0, 0, 0, 0, 0, 0},
			{1, 0, 1, 1, 0, 0, 0, 0},
			{0, 1, 0, 0, 0, 0, 1, 0},
			{0, 1, 0, 0, 1, 0, 0, 0},
			{0, 0, 0, 1, 0, 1, 0, 0},
			{0, 0, 0, 0, 1, 0, 1, 1},
			{0, 0, 1, 0, 0, 1, 0, 1},
			{0, 0, 0, 0, 0, 1, 1, 0},
		};
int v[N];

void visit(int i){
	int j;
	v[i] = 1;
	for(j = 0; j < N; j++){
		if(map[i][j] == 1 && v[j] == 0){
			printf("%d -> %d\n", i + 1, j + 1);
			visit(j);
		}
	}
}

int main(int argc, char *argv[]){

	int i;
	for(i = 0; i < N; i++)
		v[i] = 0;
	visit(0);
	printf("\n");

	return 0;
}
