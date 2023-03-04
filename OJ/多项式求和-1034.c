#include <stdio.h>

int main1034()
{
	int m, i;
	double y = 0.0;
	scanf("%d", &m);
	for (i = 1; i <= 2 * m + 1; i += 2)
		y += 1.0 / i;
	printf("%.6lf", y);
	return 0;
}