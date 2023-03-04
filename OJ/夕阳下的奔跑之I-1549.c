#include <stdio.h>

int main1549()
{
	/*int N, L, i = 0, j, max = 0, count = 0, x[1050] = { 0 };
	scanf("%d%d", &N, &L);
	for (i = 0; i < N; i++)
		scanf("%d", &x[i]);
	for (i = 0; i < N; i++)
	{
		count = 0;
		for (j = i; j < N; j++)
		{
			if (x[j] - x[i] <= L)
				count++;
		}
		if (count > max)
			max = count;
	}
	printf("%d", max);*/
	int N, L, t, count = 1, i = 0, j = 0, k, x[1050] = { 0 }, y[1050] = { 0 };
	scanf("%d%d", &N, &L);
	t = L;
	for (i = 0; i < N; i++)
		scanf("%d", &x[i]);
	for (i = 0; i < N; i++)
	{
		if (i == N - 1)
		{
			y[j++] = count;
			break;
		}
		for (k = i; k < N - 1; k++)
		{
			if (x[k + 1] - x[k] <= L)
			{
				count++;
				L -= (x[k + 1] - x[k]);
				if (L < 0)
				{
					L = t;
					count--;
					y[j++] = count;
					count = 1;
					break;
				}
				if (L == 0)
				{
					L = t;
					y[j++] = count;
					count = 1;
					break;
				}
				if (L > 0 && k == N - 2)
				{
					y[j++] = count;
					count = 1;
					L = t;
					break;
				}
			}
			else
			{
				y[j++] = count;
				count = 1;
				L = t;
				break;
			}
		}
	}
	for (i = 0; i < 1025; i++)
		if (y[0] <= y[i])
			y[0] = y[i];
	printf("%d", y[0]);
	return 0;
}