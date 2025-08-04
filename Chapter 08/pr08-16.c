#include <stdio.h>
#include <stdlib.h>

int show_menu();			//메뉴 선택
void check(int money);		//잔액확인
int withdrawal(int money);	//출금
void out();			//종료
int deposit(int money);		//입금
void error();

int main(void)
{
	int money = 0;
	int menu;

	while (1)
	{		
		menu = show_menu();

		if (menu == 1)
			check(money);
		else if (menu == 2)
			money = money + deposit(money);
		else if (menu == 3)
			money = money - withdrawal(money);
		else if (menu == 4)
			out();
		else
			error();

	}


	return 0;
}

int show_menu()
{
	int menu;

	printf("메뉴를 선택하시오: ");
	scanf("%d", &menu);

	return menu;
}

void check(int money)
{
	printf("잔고는 %d입니다\n", money);
}

int deposit(int money)
{
	int n;

	printf("입금 금액을 입력하시오: ");
	scanf("%d", &n);

	check(money + n);

	return n;
}

int withdrawal(int money)
{
	int n;

	printf("출금 금액을 입력하시오: ");
	scanf("%d", &n);

	if (money < n)
	{
		n = 0;
		printf("잔액이 부족합니다.");
	}

	check(money - n);

	return n;
}

void out()
{
	printf("종료합니다");

	exit(0);
}

void error()
{
	printf("없는 메뉴입니다. 다시 선택해주세요\n");
}