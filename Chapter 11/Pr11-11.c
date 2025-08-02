//�������� �⺻���� �迭 A[]�� ����Ǿ� �ִ�, �迭 B[]���� �������� ���ʽ��� ����Ǿ� �ִ�. ���ް� ���ʽ��� ���Ͽ� �̹� �޿� ������ ������ �Ѿ��� ����ϰ��� �Ѵ�. A[]�� B[]�� ���� C[]�� �����ϴ� �Լ��� �ۼ��ϰ� �׽�Ʈ�϶�. �� ��� i�� ���� C[i]=A[i]+B[i]�� �ȴ�.
//�ҿ�ð� 10�� 23��

#include <stdio.h>
#define SIZE 10

void sum(int* A, int* B, int* C, int size);

int main(void)
{
	int A[SIZE] = { 1, 2, 3 };
	int B[SIZE] = { 4, 5, 6 };
	int	C[SIZE] = { 0 };

	sum(A, B, C, SIZE);

	printf("A[]=");
	for (int i = 0; i < SIZE; i++)
		printf(" %d", A[i]);
	printf("\n");

	printf("B[]=");
	for (int i = 0; i < SIZE; i++)
		printf(" %d", B[i]);
	printf("\n");

	printf("C[]=");
	for (int i = 0; i < SIZE; i++)
		printf(" %d", C[i]);
	printf("\n");


}


void sum(int* A, int* B, int* C, int size) 
{
	for (int i = 0; i < size; i++)
		C[i] = A[i] + B[i];

}