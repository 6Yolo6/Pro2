#include <stdio.h>

int main1165()
{
	int n, num = 0;
	scanf("%d", &n);
	while (n)
	{
		if ((num + 3) % 5 == 0 && (num - 3) % 6 == 0)
		{
			printf("%d\n", num);
			n--;
		}
		num++;
	}
	return 0;
}