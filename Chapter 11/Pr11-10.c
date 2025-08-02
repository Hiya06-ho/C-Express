//정수 배열 A[]를 다른 정수 배열 B[]에 복사하는 함수를 작성하고 테스트하라.
//소요 시간 : 5분 43초

#include <stdio.h>
#define SIZE 10

void cp(int* A, int* B, int size);

int main(void)
{
	int A[SIZE] = { 1, 2, 3};
	int B[SIZE] = { 0 };

	cp(A, B, SIZE);

	printf("A[] =");
	for (int i = 0; i < SIZE; i++)
		printf(" %d", A[i]);
	printf("\n");

	printf("B[] =");
	for (int i = 0; i < SIZE; i++)
		printf(" %d", B[i]);
	printf("\n");

	return 0;
}

void cp(int* A, int* B, int size)
{
	for (int i = 0; i < size; i++)
		B[i] = A[i];

}