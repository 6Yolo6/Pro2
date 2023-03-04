#include <stdio.h>

int main1328()
{
	int n, i, j, price, count = 0, num1[100] = {0}, num2[100] = { 100, 50, 10, 5, 2, 1 };
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &price);
		num1[i] = price;
	}
	for (i = 0; num1[i] != '\0'; i++)
	{
		for (j = 0; num2[j] != '\0'; j++)
		{
			count += num1[i] / num2[j];
			num1[i] %= num2[j];
		}
	}
	printf("%d\n", count);
	return 0;
}