#include <stdio.h>

int main1049()
{
	int x;
	scanf("%d", &x);
	while (x > 0 && x < 10)
	{
		if (x * x % 10 == x)
		{
			printf("yes\n");
			break;
		}
		else
		{
			printf("no\n");
			break;
		}
	}
	return 0;
}