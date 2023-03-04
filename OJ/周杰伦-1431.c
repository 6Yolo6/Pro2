#include <stdio.h>

int main1431()
{
	int m, n, price[105] = { 0 }, i, cost = 0, count = 0, flag = 1;
	scanf("%d%d", &m, &n);
	for (i = 0; i < n; i++)
		scanf("%d", &price[i]);
	for (i = n - 1; i >= 0; i--)
	{
		cost += flag * price[i];
		count++;
		if (count == m)
		{
			count = 0;
			flag++;
		}
	}
	printf("%d", cost);
	return 0;
}