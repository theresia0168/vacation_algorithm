#include <stdio.h>

void print_h(int *h, int len){
	for(int i = 0; i < len; i++)
		printf("%d ", h[i + 1]);
		printf("\n");
}

void ancestor(int *h, int last_index, int half_index){
	int t;
	t = h[last_index];
	h[last_index] = h[half_index];
	h[half_index] = t;
	if(h[half_index] < h[half_index/2])
		ancestor(h, half_index, half_index/2);
}

void heap_add(int *h, int last_index, int value){
	int t;
	h[last_index] = value;
	if(h[last_index] < h[last_index/2])
		ancestor(h, last_index, last_index/2);
}

int main(int argc, char *argv[]){

	int heap[21];
	int values[] = {35, 40, 27, 28, 22, 30, 26, 20, 29, 25, 15, 10};
	int i;
	int len = sizeof(values)/4;

	for(i = 0; i < 21; i++)
		heap[i] = -1;

	for(i = 0; i < len; i++)
		heap_add(heap, i + 1, values[i]);

	print_h(heap, len);

	return 0;
}
