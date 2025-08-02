#include <stdio.h>
int main(void)
{
	int num = 0, sum = 0, i = 0;

	while (1)
	{
		printf("숫자를 입력하세요");
		scanf("%d", &num);

		if (num > 0)
		{
			sum += num;
			i++;
		}
		else
			continue;

		if (i >= 3)
			break;
	}
	printf("\n합계는 %d입니다.", sum);

	return 0;
}