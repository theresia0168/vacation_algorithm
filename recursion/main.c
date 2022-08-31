#include <stdio.h>

int fact_loop(int n){
	if(n == 1 || n == 0)
		return 1;
	return n*fact_loop(n-1);
}

int fibo(int n){
	if(n == 0 || n == 1)
		return n;
	return fibo(n - 2) + fibo(n - 1);
}

int fibo2(int n){
	int sum1 = 0;
	int sum2 = 1;
	int tmp;
	for(int i = 1; i < n; i++){
		printf("sum1 %d\tsum2 %d\t", sum1, sum2);
		tmp = sum2;
		sum2 += sum1;
		sum1 = tmp;
		printf("sum %d\n", sum2);
	}
	return sum2;
}

int main(int argc, char *argv[]){

	int i;
	for(i = 2; i < 10; i++){
		printf("factorial %d - %d\n", i, fact_loop(i));
	}

	int n = 10;
	printf("fibo %d\n", fibo(n));

	printf("fibo2 %d\n", fibo2(n));

	return 0;
}
