#include <stdio.h>
#include <stdio.h>
#include <time.h>

int main(void) {
	int stick = 12;
	int takes = 0;

	for (; stick > 0; )
	{
		printf("���� ��ƽ�� ����: %d\n", stick);
		printf("��� ��ƽ�� �������ðڽ��ϱ�? : ");
		scanf("%d", &takes);
		stick -= takes;

		if (stick < 3)
		{
			takes = 1 + rand() % stick;
		} else {
			takes = 1 + rand() % 3;
		}

		stick -= takes;
		printf("��ǻ�ʹ� %d���� ��ƽ�� ���������ϴ�.\n\n", takes);
	}

	return 0;
}
