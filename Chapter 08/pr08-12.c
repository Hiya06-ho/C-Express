#include <stdio.h>

int get_first_digit(int n);

int main(void)
{
	int n;
	printf("정수를 입력하시오: ");
	scanf("%d", &n);

	printf("가장 상위 자릿수는 %d입니다.", get_first_digit(n));

	return 0;
}

int get_first_digit(int n)
{
	while (1)
	{
		if (n == 10)
			n = 1;
		if (n / 10 == 0)
			break;
		n = (int) n / 10;
	}

	return n;
}