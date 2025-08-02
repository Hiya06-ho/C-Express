#include <stdio.h>

int main(void) {
    unsigned int result = 0;
    unsigned char ch1, ch2, ch3, ch4;

    printf("첫 번째 문자를 입력하시오: ");
    ch1 = getchar();
    getchar(); // 엔터 입력 버퍼 비우기

    printf("두 번째 문자를 입력하시오: ");
    ch2 = getchar();
    getchar();

    printf("세 번째 문자를 입력하시오: ");
    ch3 = getchar();
    getchar();

    printf("네 번째 문자를 입력하시오: ");
    ch4 = getchar();
    getchar();

    // 각 문자를 위치에 맞게 비트 이동 후 OR 연산
    result = (unsigned int)ch1
        | ((unsigned int)ch2 << 8)
        | ((unsigned int)ch3 << 16)
        | ((unsigned int)ch4 << 24);

    printf("결과값: %08x\n", result);

    return 0;
}
