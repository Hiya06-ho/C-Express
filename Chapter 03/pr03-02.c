#include <stdio.h>
int main(void)
{
	double mile;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%lf", &mile);

	double meter = 1609 * mile;

	printf("%.1f ������ %.2f�����Դϴ�.", mile, meter);

	return 0;
}