#include <stdio.h>

int is_leap(int year);

int main(void)
{
	int year;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &year);
	
	if (is_leap(year) == 0)
		printf("%d���� �����Դϴ�.", year);
	else
		printf("%d���� ������ �ƴմϴ�.", year);

	return 0;
}

int is_leap(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		return 0;
	else
		return 1;
}