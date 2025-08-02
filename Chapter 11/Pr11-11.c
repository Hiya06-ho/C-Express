//직원들의 기본급이 배열 A[]에 저장되어 있다, 배열 B[]에는 직원들의 보너스가 저장되어 있다. 본급과 보너스를 합하여 이번 달에 지급할 월급의 총액을 계산하고자 한다. A[]와 B[]를 더해 C[]에 저장하는 함수를 작성하고 테스트하라. 즉 모든 i에 대해 C[i]=A[i]+B[i]가 된다.
//소요시간 10분 23초

#include <stdio.h>
#define SIZE 10

void sum(int* A, int* B, int* C, int size);

int main(void)
{
	int A[SIZE] = { 1, 2, 3 };
	int B[SIZE] = { 4, 5, 6 };
	int	C[SIZE] = { 0 };

	sum(A, B, C, SIZE);

	printf("A[]=");
	for (int i = 0; i < SIZE; i++)
		printf(" %d", A[i]);
	printf("\n");

	printf("B[]=");
	for (int i = 0; i < SIZE; i++)
		printf(" %d", B[i]);
	printf("\n");

	printf("C[]=");
	for (int i = 0; i < SIZE; i++)
		printf(" %d", C[i]);
	printf("\n");


}


void sum(int* A, int* B, int* C, int size) 
{
	for (int i = 0; i < size; i++)
		C[i] = A[i] + B[i];

}