#include <stdio.h>

int main1016()
{
	int days = 0;
	int M, K;
	scanf("%d%d", &M, &K);
	while (2 <= K <= M && M <= 1000)
	{
		while (M)
		{
			M--;
			days++;
			if (days % K == 0)
				M++;
		}
		printf("%d", days);
	}	
	return 0;
}