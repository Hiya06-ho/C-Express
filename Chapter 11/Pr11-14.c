//2개의 정수의 합과 차를 동시에 반환하는 함수를 작성하고 테스트하라. 포인터 매개 변수를 사용한다
//소요시간 : 10분 57초

#include <stdio.h>
#define SIZE 2

void result(int* A, int* B, int size, int* sum, int* min);

int main(void)
{
	int A = 100;
	int B = 200;

	int sum = 0;
	int min = 0;

	result(&A, &B, SIZE, &sum, &min);

	printf("원소들의 합 = %d\n원소들의 차 = %d", sum, min);

	return 0;
}

void result(int* A, int* B, int size, int* sum, int* min)
{
	*sum = *A + *B;
	*min = *A - *B;

}