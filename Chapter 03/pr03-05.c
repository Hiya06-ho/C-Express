#include <stdio.h>
int main(void)
{
	double num, result;

	printf("실수를 입력하시오: ");
	scanf("%lf", &num);

	result = 3 * (num * num) + (7 * num) + 11;

	printf("다항식의 값은 %.2f", result);

	return 0;
}