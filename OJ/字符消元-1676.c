#include <stdio.h>
#include <string.h>

int main1676()
{
	int i;
	char str[85] = { 0 };
	gets(str);
	printf("%c", str[0]);
	for (i = 1; i < strlen(str); i++)
		if (str[i] != str[i - 1])
			printf("%c", str[i]);
	return 0;
}