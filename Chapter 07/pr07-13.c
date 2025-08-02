#include <stdio.h>
int main(void)
{
	int sum = 0;

	int i = 1;

	while (1)
	{
		if (sum + i + 1 > 10000)
			break;

		sum += i;

		i++;
	}

	printf("1부터 %d까지의 합이 %d입니다.", i-1, sum);

	return 0;
}