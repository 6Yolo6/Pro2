#include <stdio.h>
#include <math.h>
#define PI 3.14159265

int main1053()
{
	double x, y, z, r;
	scanf("%lf%lf%lf", &x, &y, &z);
	r = sqrt(x * x + y * y + z * z);
	printf("%.2lf", (4 * PI * r * r * r) / 3);
	return 0;
}