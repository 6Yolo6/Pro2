#include <stdio.h>

int main1600()
{
	int n, i, j, m = 0, flag = 0;
	scanf("%d", &n);
	for (i = n;; i++)
	{
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				flag = 0;
				break;
			}
			else
				flag = 1;
		}
		if (flag)
		{
			if ((i - 2) == m)
			{
				printf("%d %d", i - 2, i);
				break;
			}
			else
				m = i;
		}
	}
	return 0;
}