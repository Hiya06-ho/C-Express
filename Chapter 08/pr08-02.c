#include <Stdio.h>\

int is_multiple(int n, int m);

int main(void)
{
	int n, m;

	printf("ù ��° ������ �Է��Ͻÿ�: ");
	scanf("%d", &n);
	printf("�� ��° ������ �Է��Ͻÿ�: ");
	scanf("%d", &m);

	if (is_multiple(n, m) == 1)
		printf("%d�� %d�� ����Դϴ�.", n, m);
	else
		printf("%d�� %d�� ����� �ƴմϴ�.", n, m);

	return 0;
}

int is_multiple(n, m)
{
	if (n % m == 0)
		return 1;
	else
		return 0;
}