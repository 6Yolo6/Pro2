#include<stdio.h>

int main1591() 
{
	int m, i, t, n, count = 0;
	scanf("%d%d", &m, &n);
	for (i = 0; i < n; i++) 
	{
		scanf("%d", &t);
		if (t <= m) 
		{
			count++;
			m -= t;
		}
	}
	printf("%d", n - count);
	return 0;
}