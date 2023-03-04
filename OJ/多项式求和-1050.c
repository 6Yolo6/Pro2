#include <stdio.h.>

int main1050()
{
	int m, i;
	double y = 1.0;
	scanf("%d", &m);
	for (i = 2; i <= 2 * m; i += 2)
		y += 1.0 / i;
	printf("%.2lf", y);
	return 0;
}