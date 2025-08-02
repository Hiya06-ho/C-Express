//�л����� ������ 4.2�� �����̶�� ����. �迭 grades[]�� �л� 10���� ������ ����Ǿ� �ִ� ���� 100�� �������� ��ȯ�Ͽ� �迭 scores[]�� �����ϴ� �Լ��� �ۼ��ϰ� �׽�Ʈ�϶�.
//�ҿ�ð� : 8�� 30��

#include <stdio.h>
#define SIZE 10

void convert(double* grades, double* scores, int size);

int main(void)
{
	double grades[SIZE] = { 0.0, 0.50, 1.0, 1.5, 2.0, 2.5, 3.0, 3.5, 4.0, 4.3 };
	double scores[SIZE] = { 0 };

	for (int i = 0; i < SIZE; i++)
		printf("%.2f ", grades[i]);
	printf("\n");

	convert(grades, scores, SIZE);

	for (int i = 0; i < SIZE; i++)
		printf("%.2f ", scores[i]);
	printf("\n");

	return 0;
}

void convert(double* grades, double* scores, int size)
{
	for (int i = 0; i < size; i++)
		scores[i] = grades[i]*100/4.3;
}