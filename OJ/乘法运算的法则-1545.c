#include <stdio.h>

int main1545()
{
	int N, X, Y;
	scanf("%d", &N);
	while (N--)
	{
		scanf("%d%d", &X, &Y);
		if ((X * Y) < 0)
			printf("-\n");
		else
			printf("+\n");
	}
	return 0;
}