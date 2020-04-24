/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void inputOpData(int* a, int* b, char* op);
int calc(int a, int b, char op);

int main(void)
{
	//사용자 피연산자 입력(2개), 연산 수행...
	//1. 
	int a, b, result;
	char op; // + - * / 
	inputOpData(&a,&b,&op);
	result = calc(a, b, op);

	printf(">연산 결과는 %d 입니다. \n", result);
	return 0;
}

void inputOpData(int *a, int *b, char *op) {

	printf(">연산에 필요한 피연산자 2개를 입력하세요.");
	scanf("%d %d", a, b);
	printf(">두 값은 %d 와 %d 입니다. \n", *a, *b);
	getchar();

	printf(">연산자를 입력해주세요 : ");
	scanf("%c", op);
	printf(">입력된 연산자는 %c 입니다. \n", *op);

}

int calc(int a, int b, char op){
	int result;
	switch(op) {
	case '+':
		result = a + b;
		break;
	case '-':
		result = a - b;
		break;
	case '*':
		result = a * b;
		break;
	case '/':
		result = a / b;
		break;
	}

	return result;

}
*/