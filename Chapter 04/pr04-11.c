#include <stdio.h>
int main(void)
{
	printf("\"%c%c%c%c%c %c%c%c%c\", \'%c\', \'%c\', \'%c\'\n", 65, 83, 67, 73, 73, 99, 111, 100, 101, 65, 66, 67);
	printf("\\%c \\%c \\%c", 116, 97, 110);

	return 0;
}