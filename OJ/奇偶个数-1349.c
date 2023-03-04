#include <stdio.h>

int main1349()
{
	int N, i, num1 = 0, num2 = 0;
	scanf("%d", &N);
	if (N == 0)
		num1 = 0, num2 = 1;
	if (N > 0)
	{
		while (N)
		{
			i = N % 10;
			if (i % 2 == 1)
				num1++;
			else
				num2++;
			N /= 10;
		}
	}
	else
	{
		N = -N;
		while (N)
		{
			i = N % 10;
			if (i % 2 == 1)
				num1++;
			else
				num2++;
			N /= 10;
		}
	}
	printf("%d,%d", num1, num2);
	return 0;
}