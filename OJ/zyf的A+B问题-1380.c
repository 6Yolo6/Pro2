#include <stdio.h>

int main1380()
{
	int a, b, N, sum = 0;
	scanf("%d", &N);
	while (N--)
	{
		scanf("%x%x", &a, &b);
		printf("%d\n", a + b);
	}
	return 0;
}