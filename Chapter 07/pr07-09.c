#include <stdio.h>
int main(void)
{
	//(x+y)/Euclidean_Algoritm

	int x, y,a,b, r=1, k;
	printf("���� 2���� �Է��Ͻÿ�.: ");
	scanf("%d %d", &x, &y);

	//��Ŭ���� ȣ��� : �ִ�����
		a = x;
		b = y;
	
	while (y!=0)
	{
		r = x % y;
		x = y;
		y = r;
	}

	printf("�ּҰ������ %d�Դϴ�.", (a*b)/x);

	return 0;
}