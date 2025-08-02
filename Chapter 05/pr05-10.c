#include <stdio.h>

int main(void)
{
    int x, y;

    printf("x 좌표를 입력하시오: ");
    scanf("%d", &x);

    printf("y 좌표를 입력하시오: ");
    scanf("%d", &y);

    (x > 0 && y > 0) ? printf("\n1사분면입니다.\n") :
        (x < 0 && y > 0) ? printf("\n2사분면입니다.\n") :
        (x < 0 && y < 0) ? printf("\n3사분면입니다.\n") :
        (x > 0 && y < 0) ? printf("\n4사분면입니다.\n") :
        printf("\n축 위에 있습니다.\n");

    return 0;
}
