#include <stdio.h>

int main() {
    double x, fx;

    printf("x�� ���� �Է��Ͻÿ�: ");
    scanf("%lf", &x);

    if (x <= 0) {
        fx = x * x - 9 * x + 2;  // x �� 0 ������ 2�� �Լ�
    }
    else {
        fx = 7 * x + 2;          // x > 0 ������ 1�� �Լ�
    }

    printf("f(x)�� ���� %.2lf�Դϴ�.\n", fx);

    return 0;
}