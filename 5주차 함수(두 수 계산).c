/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void inputOpData(int* a, int* b, char* op);
int calc(int a, int b, char op);

int main(void)
{
	//����� �ǿ����� �Է�(2��), ���� ����...
	//1. 
	int a, b, result;
	char op; // + - * / 
	inputOpData(&a,&b,&op);
	result = calc(a, b, op);

	printf(">���� ����� %d �Դϴ�. \n", result);
	return 0;
}

void inputOpData(int *a, int *b, char *op) {

	printf(">���꿡 �ʿ��� �ǿ����� 2���� �Է��ϼ���.");
	scanf("%d %d", a, b);
	printf(">�� ���� %d �� %d �Դϴ�. \n", *a, *b);
	getchar();

	printf(">�����ڸ� �Է����ּ��� : ");
	scanf("%c", op);
	printf(">�Էµ� �����ڴ� %c �Դϴ�. \n", *op);

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