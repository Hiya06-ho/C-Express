#include <stdio.h>
int main(void)
{
	int num, times;

	printf("실수의 값을 입력하시오: ");
	scanf("%d", &num);
	printf("거듭 제곱 횟수를 입력하시오: ");
	scanf("%d", &times);

	double result = 1;
	
	for (double i = 0; i < times; i++)
		result *= num;

	printf("결과값은 %f", result);

	return 0;
}