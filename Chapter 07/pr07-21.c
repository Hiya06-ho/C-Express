#include <stdio.h>

int main(void)
{
	printf("��ǻ�Ͱ� ����� �����ϴ� ���ڸ� �˾Ƹ����� �����Դϴ�.\n�ϳ��� ���ڸ� �����ϼ���.\n��ǻ�Ͱ� ������ ���ں��� ������ ������ 1, ������ -1��� �ϼ���.\n��ǻ�Ͱ� ���ڸ� ������ 0��� �ϼ���.\n\n");

	int choose = 50;
	int answer;

	while (1)
	{
		printf("���ڰ� %d �ΰ���?", choose);
		scanf("%d", &answer);

		if (answer == 0)
		{
			break;
		}
		else if (answer == -1) {
			choose = choose / 2;
		}
		else if (answer == 1) {
			choose = choose + (choose/2);
		}
		else {
			printf("�߸��� �����Դϴ�.\n");
		}
	}

	return 0;
}