#include <stdio.h>
int main(void)
{
	int num, times;

	printf("�Ǽ��� ���� �Է��Ͻÿ�: ");
	scanf("%d", &num);
	printf("�ŵ� ���� Ƚ���� �Է��Ͻÿ�: ");
	scanf("%d", &times);

	double result = 1;
	
	for (double i = 0; i < times; i++)
		result *= num;

	printf("������� %f", result);

	return 0;
}