#include <stdio.h>
#define PI 3.141592653589793

int main(void)
{
    double radius, area, volume;

    printf("���� �������� �Է��Ͻÿ�: ");
    scanf("%lf", &radius);

    area = 4 * PI * radius * radius;
    volume = (4.0 / 3.0) * PI * radius * radius * radius;

    printf("ǥ������ %.2f�Դϴ�.\n", area);
    printf("ü���� %.2f�Դϴ�.\n", volume);

    return 0;
}
