//���� �迭�� ��ҵ��� ȭ�鿡 ����ϴ� �Լ� array_print()�� �ۼ��ϰ� �׽�Ʈ�϶�. ��������� ������ ���� ������ �ǵ��� �϶�.

#include <stdio.h>
#define SIZE 10

void array_print(int* A[], int size);

int main(void)
{
	int A[10] = { 1, 2, 3, 4, 5 };

	array_print(A, SIZE);

	return 0;
}

void array_print(int* A, int size)
{
	//�迭�� ȭ�鿡 ����ϴ� �Լ�
	printf("A[%d] = { ", size);

	for (int i = 0; i < size; i++)
		printf("%d, ", A[i]);

	printf("}");
}