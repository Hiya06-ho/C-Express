#include <stdio.h>

int main(void)
{
    double AC, AE, BC, DE;

    printf("�������� ���̸� �Է��Ͻÿ�: ");
    scanf("%lf", &BC);

    printf("�������� �׸����� ���̸� �Է��Ͻÿ�: ");
    scanf("%lf", &AC);

    printf("�Ƕ�̵������ �Ÿ��� �Է��Ͻÿ�: ");
    scanf("%lf", &AE);

    DE = (AE * BC) / AC;

    printf("�Ƕ�̵��� ���̴� %.2f�Դϴ�.", DE);

    return 0;
}