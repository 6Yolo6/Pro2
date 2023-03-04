#include <stdio.h>

int min_(int a, int b)
{
	return a < b ? a : b;
}
int main1026()
{
	int N, i, i1, i2, i3, j1, j2, j3, ugly[2000] = {0,1};
	while (scanf("%d", &N) != EOF && N)
	{
		i1 = i2 = i3 = 1;
		for (i = 2; i < 1500; i++)
		{
			j1 = ugly[i1] * 2;
			j2 = ugly[i2] * 3;
			j3 = ugly[i3] * 5;
			ugly[i] = min_(j1, min_(j2, j3));
			if (ugly[i] == j1)
				i1++;
			if (ugly[i] == j2)
				i2++;
			if (ugly[i] == j3)
				i3++;
		}
		printf("%d\n", ugly[N]);
	}
	return 0;
}