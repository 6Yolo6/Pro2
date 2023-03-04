#include <stdio.h>
#include <math.h>

int main1110()
{
	int x, i, j;
	float y = 0;
	scanf("%d", &x);
	if (x > 1 && x < 100 && x % 2 == 0)
	{
		i = x + 2;
		y = sin(i);
	}
	else if (x > 100 && x % 2 == 1)
	{
		j = x - 1;
		y = 2 * sqrt(j);
	}
	else
	{
		y = x;
	}
	printf("%.2f", y);
	return 0;
}
