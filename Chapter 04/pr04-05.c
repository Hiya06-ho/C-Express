#include <stdio.h>
//define SQMETER_PER_PYEONG 3.3058

int main(void)
{
	const double SQMETER_PER_PYEONG = 3.3058;

	int pyeong;

	printf("���� �Է��ϼ���: ");
	scanf("%d", &pyeong);

	printf("%f�������Դϴ�.", SQMETER_PER_PYEONG * pyeong);

	return 0;
}