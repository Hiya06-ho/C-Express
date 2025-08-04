#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int dice();

int main(void)
{
	srand((unsigned int)time(NULL));

	int a = dice(), b = dice(), c = dice();
	int result1 = a + b + c;

	printf("사용자 주사위 =(%d, %d, %d) = %d\n", a, b, c, result1);

	int d = dice(), e = dice(), f = dice();
	int result2 = d + e + f;
	printf("컴퓨터 주사위 =(%d, %d, %d) = %d", d, e, f, result2);

	if (result1 > result2)
		printf("사용자 승리");
	else if (result2 > result1)
		printf("컴퓨터 승리");
	else
		printf("점수가 같습니다");

	return 0;
}

int dice()
{
	return rand() % 6 + 1;
}