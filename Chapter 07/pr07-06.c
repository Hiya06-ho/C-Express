#include <stdio.h>
int main(void)
{
	int num, result = 0;

	printf("n�� ���� �Է��Ͻÿ�: ");
	scanf("%d", &num);

	for (int j = 1; j <= num; j++)
		result += j * j;

	printf("��갪�� %d�Դϴ�", result);

	return 0;
}