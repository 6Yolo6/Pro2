#include <stdio.h>

int main1454()
{
	int w, i, j, n, num[100] = {0}, weight, cost = 0;
	scanf("%d%d", &w, &n);
	for (i = 0; i < n; i++)
		scanf("%d", &num[i]);
	i = 0;
	j = n - 1;
	while (i <= j)
	{
		if (i == j)
		{
			cost += 10;
			break;
		}
		if (num[i] + num[j] <= w)
		{
			i++;
			j--;
			cost += 10;
		}
		else
		{
			j--;
			cost += 10;
		}
	}
	printf("%d\n", cost);
	return 0;
}