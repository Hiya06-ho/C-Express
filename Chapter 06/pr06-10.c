#include <stdio.h>

int main() {
    double x, y;

    printf("x, y��ǥ�� �Է��Ͻÿ�: ");
    scanf("%lf %lf", &x, &y);

    if (x > 0 && y > 0) {
        printf("1��и��Դϴ�.\n");
    }
    else if (x < 0 && y > 0) {
        printf("2��и��Դϴ�.\n");
    }
    else if (x < 0 && y < 0) {
        printf("3��и��Դϴ�.\n");
    }
    else if (x > 0 && y < 0) {
        printf("4��и��Դϴ�.\n");
    }
    else if (x == 0 && y != 0) {
        printf("y�� ���� �ֽ��ϴ�.\n");
    }
    else if (y == 0 && x != 0) {
        printf("x�� ���� �ֽ��ϴ�.\n");
    }
    else {
        printf("�����Դϴ�.\n");
    }

    return 0;
}