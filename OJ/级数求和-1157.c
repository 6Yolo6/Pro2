#include <stdio.h>
#include <math.h>
#define EPS 1e-5

int main1157()
{
	int x, j = 1;
	double i = 1.0, sum = 0.0;
	scanf("%d", &x);
	do
	{
		sum += (1.0 * j) * x / i;
		j = -j;
		i++;
	} while (fabs(x / i) > EPS);
	printf("%.2lf", sum);
	return 0;
}