#include <stdio.h>
int main(void)
{
	int num1, num2, num3, result;

	printf("���� 3���� �Է��Ͻÿ�: ");
	scanf("%d %d %d", &num1, &num2, &num3);

	if (num1 > num2 && num1 > num3)
		result = num1;
	else if (num2 > num1 && num2 > num3)
		result = num2;
	else
		result = num3;

	printf("���� ���� ������ %d�Դϴ�", result);

	return 0;
}