#include <stdio.h>

int main1261()
{
	double num = 100, height = 50;
	int N, i;
	scanf("%d", &N);
	for (i = 2; i <= N; i++)
	{
		num += 2.0 * height;
		height /= 2.0;
	}
	printf("%.2lf %.2lf", num, height);
	return 0;
}