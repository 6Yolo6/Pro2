#include <stdio.h>
#include <math.h>
#define EPS 1e-6

int main1113()
{
	int n = 1;
	double x, fz, fm, sinx;
	scanf("%lf", &x);
	fz = x; fm = 1; sinx = x;
	do
	{
		n++;
		fz = -fz * x * x;
		fm = fm * (2 * n - 2) * (2 * n - 1);
		sinx += fz / fm;
	} while (fabs(fz / fm) > EPS);
	printf("%.3lf\n", sinx);
	return 0;
}