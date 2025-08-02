#include <stdio.h>
#include <stdio.h>
#include <time.h>

int main(void) {
	int stick = 12;
	int takes = 0;

	for (; stick > 0; )
	{
		printf("현재 스틱의 개수: %d\n", stick);
		printf("몇개의 스틱을 가져가시겠습니까? : ");
		scanf("%d", &takes);
		stick -= takes;

		if (stick < 3)
		{
			takes = 1 + rand() % stick;
		} else {
			takes = 1 + rand() % 3;
		}

		stick -= takes;
		printf("컴퓨터는 %d개의 스틱을 가져갔습니다.\n\n", takes);
	}

	return 0;
}
