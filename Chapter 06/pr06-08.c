#include <stdio.h>

int main(void)
{
    int time, age, price;

    printf("���� �ð��� ���̸� �Է��Ͻÿ�(�ð� ����): ");
    scanf("%d %d", &time, &age);

    if (time < 17)
    {
        if ((age >= 3 && age <= 12) || age >= 65)
            price = 25000;
        else
            price = 34000;
    }
    else
    {
        price = 10000;
    }

    printf("����� %d�� �Դϴ�.\n", price);

    return 0;
}
