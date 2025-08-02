//정수 배열을 받아서 요소들을 난수로 채우는 함수 array_fill()를 작성하고 테스트하라. 난수는 라이브러리 함수인 rand()를 사용해 생성한다.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

void array_fill(int A[10], int size);

int main(void)
{

	int num[10] = { 0 };

	array_fill(num, SIZE);

	for (int i = 0; i < sizeof(num) / sizeof(int); i++)
		printf("%d ", num[i]);

	return 0;
}

void array_fill(int A[10], int size)
{
	srand((unsigned int)time(NULL));

	for (int i = 0; i < size; i++)
	{	
		A[i] = rand();

		int check = 1; //중복이면 1, 중복이 아니면 0;

		while (1)
		{
			check = 0;

				for (int j = 0; j < size; j++)
				{
					if (i != j && A[i] == A[j])
					{
						A[i] = rand();
						check = 1;
					}
				}

				if (check == 0)
					break;
		}
	}
}	


