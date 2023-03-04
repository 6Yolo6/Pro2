#include <stdio.h>
#include <math.h>
#define EPS 1e-6

int main1134()
{
	int n = 1;
	double x, fz, fm, ex;
	scanf("%lf", &x);
	fz = 1; fm = 1; ex = 1;
	do
	{
		n++;
		fz *= x;
		fm = fm * (n - 1);
		ex += fz / fm;
	} while (fabs(fz / fm) > EPS);
	printf("%.3lf\n", ex);
	return 0;
}