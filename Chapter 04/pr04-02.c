#include <stdio.h>

int main(void)
{
    int num;

    printf("16���� ������ �Է��Ͻÿ�: ");
    scanf("%x", &num);

    printf("8�����δ� %#o�Դϴ�\n", num);
    printf("10�����δ� %d�Դϴ�\n", num);
    printf("16�����δ� %#X�Դϴ�\n", num);

    return 0;
}
