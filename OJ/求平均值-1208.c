#include <stdio.h>

int main1208()
{
	int N;
	double i, num, sum = 0.0, average = 0.0;
	scanf("%d", &N);
	for (i = 1.0; i <= N; i++)
	{
		scanf("%lf", &num);
		sum += num;
	}
	average = sum / N;
	printf("%.2lf", average);
	return 0;
}