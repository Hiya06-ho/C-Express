#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand((unsigned int)time(NULL));

	int human, computer, result;
	computer = 1 + rand() % 3;
	

	printf("(1:가위 2:바위 3:보) 중에서 하나를 선택하시오: ");
	scanf("%d", &human);

	if (computer == 1)
	{
		printf("컴퓨터는 가위를 선택하였습니다.\n");
		
		if (human == 1)
			result = 0;
		else if (human == 2)
			result = 1;
		else if (human == 3)
			result = 2;
		else
			printf("Error Code 1");
	}
	else if (computer == 2)
	{
		printf("컴퓨터는 바위를 선택하였습니다.\n");
	
		if (human == 1)
			result = 2;
		else if (human == 2)
			result = 0;
		else if (human == 3)
			result = 1;
		else
			printf("Error Code 2");
	
	
	}
	else if (computer == 3)
	{
		printf("컴퓨터는 보를 선택하였습니다.\n");
	
		if (human == 1)
			result = 1;
		else if (human == 2)
			result = 2;
		else if (human == 3)
			result = 0;
		else
			printf("Error Code 3");
	}
	else
		printf("Error Code 4");


	if (result == 0)
		printf("사용자가 비겼습니다");
	else if (result == 1)
		printf("사용자가 이겼습니다");
	else if (result == 2)
		printf("사용자가 졌습니다.");
	else
		printf("ErrorCode 5");

	return 0;
}