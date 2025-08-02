#include <stdio.h>
int main(void)
{
	double C, F;

	printf("화씨값을 입력하시오: ");
	scanf("%lf", &F);

	C = (5.0/9.0) * (F - 32.0);
	printf("섭씨값은 %.2f도 입니다.", C);

	return 0;
}