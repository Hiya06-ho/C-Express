#include <stdio.h>
int main(void)
{
	double area, height, base;

	printf("�ﰢ���� �غ�: ");
	scanf("%lf", &base);
	printf("�ﰢ���� ����: ");
	scanf("%lf", &height);

	area = height * base * 0.5;

	printf("�ﰢ���� ����: %.2f", area);

	return 0;
}