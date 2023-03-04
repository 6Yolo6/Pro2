#include <stdio.h>
#include <math.h>

int main1236()
{
	double x, y;
	scanf("%lf", &x);
	if (x <= -3)
		y = 4 / x;
	else if (x < 3)
		y = x * x;
	else
		y = sqrt(x);
	printf("%.3lf", y);
	return 0;
}