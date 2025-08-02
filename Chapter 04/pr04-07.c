#include <stdio.h>
int main(void)
{
	double mass, speed, kenergy;

	printf("질량(kg): ");
	scanf("%lf", &mass);
	printf("속도(m/s): ");
	scanf("%lf", &speed);

	kenergy = mass * (speed * speed) / 2.0;

	printf("운동에너지(J): %f", kenergy);

	return 0;
}