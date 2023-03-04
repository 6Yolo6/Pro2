#include <stdio.h>

double a[200][80] = { 0 };
int main4()
{
	double a0, a1, a2, num[90] = { 0 };
	int i, j, y;
	scanf("%lf%lf%lf", &a0, &a1, &a2);
	for (i = 1; i <= 79; i++)
	{
		a[101][i] = 1;
	}
	for (i = 1; i < 181; i++)
	{
		a[i][40] = 2;
	}
	for (i = -39, j = 1; i <= 39; i++, j++)
	{
		num[j] = a0 + a1 * i + a2 * i * i;
	}
	for (i = 1; i <= 79; i++)
	{
		y = num[i];
		if (y >= 100 || y <= -100)
			continue;
		y = 101 - y;
		a[y][i] = 3;
	}
	for (i = 1; i <= 201; i++)
	{
		for (j = 1; j <= 79; j++)
		{
			if (a[i][j] == 1)
				printf("-");
			else if (a[i][j] == 2)
				printf("|");
			else if (a[i][j] == 3)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}