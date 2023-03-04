#include <stdio.h>
#include <string.h>

int main1604()
{
	int i, n, k, j = 0;
	char string[100] = {0};
	gets(string);
	n = strlen(string);
	for (i = 0; i < n; i++)
	{
		if (string[i] == '.')
		{
			j++;
			if (j == 2)
			{
				k = i;
				for (i = k; i < n + 20; i++)
					string[i] = '\0';
			}
		}
	}
	puts(string);
	return 0;
}