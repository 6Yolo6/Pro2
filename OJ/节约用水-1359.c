#include <stdio.h>

int main1359()
{
	int x;
	double y;
	scanf("%d", &x);
	if (x < 0)
		y = 0;
	else if (x <= 15)
		y = 4.0 * x / 3;
	else
		y = 2.5 * x - 10.5;
	printf("%.2lf", y);
	return 0;
}