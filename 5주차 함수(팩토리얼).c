/*#include <stdio.h>
int fact(int a);
int forFact(int n);

int main(void)
{
	// fact 
	//n! = n + (n-1)! 
	int result = forFact(10);
	printf(" fact = %d \n", result);


	return 0;
}
int forFact(int n) {
	int index; 
	int result = 1;
	for (index = n; index >= 1; index--) {
		result = result * index;
	}
	return result;
}
int fact(int a) {
	int result =0;
	printf("result %d\n",result);
	if (a == 1) {
		result = 1;
	}
	else {
		result = a * fact(a - 1);
	}
	return result;
}
*/