#include <stdio.h>

int is_prime(int n);

int main(void)
{
	int n;
	int times = 0;

	printf("양의 정수를 입력하시오.: ");
	scanf("%d", &n);
	
	for (int i = 2; i < n; i++)
	{
		for (int j = 2; j < n; j++)
		{
			if ((is_prime(i) == 1 && is_prime(j) == 1) && i + j == n)
			{
				printf("%d = %d + %d\n", n, i, j);
				times++;
			}
		}

	}

	if (times == 0)
		printf("표현할 수 있는 방법이 없습니다.");

	return 0;
}

int is_prime(int n)
{
	int i = 2;

	while( i < n)
	{
		if (n % i == 0)
			return 0;

		i++;
	}

	return 1;
}