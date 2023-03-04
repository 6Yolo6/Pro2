#include <stdio.h>

int main1100()
{
	double i = 2.0;
	int j = 1;
	int x;
	double sum = 1.0;
	scanf("%d", &x);
	while (i <= 100)
	{
		sum += (1.0 * j) * x / i;
		j = -j;
		i++;
	}
	printf("%.2lf", sum);
	return 0;
}