#include <stdio.h>
int main(void)
{
	int oil = 100, change;

	while (1)
	{
		printf("���� ���ᷮ: %d\n", oil);

		if (oil < 20)
			printf("(���) ���ᰡ 20���� �̸��Դϴ�.\n");

		printf("���� ������ +, ���� �Ҹ�� -�� �Է����ּ���: ");
		scanf("%d", &change);

		oil += change;

		printf("\n");
	}

	return 0;
}