#include <stdio.h>
int main(void)
{
	int n, r, P;

	printf("n�� ��: ");
	scanf("%d", &n);
	printf("r�� ��: ");
	scanf("%d", &r);

	P = n;

	for (int i = r-1; i > 0; i--)
		P *= (n - i);

	printf("������ ���� %d�Դϴ�.", P);
	
	return 0;
}