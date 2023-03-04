#include <stdio.h>
#include <math.h>

int main1009()
{
	float x, i, j;
	float f = 0.0;
	scanf("%f", &x);
	if (x >= -20 && x < 0)
	{
		f = (x + 1) * (x + 1) + 2 * x + 1 / x;
	}
	if (x >= 0)
	{
		f = sqrt(x);
	}
	printf("%.2f", f);
	return 0;
}