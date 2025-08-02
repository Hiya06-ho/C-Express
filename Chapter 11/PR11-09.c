//학생들의 평점은 4.2이 만접이라고 하자. 배열 grades[]에 학생 10명의 학점이 저장되어 있는 것을 100점 만점으로 변환하여 배열 scores[]에 저장하는 함수를 작성하고 테스트하라.
//소요시간 : 8분 30초

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