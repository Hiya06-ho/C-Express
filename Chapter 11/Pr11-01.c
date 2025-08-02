//실수를 받아서 정수부와 소수부로 분리하는 함수 get_frac(double f, int *pi, double*pd);를 작성하고 테스트해보자

#include <stdio.h>

void get_frac(double f, int* pi, double* pd);

int main(void)
{
	double num = 0;
	double* pd = 0;
	int pi = 0;

	printf("실수를 입력하시오: ");
	scanf("%lf", &num);

	get_frac(num, &pi, &pd);

	printf("정수부는 %d입니다.\n소수부는 %.2f입니다.\n", pi, pd);
	
}

void get_frac(double f, int *pi, double *pd)
{
	printf("\nget_frac(%.2f)이 호출되었습니다.\n", f);

	double j = f;
	int i = 0;
	
	//f의 정수부와 소수부를 분류해야함
	for (i = 0 ; j > 1; i++)
		j = j-1;

	j = f;
	*pi = i;
	*pd = j- i;


}