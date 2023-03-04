#include <stdio.h>
#include <math.h>

int prime1517(int n)
{
	int i;
	if (n == 2)
		return 1;
	if (n % 2 == 0)
		return 0;
	for (i = 3; i <= sqrt(n); i += 2)
		if (n % i == 0)
			return 0;
	return 1;
}
int pow10(int m)
{
	int i, sum = 1;
	for (i = 0; i < m; i++)
		sum *= 10;
	return sum;
}
int main1517()
{
	int t, temp, N, M = 0, num, count = 0;
	scanf("%d", &N);
	t = N;
	while (t)
	{
		t /= 10;
		M++;
	}
	while (prime1517(N))
	{
		if (N < 10)
		{
			printf("Yes");
			return 0;
		}
		t = N;
		while (t)
		{
			temp = t % 10;
			if (temp == 0 || temp == 2 || temp == 4 || temp == 5 || temp == 6 || temp == 8)
			{
				printf("No");
				return 0;
			}
			t /= 10;
		}
		num = (N / 10) + ((N % 10) * pow10(M - 1));
		if (count == M)
		{
			printf("Yes");
			return 0;
		}
		N = num;
		count++;
	}
	printf("No");
	return 0;
}