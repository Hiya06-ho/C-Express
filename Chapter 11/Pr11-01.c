//�Ǽ��� �޾Ƽ� �����ο� �Ҽ��η� �и��ϴ� �Լ� get_frac(double f, int *pi, double*pd);�� �ۼ��ϰ� �׽�Ʈ�غ���

#include <stdio.h>

void get_frac(double f, int* pi, double* pd);

int main(void)
{
	double num = 0;
	double* pd = 0;
	int pi = 0;

	printf("�Ǽ��� �Է��Ͻÿ�: ");
	scanf("%lf", &num);

	get_frac(num, &pi, &pd);

	printf("�����δ� %d�Դϴ�.\n�Ҽ��δ� %.2f�Դϴ�.\n", pi, pd);
	
}

void get_frac(double f, int *pi, double *pd)
{
	printf("\nget_frac(%.2f)�� ȣ��Ǿ����ϴ�.\n", f);

	double j = f;
	int i = 0;
	
	//f�� �����ο� �Ҽ��θ� �з��ؾ���
	for (i = 0 ; j > 1; i++)
		j = j-1;

	j = f;
	*pi = i;
	*pd = j- i;


}