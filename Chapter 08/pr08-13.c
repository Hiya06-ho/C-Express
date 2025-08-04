#include <stdio.h>
#include <math.h>

double get_distance(double x1, double x2, double y1, double y2);

int main(void)
{
	double x1, x2, y1, y2;

	printf("ù ��° ���� ��ǥ�� �Է��Ͻÿ�: ");
	scanf("%lf %lf", &x1, &y1);
	printf("�� ��° ���� ��ǥ�� �Է��Ͻÿ�: ");
	scanf("%lf %lf", &x2, &y2);

	printf("�� �� ������ �Ÿ��� %f�Դϴ�.", get_distance(x1, y1, x2, y2));

	return 0;
}

double get_distance(double x1, double y1, double x2, double y2)
{
	double d;
	d = ((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2));

	return sqrt(d);
}