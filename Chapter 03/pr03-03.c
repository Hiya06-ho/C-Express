#include <stdio.h>
int main(void)
{
	double area, height, base;

	printf("»ï°¢ÇüÀÇ ¹Øº¯: ");
	scanf("%lf", &base);
	printf("»ï°¢ÇüÀÇ ³ôÀÌ: ");
	scanf("%lf", &height);

	area = height * base * 0.5;

	printf("»ï°¢ÇüÀÇ ³ĞÀÌ: %.2f", area);

	return 0;
}