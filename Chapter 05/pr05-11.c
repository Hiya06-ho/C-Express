#include <stdio.h>

int main(void)
{
    const double PI = 3.14;
    double distance, angle, radius;

    printf("�Ÿ��� �Է��Ͻÿ�: ");
    scanf("%lf", &distance);

    printf("������ �Է��Ͻÿ�: ");
    scanf("%lf", &angle);

    radius = (distance * 360.0) / (2.0 * PI * angle);

    printf("������ �������� %.2f�Դϴ�.\n", radius);

    return 0;
}