//���� �迭�� �޾Ƽ� ��ҵ��� ������ ä��� �Լ� array_fill()�� �ۼ��ϰ� �׽�Ʈ�϶�. ������ ���̺귯�� �Լ��� rand()�� ����� �����Ѵ�.
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

		int check = 1; //�ߺ��̸� 1, �ߺ��� �ƴϸ� 0;

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


