#include <stdio.h>

int main() {
    double x, y;

    printf("x, y좌표를 입력하시오: ");
    scanf("%lf %lf", &x, &y);

    if (x > 0 && y > 0) {
        printf("1사분면입니다.\n");
    }
    else if (x < 0 && y > 0) {
        printf("2사분면입니다.\n");
    }
    else if (x < 0 && y < 0) {
        printf("3사분면입니다.\n");
    }
    else if (x > 0 && y < 0) {
        printf("4사분면입니다.\n");
    }
    else if (x == 0 && y != 0) {
        printf("y축 위에 있습니다.\n");
    }
    else if (y == 0 && x != 0) {
        printf("x축 위에 있습니다.\n");
    }
    else {
        printf("원점입니다.\n");
    }

    return 0;
}