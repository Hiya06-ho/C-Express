#include <stdio.h>

double cal_area(double  radius);

int main(void)
{
	double r;

	printf("원의 반지름을 입력하시오: ");
	scanf("%lf", &r);

	printf("원의 면적은 %.2lf입니다.", cal_area(r));

	return 0;
}

double cal_area(double radius)
{
	double pi = 3.1415926;

	return pi * (radius * radius);
}