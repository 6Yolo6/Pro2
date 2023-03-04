#include <stdio.h>

int main1497()
{
	int i, day = 0;
	double N, X, num, n = 0.0;
	scanf("%lf%lf", &N, &X);
	num = 0; n = X;
	while (num >= 0.0)
	{
		day++;
		num += n;
		if (num >= N)
			break;
		num -= 2.0;
		n *= 0.95;
	}
	if (num <= 0)
		printf("-1\n");
	else
		printf("%d\n", day);
	return 0;
}