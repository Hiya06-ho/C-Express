#include <stdio.h>
int main(void)
{
	int n, r, P;

	printf("n의 값: ");
	scanf("%d", &n);
	printf("r의 값: ");
	scanf("%d", &r);

	P = n;

	for (int i = r-1; i > 0; i--)
		P *= (n - i);

	printf("순열의 값은 %d입니다.", P);
	
	return 0;
}