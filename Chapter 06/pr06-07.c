#include <stdio.h>

int main(void)
{
    int height, weight, standard;

    printf("키와 체중을 입력하시오: ");
    scanf("%d %d", &height, &weight);

    standard = (height - 100) * 0.9;

    if (weight < standard)
        printf("저체중입니다\n");
    else if (weight > standard)
        printf("과체중입니다\n");
    else
        printf("표준체중입니다\n");

    return 0;
}
