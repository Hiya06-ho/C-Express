//직원들의 월급이 배열 A[]에 저장되어 있다고 가정하자. 이번 달에 회사에서 지급할 월급의 총액을 계산하고자 한다. 정수형 배열 요소들의 합을 구하여 반환하는 함수를 작성하고 테스트하라.
//소요 시간

#include <stdio.h>
#define SIZE 10

void sum(int* A, int* result, int size);

int main(void)
{
	int A[SIZE] = { 1, 2, 3 };
	int result = 0;

	printf("A[]=");
	for (int i = 0; i < SIZE; i++)
		printf(" %d", A[i]);
	printf("\n");

	sum(A, &result, SIZE);

	printf("월급의 합  = %d", result);


}

void sum(int* A, int* result, int size)
{
	for (int i = 0; i < size; i++)
		*result = *result + A[i];
}