#include <stdio.h>
#include <math.h>

int main1598()
{
	int i, M, N, money, sum;
	scanf("%d%d", &M, &N);
	money = M, sum = money;
	for (i = 1; i < N; i++)
	{
		money = floor(money / 2);
		sum += money;
	}
	printf("%d %d", money, sum);
	return 0;
}