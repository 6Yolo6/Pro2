#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int a[256][256], b[1000];
int main0()
{
	int n, m, i, j, t;
	srand((unsigned int)time(NULL));
	if (scanf("%d%d", &m, &n) != 2)
	{
		printf("Input error!\n");
		return 0;
	}
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			a[i][j] = rand() % 99 + 1;
			printf("%-4d", a[i][j]);
		}
		printf("\n");
	}
	for (i = 0; i < n; i++)
	{
		b[i] = a[0][i];
		for (j = 1; j < m; j++)
			if (b[i] < a[j][i]) 
				b[i] = a[j][i];
	}
	printf("The maximum value is:\n");
	for (i = 0; i < n; i++)
		printf("%-4d", b[i]);
	printf("\n");
	return 0;
}