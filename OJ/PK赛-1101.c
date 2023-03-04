#include <stdio.h.>

int main1101()
{
	int N;
	int round = 0;
	scanf("%d", &N);
	while (N > 1)
	{
		if (N % 2 == 0)
			N /= 2;
		else
		{
			--N;
			N /= 2;
			N++;
		}
		round++;
	}
	printf("%d", round);
	return 0;
}