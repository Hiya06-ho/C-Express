#include <stdio.h>

int main(void)
{
	int income;

	printf("소득을 입력하시오(만원): ");
	scanf("%d", &income);

	printf("소득세는 %d만원입니다.", get_tax(income));

	return 0;
}

int get_tax(int income)
{
	if (income > 1000)
		return (80 + ((income - 1000) * 0.1));
	else
		return income * 0.08;	
}