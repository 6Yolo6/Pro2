#include <stdio.h>
#include <math.h>

int main000()
{
	int T, n;
	double i, j, num;
	scanf("%d", &T);
	while (T--)
	{
		scanf("%d", &n);
		i = n * log10(n) - (floor)(n * log10(n * 1.0));
		j = pow((double)10, i);
		printf("%d\n", (int)j);
	}
	return 0;
}