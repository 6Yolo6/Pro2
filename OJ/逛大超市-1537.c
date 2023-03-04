#include <stdio.h>

int main1537()
{
	int N;
	double price, sum = 0.0;
	scanf("%d", &N);
	while (N--)
	{
		scanf("%lf", &price);
		sum += price;
	}
	if (sum >= 0 && sum < 300)
		sum = sum;
	else if (sum < 500)
		sum *= 0.9;
	else
		sum *= 0.8;
	printf("%.2lf", sum);
	return 0;
}
