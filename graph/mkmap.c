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
			{0, 0, 0, 0, 0, 1, 1, 0}
		};

int main(int argc, char *argv[]){

	int n;
	printf("# of nodes : ");
	scanf("%d", &n);

	int i, j;
	for(i = 0; i < n; i++){
		printf("node %d connects to : ", i + 1);
		for(j = 0; j < n; j++){
			if(map[i][j] == 1)
				printf("%d ", j + 1);
		}
		printf("\n");
	}
	return 0;
}
