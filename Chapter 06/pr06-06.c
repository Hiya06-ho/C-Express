#include <stdio.h>

int main(void)
{
    char ch;

    printf("���ڸ� �Է��Ͻÿ�: ");
    scanf(" %c", &ch);  // ���� �߰��� ���� ���� ����

    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("�����Դϴ�\n");
        break;
    default:
        printf("�����Դϴ�\n");
        break;
    }

    return 0;
}
