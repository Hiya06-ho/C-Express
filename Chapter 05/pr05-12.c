#include <stdio.h>

int main(void) {
    unsigned int result = 0;
    unsigned char ch1, ch2, ch3, ch4;

    printf("ù ��° ���ڸ� �Է��Ͻÿ�: ");
    ch1 = getchar();
    getchar(); // ���� �Է� ���� ����

    printf("�� ��° ���ڸ� �Է��Ͻÿ�: ");
    ch2 = getchar();
    getchar();

    printf("�� ��° ���ڸ� �Է��Ͻÿ�: ");
    ch3 = getchar();
    getchar();

    printf("�� ��° ���ڸ� �Է��Ͻÿ�: ");
    ch4 = getchar();
    getchar();

    // �� ���ڸ� ��ġ�� �°� ��Ʈ �̵� �� OR ����
    result = (unsigned int)ch1
        | ((unsigned int)ch2 << 8)
        | ((unsigned int)ch3 << 16)
        | ((unsigned int)ch4 << 24);

    printf("�����: %08x\n", result);

    return 0;
}
