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

	printf("1���� %d������ ���� %d�Դϴ�.", i-1, sum);

	return 0;
}