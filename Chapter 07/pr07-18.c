#include <stdio.h>
int main(void)
{
	int times;
	double sum = 0;

	printf("항의 개수: ");
	scanf("%d", &times);
	
	for (int i = 1; i <= times; i++)
		sum += 1 / (double)i;
	
	printf("수열의 합 = %f", sum);

	return 0;
}