//�迭�� double���� �Ǽ������� ����Ǿ� �ִ�. �� �Ǽ��� �߿��� �ִ밪�� ����� ��Ҹ� ã�Ƽ� ����� �ּҸ� ��ȯ�ϴ� ������ ���� �Լ��� �����ϰ� �׽�Ʈ�غ���.
#include <stdio.h>
#define SIZE 4

double* get_max(double* A, int size);

int main(void)
{
	double A[SIZE] = { 1.23, 3.14, 9.16, 100.90 };

	printf("A[] =");
	for (int i = 0; i < SIZE; i++)
		printf(" %.2f", A[i]);
	printf("\n");

	printf("�ִ밪�� %.2f�Դϴ�.", *get_max(A, SIZE));

	return 0;
}

double* get_max(double* A, int size)
{
	double* tmp = &A[0];

	for (int i = 0; i < size; i++)
	{
		if (A[i] > *tmp)
			tmp = &A[i];
	}

	return tmp;
}