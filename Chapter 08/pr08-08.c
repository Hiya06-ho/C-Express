#include <stdio.h>

int main(void)
{
	int income;

	printf("�ҵ��� �Է��Ͻÿ�(����): ");
	scanf("%d", &income);

	printf("�ҵ漼�� %d�����Դϴ�.", get_tax(income));

	return 0;
}

int get_tax(int income)
{
	if (income > 1000)
		return (80 + ((income - 1000) * 0.1));
	else
		return income * 0.08;	
}