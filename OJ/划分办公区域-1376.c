#include <stdio.h>

 int main1376()
{
	int n, k, sum, count, ave, T, i, a[1001] = {0};
	scanf("%d", &T);
	while (T--)
	{
		sum = 0;
		count = 0;
		scanf("%d%d", &n, &k);
		for (i = 0; i < n; i++)
		{
			scanf("%d", &a[i]);
			sum += a[i];
		}
		if (sum % k == 0)
		{
			ave = sum / k; 
			i = 0;
			while (i != n)
			{
				while (a[i] > ave)				
				{
					a[i] -= ave;
					count++;
				}
				while (a[i] < ave)
				{
					a[i] += a[i + 1];
					a[i + 1] = a[i];
					count++;
					i++;         
				}
				if (a[i] == ave)
					i++;
			}
			printf("%d\n", count);
		}
		else
			printf("-1\n");
	}
	return 0;
}