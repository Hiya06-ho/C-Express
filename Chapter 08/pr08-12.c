#include <stdio.h>

int get_first_digit(int n);

int main(void)
{
	int n;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &n);

	printf("���� ���� �ڸ����� %d�Դϴ�.", get_first_digit(n));

	return 0;
}

int get_first_digit(int n)
{
	while (1)
	{
		if (n == 10)
			n = 1;
		if (n / 10 == 0)
			break;
		n = (int) n / 10;
	}

	return n;
}