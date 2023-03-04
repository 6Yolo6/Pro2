#include <stdio.h>

int main1367()
{
	int i, X, Y, year = 0, sum = 0, j, k;
	scanf("%d,%d", &X, &Y);
	for (i = X; i < Y; i++)
		if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
			year++;
	j = year * 366 * 24 * 60 * 75;
	sum = j + (Y - X - year) * 365 * 24 * 60 * 75;
	printf("%d", sum);
	return 0;
}