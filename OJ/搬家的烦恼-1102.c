#include <stdio.h>

int main1102()
{
	int N, K, n, i, num = 0;
	scanf("%d", &N);
	while (N--)
	{
		scanf("%d", &K);
		i = K;
		while (K--)
		{
			scanf("%d", &n);
			num += n;
		}
		printf("%d\n", num - i + 1);
		num = 0;
	}
	return 0;
}