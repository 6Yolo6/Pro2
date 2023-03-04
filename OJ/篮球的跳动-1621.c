#include <stdio.h>

int main1621()
{
	double num, height;
	int N, i;
	scanf("%lf%d", &num, &N);
	height = num / 2.0;
	for (i = 2; i <= N; i++)
	{
		num += 2.0 * height;
		height /= 2.0;
	}
	printf("%.2lf %.2lf", num, height);
	return 0;
}