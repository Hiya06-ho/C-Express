#include <stdio.h>
int main(void)
{
	int num = 0, sum = 0, i = 0;

	while (1)
	{
		printf("���ڸ� �Է��ϼ���");
		scanf("%d", &num);

		if (num > 0)
		{
			sum += num;
			i++;
		}
		else
			continue;

		if (i >= 3)
			break;
	}
	printf("\n�հ�� %d�Դϴ�.", sum);

	return 0;
}