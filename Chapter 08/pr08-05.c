#include <stdio.h>

double cal_area(double  radius);

int main(void)
{
	double r;

	printf("���� �������� �Է��Ͻÿ�: ");
	scanf("%lf", &r);

	printf("���� ������ %.2lf�Դϴ�.", cal_area(r));

	return 0;
}

double cal_area(double radius)
{
	double pi = 3.1415926;

	return pi * (radius * radius);
}