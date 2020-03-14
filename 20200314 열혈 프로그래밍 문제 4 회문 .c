#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> //단어를 저장할 배열
#include <string.h> //문자열 길이
#include <stdbool.h> // 회문 판별값을 저장할 변수, 초깃값은 true

int main(void) {
	char str[50];
	int len = strlen(str); //문자열의 길이를 구함
	bool isPalindrome = true; 

	printf("문자를 입력하세요");
	scanf("%s", str);

	for (int i = 0; i < len / 2; i++) { //0 부터 문자열 길이의 절반만큼 반복
		if (str[i] != str[len - 1 - i]) { // 왼쪽 문자와 오른쪽 문자가 다르면
			isPalindrome = false; // 회문이 아님
			break; 
		}

	}

	if (isPalindrome == true)
	{
		printf("회문 입니다.");

	}
	else {
		printf("회문이 아닙니다.");
	}

	return 0;
}