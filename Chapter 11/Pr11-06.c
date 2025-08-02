//정수 배열의 요소들을 화면에 출력하는 함수 array_print()를 작성하고 테스트하라. 출력형식은 다음과 같은 형식이 되도록 하라.

#include <stdio.h>
#define SIZE 10

void array_print(int* A[], int size);

int main(void)
{
	int A[10] = { 1, 2, 3, 4, 5 };

	array_print(A, SIZE);

	return 0;
}

void array_print(int* A, int size)
{
	//배열을 화면에 출력하는 함수
	printf("A[%d] = { ", size);

	for (int i = 0; i < size; i++)
		printf("%d, ", A[i]);

	printf("}");
}