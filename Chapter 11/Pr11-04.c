//������ �迭�� �����غ���. �迭�� ��ҿ��� ���� H, E, L, L, O�� ����Ǿ� �ְ� �� ������ 0�� �����Ų��. ����� ���ڵ��� ������ ��� ��ȯ�ϴ� �Լ� my_strlen(char *p)�� �ۼ��ϰ� �׽�Ʈ�غ���. �̰��� ������ C�� ���ڿ��� �����ϴ� ����̴�.
/*
����� ���ڿ� = HELLO
���ڿ��� ���� = 5
*/

#include <stdio.h>

int my_strlen(char* p);

int main(void)
{
	char A[6] = { 'H', 'E', 'L', 'L', 'O', 0};

	printf("����� ���ڿ� = ");
	
	for (int i = 0; i < sizeof(A); i++)
		printf("%c", A[i]);

	printf("\n���ڿ��� ���� = %d", my_strlen(A));

	return 0;
}

int my_strlen(char* p)
{
	int i = 0;

	for (i = 0; p[i] != 0; i++);

	return i;
}