#include <stdio.h>
//define SQMETER_PER_PYEONG 3.3058

int main(void)
{
	const double SQMETER_PER_PYEONG = 3.3058;

	int pyeong;

	printf("평을 입력하세요: ");
	scanf("%d", &pyeong);

	printf("%f평방미터입니다.", SQMETER_PER_PYEONG * pyeong);

	return 0;
}