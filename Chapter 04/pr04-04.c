#include <stdio.h>
int main(void)
{
	double width, length, height, volume;

	printf("������ ���� ���� ���̸� �ѹ��� �Է�: ");
	scanf("%lf %lf %lf", &width, &length, &height);
	
	volume = width * length * height;

	printf("������ ���Ǵ� %f�Դϴ�.", volume);

	return 0;
}