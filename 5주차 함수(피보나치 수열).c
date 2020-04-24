//재귀적인 정의 피보나치 순열 
// fnI = fn-1 + fn-2
//f0 = 0
//f1 = 1

#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int fibo(int n);
int forfibo(int n);

int main(void) {
	int result = 0;
	result = fibo(10);
	printf("10번쨰 fibo =%d", result);

	printf("\n");

	for (int i = 2; i < 3; i++) {
		result = forfibo(i);
		printf("%d", result);
	}

	return 0;
}

// n >= 2 
int forfibo(int n) {
	//fn = fn-1 + fn-2 
	// n	f0 + f1 -> f2
	//		f1 + f2 -> f3 
	//		f2 + f3 -> f4 

	int fn_2 = 0, fn_1 = 1, fn;
	int start = 2, index;

	if (n == 0) {
		return 0;
	}
	else if (n == 1) {
		return 1;
	}
	else {
		for (index = 2; index <= n; index++) {
			fn = fn_1 + fn_2;
			fn_2 = fn_1;
			fn_1 = fn;
		}
	}

	return fn;
}

int fibo(int n) {
	int result;

	if (n == 0) {
		result = 0;
	}
	else if (n == 1) {
		result = 1;
	}
	else {
		result = fibo(n - 1) + fibo(n - 2);
	}

	return result;
}