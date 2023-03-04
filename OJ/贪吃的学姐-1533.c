#include <stdio.h>

int main1533()
{
	int i, j, candy[105] = { 0 }, date[105] = { 0 }, eat[105] = { 0 }, n, sum = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d%d", &candy[i], &date[i]);
	for (i = 0; i < n; i++)
		date[i]--;
	for (i = 0; i < n; i++)
	{
		j = date[i];
		if (!eat[j]) 
		{
			eat[j] = 1;
			sum += candy[i];
		}
		else
		{
			while (j > 0) 
			{
				if (!eat[j - 1]) 
				{
					eat[j - 1] = 1;
					sum += candy[i];
					break;
				}
				j--;
			}
		}
	}
	printf("%d", sum);
	return 0;
}