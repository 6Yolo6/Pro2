#include <stdio.h>

int count1(int M, int N)
{
	if (M == 1 || N == 1 || M == 0)
		return 1;
	else if (M < N)
		return count1(M, M);
	else
		return count1(M - N, N) + count1(M, N - 1);
}
int main1056()
{
	int T, M, N;
	scanf("%d", &T);
	while (T--)
	{
		scanf("%d%d", &M, &N);
		printf("%d\n", count1(M, N));
	}
	return 0;
}