//�迭�� ����� ���� �������� ����ϴ� ���α׷��� �ۼ��϶�. �� �ε����� ������� �ʰ� �����͸��� ����غ���.
//����Լ��� �غ���

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
