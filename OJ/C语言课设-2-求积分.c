#include <stdio.h>
#define N 10000000

long double f(long double x)
{
	long double y;
	y = 1.0 / (x * x + 4.0 * x);
	return y;
}
int main2()
{
	long long i;
	long double s = 0;
	for (i = 0; i < N; i++)
		s += f(1.0 + (1.0 / N) * i) * (double)(1.0 / N);
	printf("%Lf", s);
	return 0;
}
