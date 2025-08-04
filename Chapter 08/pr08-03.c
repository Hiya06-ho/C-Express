#include <stdio.h>

double get_bigger(double n, double m);

int main(void)
{
	double n, m;

	printf("실수를 입력하시오: ");
	scanf("%lf %lf", &n, &m);

	double result = get_bigger(n, m);

	if (result != -1)
		printf("큰 수는 %.1f입니다.", result);
	else
		printf("두 수는 같습니다.");

	return 0;
}

double get_bigger(double n, double m)
{
	if (n > m)
		return n;
	else if (n == m)
		return -1;
	else if(n < m)
		return m;
}