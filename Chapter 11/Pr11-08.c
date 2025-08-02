//배열에 double형의 실수값들이 저장되어 있다. 이 실수값 중에서 최대값이 저장된 요소를 찾아서 요소의 주소를 반환하는 다음과 같은 함수를 구현하고 테스트해보자.
#include <stdio.h>
#define SIZE 4

double* get_max(double* A, int size);

int main(void)
{
	double A[SIZE] = { 1.23, 3.14, 9.16, 100.90 };

	printf("A[] =");
	for (int i = 0; i < SIZE; i++)
		printf(" %.2f", A[i]);
	printf("\n");

	printf("최대값은 %.2f입니다.", *get_max(A, SIZE));

	return 0;
}

double* get_max(double* A, int size)
{
	double* tmp = &A[0];

	for (int i = 0; i < size; i++)
	{
		if (A[i] > *tmp)
			tmp = &A[i];
	}

	return tmp;
}