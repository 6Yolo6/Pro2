#include <stdio.h>

int main1622()
{
	char string[1000] = {0}, c;
	int i, num = 0, word = 0;
	gets(string);
	for (i = 0; (c = string[i]) != '\0'; i++)
	{
		if (c < 'A' || (c > 'Z' && c < 'a') || c > 'z')
			word = 0;
		else if (word == 0)
		{
			word = 1;
			num++;
		}
	}
	printf("%d\n", num);
	return (0);
}



