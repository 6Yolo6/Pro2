#include <stdio.h>

int main1012()
{
	int time;
	float cost1, cost2;
	scanf("%d", &time);
	cost1 = time * 0.6;
	cost2 = time * 0.4 + 50;
	if (cost1 > cost2)
	{
		printf("%.2f", cost2);
	}
	if (cost2 > cost1)
	{
		printf("%.2f", cost1);
	}
	return 0;
}