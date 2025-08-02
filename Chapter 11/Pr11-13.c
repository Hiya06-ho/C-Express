//직원들의 월급이 저장된 배열에서 월급이 200만원인 사람을 찾고 싶을 때가 있다. 주어진 값을 배열 A[]에 탐색하여 배열 요소의 인덱스를 반환하는 함수를 작성하고 테스트하라
//소요시간 : 10분

#include <stdio.h>
#define Search_value 200
#define SIZE 3

int search(int* A, int size, int search_value);

int main(void)
{
	int A[SIZE] = { 100, 200, 300 };
	
	printf("월급이 200만원인 사람의 인덱스 = %d", search(A, SIZE, Search_value));
	
	return 0;
}

int search(int* A, int size, int search_value)
{
	for (int i = 0; i < SIZE; i++)
	{
		if (A[i] == search_value)
			return i;
	}
}
