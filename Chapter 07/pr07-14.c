#include <stdio.h>
int main(void)
{
	int times;
	int a = 0, b = 1, c;
	int i = 1;

	printf("���° �ױ��� ���ұ��? ");
	scanf("%d", &times);

	while (1)
	{
		if (i == times)
			break;

		if (a < 1)
		{
			printf("%d, ", a);
		}

		c = a + b;
		a = b;
		b = c;

		printf("%d, ", c);

		i++;
		
	}

	return 0;
}