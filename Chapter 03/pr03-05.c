#include <stdio.h>
int main(void)
{
	double num, result;

	printf("�Ǽ��� �Է��Ͻÿ�: ");
	scanf("%lf", &num);

	result = 3 * (num * num) + (7 * num) + 11;

	printf("���׽��� ���� %.2f", result);

	return 0;
}