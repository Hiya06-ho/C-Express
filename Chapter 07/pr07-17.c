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

        printf("������ �����Ͻÿ�.:");
        scanf("%c", &menu);
        printf("�μ��� �������� �и��Ͽ� �Է��Ͻÿ�: ");
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
            printf("������ �����Ͻÿ�.\n");
            continue;
        }

        printf("%d", result);
        break;
    }
	return 0;
}