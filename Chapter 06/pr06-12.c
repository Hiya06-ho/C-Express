#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int lotto, user, lotto_tens, lotto_ones, user_tens, user_ones;
    int prize = 0;

    srand(time(NULL));
    lotto = rand() % 100;

    printf("���� ��ȣ�� �Է��Ͻÿ�(0���� 99����): ");
    scanf("%d", &user);

    lotto_tens = lotto / 10;
    lotto_ones = lotto % 10;
    user_tens = user / 10;
    user_ones = user % 10;

    printf("��÷��ȣ�� %02d�Դϴ�.\n", lotto);

    if (user == lotto)
        prize = 1000000;
    else if (user_tens == lotto_tens || user_tens == lotto_ones || user_ones == lotto_tens || user_ones == lotto_ones)
        prize = 500000;
    else
        prize = 0;

    if (prize == 0)
        printf("����� �����ϴ�.\n");
    else
        printf("����� %d���Դϴ�.\n", prize);

    return 0;
}