#include <stdio.h>

int main1444()
{
	int n, m, count = 0;
	scanf("%d%d", &n, &m);
	if (n < 2 || (m + n) < 5 && n < 3)
		count = 0;
	else
	{
		while (n >= 2 && m > 2)
		{
			m -= 3;
			n--;
			count++;
		}
		if (n >= 3)
		{
			count += n / 2;
			n %= 2;
		}
	}
	printf("%d", count);
	return 0;
}