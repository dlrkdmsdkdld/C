#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int arr1[10] = { 0, }; // ������ ��
	int arr2[10] = { 0, }; // ������
	printf("���� 10���� �Է����ּ���");
	int i, j, temp, count; 

	for (i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < 10; i++) {
		arr2[i]= arr1[i] % 42;
		for (j = 0; j < 10; j++) {
			if (arr2[i] == arr2[j]) {
				count++;
			}
		}
	}
	printf("%d", count);
	return 0;
}