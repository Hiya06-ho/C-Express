#include <stdio.h>

int main(void)
{
    int x, y;

    printf("x ��ǥ�� �Է��Ͻÿ�: ");
    scanf("%d", &x);

    printf("y ��ǥ�� �Է��Ͻÿ�: ");
    scanf("%d", &y);

    (x > 0 && y > 0) ? printf("\n1��и��Դϴ�.\n") :
        (x < 0 && y > 0) ? printf("\n2��и��Դϴ�.\n") :
        (x < 0 && y < 0) ? printf("\n3��и��Դϴ�.\n") :
        (x > 0 && y < 0) ? printf("\n4��и��Դϴ�.\n") :
        printf("\n�� ���� �ֽ��ϴ�.\n");

    return 0;
}
