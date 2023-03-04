#include <stdio.h>

int sum = 0, sums[100000];
int main1419()
{
	int i, n, m, num, left, right;
	scanf("%d%d", &n, &m);
	for (i = 1; i <= n; i++)
	{
		scanf("%d", &num);
		sum += num;
		sums[i] = sum;
	}
	for (i = 1; i <= m; i++)
	{
		scanf("%d%d", &left, &right);
		printf("%d\n", sums[right] - sums[left - 1]);
	}
	return 0;
}
