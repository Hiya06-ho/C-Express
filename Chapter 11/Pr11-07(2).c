//배열에 저장된 값을 역순으로 출력하는 프로그램을 작성하라. 단 인덱스를 사용하지 않고 포인터만을 사용해보자.
//재귀함수로 해보기

#include <stdio.h>
#define SIZE 10
void minas(int* B, int i);

int main(void)
{
	int A[10];
	for (int i = 0; i < SIZE; i++)
		A[i] = i;

	printf("A[] = ");

	minas(A, SIZE - 1);

	return 0;
}

void minas(int *B, int i)
{
	printf("%d ", B[i]);

	if (i == 0)
		return;

	 minas(B, i-1);
}
