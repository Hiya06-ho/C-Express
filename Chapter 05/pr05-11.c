#include <stdio.h>

int main(void)
{
    const double PI = 3.14;
    double distance, angle, radius;

    printf("거리를 입력하시오: ");
    scanf("%lf", &distance);

    printf("각도를 입력하시오: ");
    scanf("%lf", &angle);

    radius = (distance * 360.0) / (2.0 * PI * angle);

    printf("지구의 반지름은 %.2f입니다.\n", radius);

    return 0;
}