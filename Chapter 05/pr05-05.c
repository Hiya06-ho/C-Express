#include <stdio.h>
int main(void)
{
	int num, ten, one;

	printf("정수를 입력하시오: ");
	scanf("%d", &num);

	ten = num / 10;
	one = num - (ten * 10);

	printf("십의 자리 %d\n", ten);
	printf("일의 자리 %d", one);

	return 0;
}