#include <stdio.h>
int main(void)
{
	const double One_Inch = 2.54;

	double cm, peet;
	double inch;

	printf("Ű�� �Է��Ͻÿ�(cm): ");
	scanf("%lf", &cm);

	inch = cm / One_Inch;
	peet = inch / 12;
	inch = inch - ((int)peet*12);


	printf("%.0f�� %.0f��Ʈ %.2f��ġ�Դϴ�.", cm, peet, inch);

	return 0;
}