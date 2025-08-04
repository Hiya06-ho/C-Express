#include <Stdio.h>
#include <stdlib.h>
#include <time.h>

int randint();

int main(void)
{
	srand((unsigned int)time(NULL));

	for (int i = 0; i < 10; i++)
		printf("%d ", randint());
}

int randint()
{
	return rand() % 81+10;
}