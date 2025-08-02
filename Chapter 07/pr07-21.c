#include <stdio.h>

int main(void)
{
	printf("컴퓨터가 당신이 생각하는 숫자를 알아맞히는 게임입니다.\n하나의 숫자를 생각하세요.\n컴퓨터가 제시한 숫자보다 정답이 높으면 1, 낮으면 -1라고 하세요.\n컴퓨터가 숫자를 맞히면 0라고 하세요.\n\n");

	int choose = 50;
	int answer;

	while (1)
	{
		printf("숫자가 %d 인가요?", choose);
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
			printf("잘못된 선택입니다.\n");
		}
	}

	return 0;
}