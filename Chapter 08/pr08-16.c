#include <stdio.h>
#include <stdlib.h>

int show_menu();			//�޴� ����
void check(int money);		//�ܾ�Ȯ��
int withdrawal(int money);	//���
void out();			//����
int deposit(int money);		//�Ա�
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

	printf("�޴��� �����Ͻÿ�: ");
	scanf("%d", &menu);

	return menu;
}

void check(int money)
{
	printf("�ܰ�� %d�Դϴ�\n", money);
}

int deposit(int money)
{
	int n;

	printf("�Ա� �ݾ��� �Է��Ͻÿ�: ");
	scanf("%d", &n);

	check(money + n);

	return n;
}

int withdrawal(int money)
{
	int n;

	printf("��� �ݾ��� �Է��Ͻÿ�: ");
	scanf("%d", &n);

	if (money < n)
	{
		n = 0;
		printf("�ܾ��� �����մϴ�.");
	}

	check(money - n);

	return n;
}

void out()
{
	printf("�����մϴ�");

	exit(0);
}

void error()
{
	printf("���� �޴��Դϴ�. �ٽ� �������ּ���\n");
}