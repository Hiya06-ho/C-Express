#include <stdio.h>
int main(void)
{
	int oil = 100, change;

	while (1)
	{
		printf("현재 연료량: %d\n", oil);

		if (oil < 20)
			printf("(경고) 연료가 20리터 미만입니다.\n");

		printf("연료 충전은 +, 연료 소모는 -로 입력해주세요: ");
		scanf("%d", &change);

		oil += change;

		printf("\n");
	}

	return 0;
}