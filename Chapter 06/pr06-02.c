#include <stdio.h>
int main(void)
{
	int num1, num2, num3, result;

	printf("정수 3개를 입력하시오: ");
	scanf("%d %d %d", &num1, &num2, &num3);

	if (num1 > num2 && num1 > num3)
		result = num1;
	else if (num2 > num1 && num2 > num3)
		result = num2;
	else
		result = num3;

	printf("가장 작은 정수는 %d입니다", result);

	return 0;
}