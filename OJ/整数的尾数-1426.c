#include <stdio.h>

int main1426()
{
	int n, a, b;
	scanf("%d%d", &a, &b);
	for (n = a * 100; n <= a * 100 + 99; n++)
	{
		if (n % b == 0)
			printf("%d\n", n);
	}
	return 0;
}