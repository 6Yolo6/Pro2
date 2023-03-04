#include <stdio.h>

int  main1561()
{
	int i, j, k = 0, flag = 0, sum = 0, min, t, N, s[105] = { 0 }, n1[55] = { 0 }, n[55] = { 0 };
	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		scanf("%d", &n[i]);
	}
	for (i = 1; i < N - 1; i++)
	{
		for (j = 0; j < N; j++)
			n1[j] = n[j];
		for (j = i; j < N - 1; j++)
			n1[j] = n[j + 1];
		n1[N - 1] = 0;
		for (j = 1; j < N - 1; j++)
		{
			if (n1[j] < n1[j - 1])
			{
				sum += n1[j - 1] - n1[j];
			}
			else
			{
				sum += n1[j] - n1[j - 1];
			}
		}
		s[k++] = sum;
		sum = 0;
	}
	min = s[0];
	for (i = 1; i < k; i++)
		min = min < s[i] ? min : s[i];
	printf("%d", min);
	return 0;
}