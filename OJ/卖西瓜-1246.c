#include<stdio.h>

int main1246()
{
	int N, t, sum, day = 0;
	scanf("%d", &N);
	t = N;
	for (sum = 0; sum < t; sum += N)
	{
		if (N % 2 == 1)
			N = (N + 1) / 2;
		else
			N /= 2;
		day++;
	}
	printf("%d\n", day);
	return 0;
}
