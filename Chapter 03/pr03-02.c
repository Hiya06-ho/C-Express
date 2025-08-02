#include <stdio.h>
int main(void)
{
	double mile;
	printf("마일을 입력하시오: ");
	scanf("%lf", &mile);

	double meter = 1609 * mile;

	printf("%.1f 마일은 %.2f미터입니다.", mile, meter);

	return 0;
}