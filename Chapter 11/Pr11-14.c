//2���� ������ �հ� ���� ���ÿ� ��ȯ�ϴ� �Լ��� �ۼ��ϰ� �׽�Ʈ�϶�. ������ �Ű� ������ ����Ѵ�
//�ҿ�ð� : 10�� 57��

#include <stdio.h>
#define SIZE 2

void result(int* A, int* B, int size, int* sum, int* min);

int main(void)
{
	int A = 100;
	int B = 200;

	int sum = 0;
	int min = 0;

	result(&A, &B, SIZE, &sum, &min);

	printf("���ҵ��� �� = %d\n���ҵ��� �� = %d", sum, min);

	return 0;
}

void result(int* A, int* B, int size, int* sum, int* min)
{
	*sum = *A + *B;
	*min = *A - *B;

}