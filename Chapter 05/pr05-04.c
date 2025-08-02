#include <stdio.h>
int main(void)
{
	const double One_Inch = 2.54;

	double cm, peet;
	double inch;

	printf("키를 입력하시오(cm): ");
	scanf("%lf", &cm);

	inch = cm / One_Inch;
	peet = inch / 12;
	inch = inch - ((int)peet*12);


	printf("%.0f는 %.0f피트 %.2f인치입니다.", cm, peet, inch);

	return 0;
}