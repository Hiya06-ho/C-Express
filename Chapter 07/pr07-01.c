#include <stdio.h>
int main(void)
{
	int counter;

	printf("ī������ �ʱⰪ�� �Է��Ͻÿ�(����: ��):");
	scanf("%d", &counter);

	for (int i = counter; i > 0 ; i--)
		printf("%d\a ", i);

	return 0;
}