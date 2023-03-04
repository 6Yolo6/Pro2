#include <stdio.h>

int main1193()
{
	int fz = 2, fm = 1;
	int i, n, t;
	double sum = 0.0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		sum += 1.0 * fz / fm;
		t = fz;
		fz = fz + fm;
		fm = t;
	}
	printf("%.2lf", sum);
	return 0;
}