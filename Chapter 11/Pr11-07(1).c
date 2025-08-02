//배열에 저장된 값을 역순으로 출력하는 프로그램을 작성하라. 단 인덱스를 사용하지 않고 포인터만을 사용해보자.

#include <stdio.h>
#define SIZE 10

int main(void)
{
	int A[10];
	for (int i = 0; i < SIZE ; i++)
		A[i] = i;

	printf("A[] = ");
	for (int i = 0; i < SIZE; i++)
		printf("%d ", *A + i);
	printf("\n");

	printf("A[] = ");
	for (int i = SIZE-1; i >= 0 ; --i)
		printf("%d ", *A + i);
	printf("\n");
	
	return 0;
}