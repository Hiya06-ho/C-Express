#include <stdio.h>
int main(void)
{
	int num1, num2, num3;

	printf("���� 3���� �Է��Ͻÿ�: ");
	scanf("%d %d %d", &num1, &num2, &num3);

	printf("�ִ밪�� %d�Դϴ�.", (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3));
}

