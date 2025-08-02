#include <stdio.h>

int main() {
    double x, fx;

    printf("x의 값을 입력하시오: ");
    scanf("%lf", &x);

    if (x <= 0) {
        fx = x * x - 9 * x + 2;  // x ≤ 0 구간의 2차 함수
    }
    else {
        fx = 7 * x + 2;          // x > 0 구간의 1차 함수
    }

    printf("f(x)의 값은 %.2lf입니다.\n", fx);

    return 0;
}