#include <stdio.h>
int main(void)
{
	double C, F;

	printf("ȭ������ �Է��Ͻÿ�: ");
	scanf("%lf", &F);

	C = (5.0/9.0) * (F - 32.0);
	printf("�������� %.2f�� �Դϴ�.", C);

	return 0;
}