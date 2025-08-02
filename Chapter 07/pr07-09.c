#include <stdio.h>
int main(void)
{
	//(x+y)/Euclidean_Algoritm

	int x, y,a,b, r=1, k;
	printf("정수 2개를 입력하시오.: ");
	scanf("%d %d", &x, &y);

	//유클리드 호재법 : 최대공약수
		a = x;
		b = y;
	
	while (y!=0)
	{
		r = x % y;
		x = y;
		y = r;
	}

	printf("최소공배수는 %d입니다.", (a*b)/x);

	return 0;
}