#include <stdio.h>
int main(void)
{
	double mass, speed, kenergy;

	printf("����(kg): ");
	scanf("%lf", &mass);
	printf("�ӵ�(m/s): ");
	scanf("%lf", &speed);

	kenergy = mass * (speed * speed) / 2.0;

	printf("�������(J): %f", kenergy);

	return 0;
}