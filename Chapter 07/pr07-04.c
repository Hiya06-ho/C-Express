#include <stdio.h>
int main(void)
{
	int num, sum = 0;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &num);

	printf("���: ");
	for (int i = 1; i <= num; i++)
	{
		if (num % i == 0)
			printf("%d ", i);
	}

	return 0;
}