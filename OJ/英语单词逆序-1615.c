#include <stdio.h>
#include <string.h>

int main1615()
{
	int i, j = 0, k, n;
	char str1[101] = { 0 }, str2[101] = { 0 };
	gets(str1);
	n = strlen(str1);
	for (i = 0; i < n; i++)
	{
		if (str1[i] != ' ')
			str2[j++] = str1[i];
		if (str1[i] == ' ' && str1[i - 1] != ' ')
		{
			for (k = j - 1; k >= 0; k--)
				printf("%c", str2[k]);
			j = 0;
		}
		if (str1[i] == ' ')
			printf(" ");
	}
	return 0;
}