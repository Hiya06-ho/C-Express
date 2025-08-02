//���� �迭 A[]�� �ٸ� ���� �迭 B[]�� �����ϴ� �Լ��� �ۼ��ϰ� �׽�Ʈ�϶�.
//�ҿ� �ð� : 5�� 43��

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