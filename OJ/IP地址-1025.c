#include <stdio.h>

int main1025()
{
	int N, i, sum = 0, flag = 0;
	char str[40] = { 0 };
	scanf("%d", &N);
	while (N--)
	{
		scanf("%s", str);
		for (i = 0; i < 32; i++)
		{
			sum = 2 * sum + str[i] - '0';
			if (i % 8 == 7)
			{
				if (flag)
					printf("%c", '.');
				printf("%d", sum);
				flag = 1;
				sum = 0;
			}
		}
		printf("\n");
		flag = 0;
	}
	return 0;
}