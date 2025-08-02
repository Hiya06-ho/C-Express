#include <stdio.h>

int main() {
    char ch;

    printf("문자를 입력하세요: ");
    scanf(" %c", &ch);

    if (ch == 'R' || ch == 'r') {
        printf("Rectangle\n");
    }
    else if (ch == 'T' || ch == 't') {
        printf("Triangle\n");
    }
    else if (ch == 'C' || ch == 'c') {
        printf("Circle\n");
    }
    else {
        printf("Unknown\n");
    }

    return 0;
}