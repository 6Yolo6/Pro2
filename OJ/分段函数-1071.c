#include <stdio.h>
#include <math.h>

int main1071()
{
	float x, y, m;
	scanf("%f", &x);
	m = x + 3;
	if (x < 1)
		y = x + 1;
	else if (x <= 3)
		y = 2 * sqrt(x) - 1;
	else
		y = cos(m);
	printf("%.2f", y);
	return 0;
}