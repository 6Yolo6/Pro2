#include <stdio.h>

int main1256()
{
	int N, i, j = 1;
	double sum = 1.0;
	scanf("%d", &N);
	for (i = 2; i <= N; i++)
	{
		sum += j * 1.0 / i;
		j = -j;
	}
	printf("%.2lf", sum);
	return 0;
}