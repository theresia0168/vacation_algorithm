#include <stdio.h>

void quick2(int *a, int left, int right){
	int s, t, i, j;
	if(right <= left)
		return;
	s = a[right];
	i = left - 1;
	j = right;

	printf("quick : left %d, right %d\n", left, right);
	while(1){
		while(a[++i] < s);
		while(a[--j] > s);
		if(i >= j) break;
		t = a[i];
		a[i] = a[j];
		a[j] = t;
	}
	a[right] = a[i];
	a[i] = s;
	printf("a[%d] : %d\n", j, a[j]);
	quick2(a, left, i - 1);
	quick2(a, i + 1, right);
}

void quick(int *a, int left, int right){
	int s, t, i , j;
	if(right <= left)
		return;

	s = a[left];
	i = left;
	j = right + 1;

	printf("quick : left %d, right %d\n", left, right);
	while(1){
		while(a[++i] < s);
		while(a[--j] > s);
		if(i >= j) break;
		t = a[i];
		a[i] = a[j];
		a[j] = t;
		printf("a[%d] : %d, a[%d] : %d\n", i, a[i], j, a[j]);
	}

	a[left] = a[j];
	a[j] = s;
	printf("a[%d] : %d\n", j, a[j]);
	quick(a, left, j - 1);
	quick(a, j + 1, right);
}

int main(int argc, char *argv[]){

	int a[] = {41, 24, 76, 11, 45, 64, 21, 69, 19, 36};
	int i;

	for(i = 0; i < 10; i++)
		printf("%d ", a[i]);
	printf("\n");

	quick2(a, 0, 9);

	for(i = 0; i < 10; i++)
		printf("%d ", a[i]);
	printf("\n");

	return 0;
}
