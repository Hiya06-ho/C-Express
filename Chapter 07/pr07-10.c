#include <stdio.h>
int main(void)
{
	const int num = 100;

	for (int i = 2; i < num; i++)
	{
		int j;
		for ( j = 2; j < i; j++ )
		{
			if (i % j == 0)
				break;
		}
		
		if (j == i)
				printf("%d ", i);
	}

	return 0;
}