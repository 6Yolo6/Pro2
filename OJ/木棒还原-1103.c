#include <stdio.h>

int main1103()
{
	int N, i, j, m, t, wood[105] = { 0 }, sum = 0;
	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		scanf("%d", &wood[i]);
	}
	for (m = 0; m < N - 1; m++)
	{
		for (i = 0; i < N - 1; i++)
		{
			for (j = i + 1; j < N; j++)
			{
				if (wood[i] >= wood[j])
				{
					t = wood[j];
					wood[j] = wood[i];
					wood[i] = t;
				}
			}
		}
		sum += wood[m] + wood[m + 1];
		wood[m + 1] = wood[m] + wood[m + 1];
	}
	printf("%d", sum);
	/*Ã»¹ý
	int N, wood[105] = { 0 }, i, s, j, left, right, sum = 0;
	scanf("%d", &N);
	for (i = 0; i < N; i++)
		scanf("%d", &wood[i]);
	for (i = 1; ; i++)
	{
		left = wood[i - 1] + wood[i];
		right = wood[i] + wood[i + 1];
		s = left <= right ? left : right;
		if (wood[i + 1] == 0)
		{
			sum += left;
			break;
		}
		else
		{
			sum += s;
		}
		wood[i] = s;
		if (left <= right)
		{
			for (j = i - 1; j < N; j++)
			{
				wood[j] = wood[j + 1];
			}
			i--;
		}
		else
		{
			for (j = i + 1; j < N; j++)
			{
				wood[j] = wood[j + 1];
			}
			i--;
		}
	}
	printf("%d", sum);*/
	return 0;
}