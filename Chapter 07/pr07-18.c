#include <stdio.h>
int main(void)
{
	int times;
	double sum = 0;

	printf("���� ����: ");
	scanf("%d", &times);
	
	for (int i = 1; i <= times; i++)
		sum += 1 / (double)i;
	
	printf("������ �� = %f", sum);

	return 0;
}