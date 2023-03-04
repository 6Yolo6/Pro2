#include <stdio.h>

int main1448()
{
	int a, b, c = 0, count = 0;
	scanf("%d%d", &a, &b);
	while (a || b)
	{
		c += (a % 10) + (b % 10);
		if (c >= 10)
		{
			count++;
			c /= 10;
		}
		else
			c = 0;
		a /= 10;
		b /= 10;
	}
	printf("%d\n", count);
	return 0;
}