#include <stdio.h>
int main(void)
{
    while (1)
    {
        printf("********************\n");
        printf("A ---- Add\n");
        printf("S ---- Subtract\n");
        printf("M ---- Multiply\n");
        printf("D ---- Divide\n");
        printf("Q ---- Quit\n");
        printf("********************\n");

        int num1, num2, result;
        char menu;

        printf("연산을 선택하시오.:");
        scanf("%c", &menu);
        printf("두수를 공백으로 분리하여 입력하시오: ");
        scanf("%d %d", &num1, &num2);

        switch (menu)
        {
        case('A'):
            result = num1 + num2;
            break;
        case('S'):
            result = num1 - num2;
            break;
        case('M'):
            result = num1 * num2;
            break;
        case('D'):
            result = num1 / num2;
            break;
        case('Q'):
            result = num1 % num2;
            break;
        default:
            printf("연산을 선택하시오.\n");
            continue;
        }

        printf("%d", result);
        break;
    }
	return 0;
}