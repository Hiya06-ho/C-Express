//�迭�� ����� ���� �������� ����ϴ� ���α׷��� �ۼ��϶�. �� �ε����� ������� �ʰ� �����͸��� ����غ���.

#include <stdio.h>
#define SIZE 10

int main(void)
{
	int A[10];
	for (int i = 0; i < SIZE ; i++)
		A[i] = i;

	printf("A[] = ");
	for (int i = 0; i < SIZE; i++)
		printf("%d ", *A + i);
	printf("\n");

	printf("A[] = ");
	for (int i = SIZE-1; i >= 0 ; --i)
		printf("%d ", *A + i);
	printf("\n");
	
	return 0;
}