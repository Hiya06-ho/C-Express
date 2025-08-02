#include <stdio.h>
#define PI 3.141592653589793

int main(void)
{
    double radius, area, volume;

    printf("구의 반지름을 입력하시오: ");
    scanf("%lf", &radius);

    area = 4 * PI * radius * radius;
    volume = (4.0 / 3.0) * PI * radius * radius * radius;

    printf("표면적은 %.2f입니다.\n", area);
    printf("체적은 %.2f입니다.\n", volume);

    return 0;
}
