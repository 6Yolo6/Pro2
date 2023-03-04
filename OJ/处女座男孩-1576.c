#include <stdio.h>

int main1576()
{
	char ch;
	int num, i, j;
	scanf("%c%d", &ch, &num);
	i = num % 10000 / 100;
	j = num % 100;
	if (ch == 'M' && (i == 8 || i == 9))
	{
		if (i == 8)
		{
			if (j >= 23 && j <= 31)
				printf("YES\n");
			else
				printf("NO\n");
		}
		if (i == 9)
		{
			if (j >= 1 && j <= 22)
				printf("YES\n");
			else
				printf("NO\n");
		}
	}
	else
		printf("NO\n");
	return 0;
}