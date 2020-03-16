#include<Stdio.h> 
struct Dashboard{
	int speed;
	char fuel; 
	float mileage;
	int engineTemp;
	int rpm;
};

int main(void)
{
	struct Dashboard d1 = { 80,F,5821.442871,200,1830};

	printf("Speed: %dkm/h\n", d1.speed);
	printf("Fuel: %c\n", d1.fuel);
	printf("Mileage: %fkm\n", d1.mileage);
	printf("Engine temp: %d¡É\n", d1.engineTemp);
	printf("RPM: %d\n", d1.rpm);

	return 0;
}