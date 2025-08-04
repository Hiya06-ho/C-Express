#include <stdio.h>

int check_alpha(char c);

int main(void)
{
	char c;
	
	printf("문자를 입력하시오: ");
	scanf("%c", &c);

	if(check_alpha(c) == 0)
		printf("%c는 알파벳 문자입니다.", c);
	else
		printf("%c는 알파벳 문자가 아닙니다.", c);

	return 0;
}

int check_alpha(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return 0;
	else
		return 1;
}