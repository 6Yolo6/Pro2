#include <stdio.h>

int main1251()
{
	double x, y;
	scanf("%lf", &x);
	if (x < 1)
		y = x;
	else if (x < 10)
		y = 2.0 * x - 1;
	else
		y = x * x - 11;
	printf("%.2lf", y);
	return 0;
}