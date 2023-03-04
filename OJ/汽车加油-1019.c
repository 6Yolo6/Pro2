#include <stdio.h>

int main1019()
{
	int i, N, K, oil, n = 0, count = 0;
	scanf("%d%d", &N, &K);
	n = N;
	for (i = 0; i <= K; i++)
	{
		scanf("%d", &oil);
		if (oil > N)
		{
			printf("No Solution");
			return 0;
		}
		n -= oil;
		if (n == 0)
		{
			count++;
			n = N;
		}
		else if (n < 0)
		{
			count++;
			n = N - oil;
		}
	}
	printf("%d", count);
	return 0;
}