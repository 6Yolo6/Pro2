#include <stdio.h>
#include <math.h>

int main1010()
{
	double a, b, c;
	double x1 = 0.0, x2 = 0.0;
	double m;
	scanf("%lf%lf%lf", &a, &b, &c);
	m = b * b - (4 * a * c);
	x1 = (- b + sqrt(m)) / (2 * a);
	x2 = (- b - sqrt(m)) / (2 * a);
	printf("x1=%.2lf x2=%.2lf", x1, x2);
	return 0;
}