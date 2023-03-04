#include <stdio.h>

int main1469()
{
	int num[10], i, j, N, t = 0;
	for (i = 0; i < 9; i++)
		scanf("%d,", &num[i]);
	scanf("%d", &N);
	num[9] = N;
	for (i = 0; i < 9; i++)
		for (j = i + 1; j < 10; j++)
			if (num[i] > num[j])
			{t = num[i]; num[i] = num[j]; num[j] = t;}
	for (i = 0; i < 9; i++)
		printf("%d,", num[i]);
	printf("%d", num[9]);
	return 0;
}