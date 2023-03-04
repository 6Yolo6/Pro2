#include <stdio.h>
#include <math.h>

int main1064()
{
	float x, y;
	float m, n;
	scanf("%f", &x);
	m = x - 1;
	n = x + 2;
	if (x >= 1)
		y = sqrt(m);
	else
		y = cos(n);
	printf("%.2f", y);
	return 0;
}