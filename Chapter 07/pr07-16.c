#include <stdio.h>
int main (void)
{ 
	int num, remainder=1;

	printf("정수를 입력하시오: ");
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