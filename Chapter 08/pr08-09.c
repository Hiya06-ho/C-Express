#include <stdio.h>
#include <math.h>

double sin_degree(double degree);

int main(void)
{
	double i;

	for (i = 0; i <= 180; i = i + 10)
	{
		printf("sin(%f)ÀÇ °ªÀº %f\n", i, sin_degree(i));
	}

	return 0;
}

double sin_degree(double degree)
{
	return sin((3.1415 * degree) / 180.0);

}