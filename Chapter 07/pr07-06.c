#include <stdio.h>
int main(void)
{
	int num, result = 0;

	printf("n의 값을 입력하시오: ");
	scanf("%d", &num);

	for (int j = 1; j <= num; j++)
		result += j * j;

	printf("계산값은 %d입니다", result);

	return 0;
}