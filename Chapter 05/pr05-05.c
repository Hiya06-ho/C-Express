#include <stdio.h>
int main(void)
{
	int num, ten, one;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &num);

	ten = num / 10;
	one = num - (ten * 10);

	printf("���� �ڸ� %d\n", ten);
	printf("���� �ڸ� %d", one);

	return 0;
}