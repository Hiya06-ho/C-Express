#include <stdio.h>

double get_bigger(double n, double m);

int main(void)
{
	double n, m;

	printf("�Ǽ��� �Է��Ͻÿ�: ");
	scanf("%lf %lf", &n, &m);

	double result = get_bigger(n, m);

	if (result != -1)
		printf("ū ���� %.1f�Դϴ�.", result);
	else
		printf("�� ���� �����ϴ�.");

	return 0;
}

double get_bigger(double n, double m)
{
	if (n > m)
		return n;
	else if (n == m)
		return -1;
	else if(n < m)
		return m;
}