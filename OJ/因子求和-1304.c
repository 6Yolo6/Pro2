#include <stdio.h>

int main1304()
{
	int num[50] = {0, 0, 1};
	int j, n, i, sum = 0;
	scanf("%d", &n);
	for (i = 3; i < n; i++)
	{
		num[i] = num[i - 3] + num[i - 2] + num[i - 1];
	}
	for (i = 0; i < n; i++)
	{
		sum += num[i];
	}
	printf("%d", sum);
	return 0;
}