#include <stdio.h>

int main(void)
{
    int time, age, price;

    printf("현재 시간과 나이를 입력하시오(시간 나이): ");
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

    printf("요금은 %d원 입니다.\n", price);

    return 0;
}
