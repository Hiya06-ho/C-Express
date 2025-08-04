#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int dice();

int main(void)
{
	srand((unsigned int)time(NULL));

	int a = dice(), b = dice(), c = dice();
	int result1 = a + b + c;

	printf("����� �ֻ��� =(%d, %d, %d) = %d\n", a, b, c, result1);

	int d = dice(), e = dice(), f = dice();
	int result2 = d + e + f;
	printf("��ǻ�� �ֻ��� =(%d, %d, %d) = %d", d, e, f, result2);

	if (result1 > result2)
		printf("����� �¸�");
	else if (result2 > result1)
		printf("��ǻ�� �¸�");
	else
		printf("������ �����ϴ�");

	return 0;
}

int dice()
{
	return rand() % 6 + 1;
}