#include <stdio.h>
int main(void)
{
	int Year_Money = 6000;
	printf("연봉을 입력하시오(단위: 만원): ");
	scanf("%d", &Year_Money);

	printf("10억을 모으는데 걸리는 시간(단위: 년): %.2f", (float)100000 / Year_Money);

	return 0;
}