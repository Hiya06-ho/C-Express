#include <stdio.h>
int main (void)
{ 
	int num, remainder=1;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &num);

	while (1)
	{
		remainder = num % 10;
		num /= 10;
		printf("%d", remainder);

		if (num < 10)
		{
			printf("%d", num);
			break;
		}
	}

	return 0;
}