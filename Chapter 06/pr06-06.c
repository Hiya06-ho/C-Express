#include <stdio.h>

int main(void)
{
    char ch;

    printf("문자를 입력하시오: ");
    scanf(" %c", &ch);  // 공백 추가로 앞의 버퍼 제거

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
        printf("모음입니다\n");
        break;
    default:
        printf("자음입니다\n");
        break;
    }

    return 0;
}
