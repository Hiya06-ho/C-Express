#include <stdio.h>
int main(void)
{
	double weight_on_moon, weight_on_earth;

	printf("�����Ը� �Է��Ͻÿ�(����: kg): ");
	scanf("%lf", &weight_on_earth);

	weight_on_moon = weight_on_earth * 0.17;

	printf("�޿����� �����Դ� %.2fkg�Դϴ�.", weight_on_moon);

	return 0;
}