//�������� ������ �迭 A[]�� ����Ǿ� �ִٰ� ��������. �̹� �޿� ȸ�翡�� ������ ������ �Ѿ��� ����ϰ��� �Ѵ�. ������ �迭 ��ҵ��� ���� ���Ͽ� ��ȯ�ϴ� �Լ��� �ۼ��ϰ� �׽�Ʈ�϶�.
//�ҿ� �ð�

#include <stdio.h>
#define SIZE 10

void sum(int* A, int* result, int size);

int main(void)
{
	int A[SIZE] = { 1, 2, 3 };
	int result = 0;

	printf("A[]=");
	for (int i = 0; i < SIZE; i++)
		printf(" %d", A[i]);
	printf("\n");

	sum(A, &result, SIZE);

	printf("������ ��  = %d", result);


}

void sum(int* A, int* result, int size)
{
	for (int i = 0; i < size; i++)
		*result = *result + A[i];
}