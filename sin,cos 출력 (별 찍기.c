#define PI 3.141592
#include<stdio.h> 
#include<math.h>

int main(void)
{
	int i, j;
	for (int i = 0; i <= 360; i += 15) {
		double tmp = sin(i * PI / 180);
		printf("sin(%3d) = %+.2lf", i, tmp);
		for (j = -10; j < tmp*10; j++) {
			printf("=");
			
		}
		printf("*\n");
	}
	return 0;

}
