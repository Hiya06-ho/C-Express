#include <stdio.h>

int main(void)
{
	int num[3] = { 0 };
	int* ptr = num;

	for (int i = 0; i < sizeof(num)/sizeof(int); i++)
	{
		printf("������ �Է��Ͻÿ�: ");
		scanf("%d", &num[i]);
	}

	printf("=================================\n");
	printf("�ּ�\t��\n");
	printf("=================================\n");

	for (int i = 0; i < sizeof(num)/sizeof(int); i++)
	{
		printf("%p\t%d\n", &num[i], num[i]);
	}

	return 0;
}

//���� ����� �ٸ��� �����°� �ü���� �޶� �׷����