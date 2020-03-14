#include<Stdio.h>
int main(void)
{
	int num,i; 
	int oddCount = 0; 
	int evenCount = 9; 
	int arr[10];

	for (i = 0; i < 10; i++) 
	{
		printf("ют╥б : ");
		scanf_s(" %d\n", &num);
		switch (num % 2) {
		case 1: 
			arr[oddCount] = num;
			oddCount++;
			break;

		case 0: 
			arr[evenCount] = num; 
			evenCount--;
			break;
		}

	}
	for (i = 0; i < 10; i++)
	{
		printf("%d \t", arr[i]);
	}
	
	return;
}