#include <stdio.h>

int main1279()
{
	char ch[51] = {0}, i;
	gets(ch);
	for (i = 0; ch[i]; i++)
	{
		if (ch[i] >= 'a' && ch[i] <= 'z')
			ch[i] -= 32;
	}
	puts(ch);
	return 0;
}