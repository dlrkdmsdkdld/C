#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> //�ܾ ������ �迭
#include <string.h> //���ڿ� ����
#include <stdbool.h> // ȸ�� �Ǻ����� ������ ����, �ʱ갪�� true

int main(void) {
	char str[50];
	int len = strlen(str); //���ڿ��� ���̸� ����
	bool isPalindrome = true; 

	printf("���ڸ� �Է��ϼ���");
	scanf("%s", str);

	for (int i = 0; i < len / 2; i++) { //0 ���� ���ڿ� ������ ���ݸ�ŭ �ݺ�
		if (str[i] != str[len - 1 - i]) { // ���� ���ڿ� ������ ���ڰ� �ٸ���
			isPalindrome = false; // ȸ���� �ƴ�
			break; 
		}

	}

	if (isPalindrome == true)
	{
		printf("ȸ�� �Դϴ�.");

	}
	else {
		printf("ȸ���� �ƴմϴ�.");
	}

	return 0;
}