#include <stdio.h> 

int main1295()
{
	int i, t, n, num[100], N;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &num[i]);
	scanf("%d", &t);
	for (i = n; i >= t - 1; i--)
	{
		num[i] = num[i - 1];
	}
	scanf("%d", &N);
	num[t - 1] = N;
	for (i = 0; i < n + 1; i++)
		printf("%d ", num[i]);
	return 0;
}