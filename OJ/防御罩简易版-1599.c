#include <stdio.h>

int main1599()
{
	int i, j, N, D, base[1005] = { 0 }, count = 0, flag = 0;
	scanf("%d%d", &N, &D);
	for (i = 0; i < N; i++)
		scanf("%d", &base[i]);
	for (i = 0; i < N; i++)
	{
		flag = 0;
		if (base[i])
			continue;
		else
		{
			for (j = i; j < i + D && j < N; j++)
				if (base[j] == 1)
					flag = 1;
			if (!flag && j != N)
			{
				count++;
				base[i + D - 1] = 1;
			}
		}
	}
	printf("%d", count);
	return 0;
}