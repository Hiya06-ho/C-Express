#include <stdio.h>
int main(void)
{
	int counter;

	printf("카운터의 초기값을 입력하시오(단위: 초):");
	scanf("%d", &counter);

	for (int i = counter; i > 0 ; i--)
		printf("%d\a ", i);

	return 0;
}