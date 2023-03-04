#include <stdio.h>

int main1031()
{
	int x, y, sum = 1;
	scanf("%d", &x);
	for (y = 2;y <= x / 2;y++)
	{
		if (x % y == 0)
			sum += y;
	}
	if (x == sum)
		printf("yes\n");
	else
		printf("no\n");
	return 0;
}