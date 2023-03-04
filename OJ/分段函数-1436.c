#include <stdio.h>

int fun1(int N)
{
	int i, sum = 1;
	for (i = 1; i <= N; i++)
		sum *= i;
	return sum;
}

int main1436()
{
	int m, n, j;
	double result, x, y, z;
	scanf("%d,%d", &m, &n);
	if (m > n)
	{
		j = m - n;
		x = fun1(m);
		y = fun1(j);
		z = fun1(n);
		result = x / (y * z);
	}
	else
		result = 0;
	printf("%.2lf", result);
	return 0;
}