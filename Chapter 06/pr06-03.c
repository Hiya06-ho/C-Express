#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand((unsigned int)time(NULL));

	int human, computer, result;
	computer = 1 + rand() % 3;
	

	printf("(1:���� 2:���� 3:��) �߿��� �ϳ��� �����Ͻÿ�: ");
	scanf("%d", &human);

	if (computer == 1)
	{
		printf("��ǻ�ʹ� ������ �����Ͽ����ϴ�.\n");
		
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
		printf("��ǻ�ʹ� ������ �����Ͽ����ϴ�.\n");
	
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
		printf("��ǻ�ʹ� ���� �����Ͽ����ϴ�.\n");
	
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
		printf("����ڰ� �����ϴ�");
	else if (result == 1)
		printf("����ڰ� �̰���ϴ�");
	else if (result == 2)
		printf("����ڰ� �����ϴ�.");
	else
		printf("ErrorCode 5");

	return 0;
}