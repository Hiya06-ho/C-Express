#include <stdio.h>
int main(void)
{
	int Year_Money = 6000;
	printf("������ �Է��Ͻÿ�(����: ����): ");
	scanf("%d", &Year_Money);

	printf("10���� �����µ� �ɸ��� �ð�(����: ��): %.2f", (float)100000 / Year_Money);

	return 0;
}