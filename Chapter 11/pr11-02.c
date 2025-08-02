#include <stdio.h>

int main(void)
{
	int num[3] = { 0 };
	int* ptr = num;

	for (int i = 0; i < sizeof(num)/sizeof(int); i++)
	{
		printf("정수를 입력하시오: ");
		scanf("%d", &num[i]);
	}

	printf("=================================\n");
	printf("주소\t값\n");
	printf("=================================\n");

	for (int i = 0; i < sizeof(num)/sizeof(int); i++)
	{
		printf("%p\t%d\n", &num[i], num[i]);
	}

	return 0;
}

//값이 교재와 다르게 나오는건 운영체제가 달라서 그런경우