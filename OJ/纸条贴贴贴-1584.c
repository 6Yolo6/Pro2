#include<stdio.h>

int main1584() 
{
	int i, N, t, start, end, count, max = 0;
	scanf("%d", &N);
	count = N;
	for (i = 0; i < N; i++) 
	{
	    t = max;
		scanf("%d%d", &start, &end);
		max = max > end ? max : end;
		if (start < t) 
		{
			count--;
			max = t < end ? t : end;
		}
	}
	printf("%d", count);
	return 0;
}
