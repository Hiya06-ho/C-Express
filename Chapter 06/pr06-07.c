#include <stdio.h>

int main(void)
{
    int height, weight, standard;

    printf("Ű�� ü���� �Է��Ͻÿ�: ");
    scanf("%d %d", &height, &weight);

    standard = (height - 100) * 0.9;

    if (weight < standard)
        printf("��ü���Դϴ�\n");
    else if (weight > standard)
        printf("��ü���Դϴ�\n");
    else
        printf("ǥ��ü���Դϴ�\n");

    return 0;
}
