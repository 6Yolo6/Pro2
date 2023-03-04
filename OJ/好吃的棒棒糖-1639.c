#include <stdio.h>

int main1639()
{
	int i, N, K, sweet, pre = 0, cnt = 1, sum = 0;
	scanf("%d%d", &N, &K);
	for (i = 0; i < N; i++)
	{
		scanf("%d", &sweet);
		if (i)
		{
			if (cnt == K && sum != 0)
			{
				printf("%d\n", sum);
				sum = 0;
				cnt = 0;
			}
			if (sweet < pre)
			{
				sum += sweet;
				cnt++;
				pre = sweet;
			}
			else
			{
				if (pre)
				{
					sum += (pre - 1);
					pre -= 1;
				}
				cnt++;
			}
		}
		else
		{
			pre = sweet;
			sum += sweet;
		}
	}
	if (i == N && sum != 0)
		printf("%d\n", sum);
	return 0;
}