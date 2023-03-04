#include <stdio.h>

int main1241()
{
	int N, i, j = 1;
	double sum = 0.0;
	scanf("%d", &N);
	for (i = 1; i <= N; i++)
	{
		sum += j * 1.0 / i;
		j = -j;
	}
	printf("%.2lf", sum);
	return 0;
}