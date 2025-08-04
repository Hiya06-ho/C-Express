#include <stdio.h>

double factorial(double n);

int main(void)
{
	double n, result = 0;
	double e = 1;

	printf("어디까지 계산할까요: ");
	scanf("%lf", &n);
	
	for (int j = 1; j <= n; j++)
		e += 1/factorial(j);

	printf("오일러의 수는 %f입니다", e);

	return 0;
}

double  factorial(double n)
{
	double result = 1;

	for (int i = 1; i <= n; i++)
		result *= i;

	return result;
}