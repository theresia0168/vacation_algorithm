#include <stdio.h>

void print_h(int *h, int len){
	for(int i = 0; i < len; i++)
		printf("%d ", h[i + 1]);
		printf("\n");
}

void mk_heap(int *h, int last_index){
	int n, i, buf;
	int p, s;
	n = last_index;
	for(i = n/2; i >= 1; i--){
		p = i;
		s = p * 2;

		while(s <= n){
			if((s < n) && (h[s + 1] < h[s]))
				s++;
			if(h[p] < h[s])
				break;
			buf = h[p];
			h[p] = h[s];
			h[s] = buf;

			p = s;
			s = 2 * p;
		}
	}
}

void go_up(int *h, int s, int p){
	int t;
	if(s < 2)
		return;
	if(h[p] > h[s]){
		t = h[p];
		h[p] = h[s];
		h[s] = t;
	}
	go_up(h, p, s/2);
}

void heap_add_r(int *h, int last_index, int value){
	h[last_index] = value;
	go_up(h, last_index, last_index/2);
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
		heap[i + 1] = values[i];
/*
	for(i = 0; i < len; i++)
		heap_add(heap, i + 1, values[i]);
*/

	printf("BEFORE : ");
	print_h(heap, len);

	int min, buf;
	for(i = len; i > 0; i--){
		mk_heap(heap, i);
		buf = heap[1];
		heap[1] = heap[i];
		heap[i] = buf;
	}

	printf("AFTER  : ");
	print_h(heap, len);

	return 0;
}
