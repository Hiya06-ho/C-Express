#include <stdio.h>

int check_alpha(char c);

int main(void)
{
	char c;
	
	printf("���ڸ� �Է��Ͻÿ�: ");
	scanf("%c", &c);

	if(check_alpha(c) == 0)
		printf("%c�� ���ĺ� �����Դϴ�.", c);
	else
		printf("%c�� ���ĺ� ���ڰ� �ƴմϴ�.", c);

	return 0;
}

int check_alpha(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return 0;
	else
		return 1;
}