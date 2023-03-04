#include <stdio.h>

int main1397()
{
	int x, m, n;
	double y;
	scanf("%d", &x);
	if (x > 10000)
	{
		m = x - 10000;
		y = (m) * 3.0 / 5 + 9850 * 1.0 / 3;
	}
	else if (x > 150)
	{
		n = x - 150;
		y = (n) * 1.0 / 3;
	}
	else
		y = 0;
	printf("%.2lf", y);
	return 0;
}