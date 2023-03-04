#include <stdio.h>

int main1057()
{
	int n, i, num, a[10] = {0};
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		num = i;
		while (num > 0)
		{
			a[num % 10]++;
			num /= 10;
		}
	}
	for (i = 0; i < 10; i++)
		printf("%d\n", a[i]);
	return 0;
}