#include <stdio.h>
#include <string.h>
#include "stack.h"

int main(int argc, char *argv[]){

	FILE *f = NULL;
	STACK_NODE *stackp = NULL;
	char *open_char = "{[(<";
	char *close_char = "}])>";
	char *r, *s;
	char c, d;

	if(argc < 2) return 0;

	f = fopen(argv[1], "r");
	while(feof(f)!=1){
		c = fgetc(f);
		r = strchr(open_char, c);
		if(r!=NULL){
			printf("%c", c);
			stackp = stack_push(stackp, c);
		}
		r = strchr(close_char, c);
		if(r!=NULL){
			printf("%c", c);
			stackp = stack_pop(stackp, &d);
			s = strchr(open_char, d);
			if((r-close_char)!=(s-open_char)){
				printf("\n Unbalanced\n");
				return 0;
			}
		}
	}
	printf("\n");
	fclose(f);

	return 0;
}
