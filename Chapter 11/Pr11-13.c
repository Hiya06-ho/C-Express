//�������� ������ ����� �迭���� ������ 200������ ����� ã�� ���� ���� �ִ�. �־��� ���� �迭 A[]�� Ž���Ͽ� �迭 ����� �ε����� ��ȯ�ϴ� �Լ��� �ۼ��ϰ� �׽�Ʈ�϶�
//�ҿ�ð� : 10��

#include <stdio.h>
#define Search_value 200
#define SIZE 3

int search(int* A, int size, int search_value);

int main(void)
{
	int A[SIZE] = { 100, 200, 300 };
	
	printf("������ 200������ ����� �ε��� = %d", search(A, SIZE, Search_value));
	
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
