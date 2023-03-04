#include <stdio.h>

int main1290()
{
	char ch[51] = {0}, i;
	gets(ch);
	for (i = 0; ch[i]; i++)
	{
		if (ch[i] >= 'A' && ch[i] <= 'Z')
			ch[i] += 32;
	}
	puts(ch);
	return 0;
}