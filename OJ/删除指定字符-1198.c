#include <stdio.h> 

int main1198()
{
	int i = 0, j = 0;
	char c, ch[110] = {0};
	gets(ch);
	c = getchar();
	for (i = 0; ch[i] != '\0'; i++)
		if (ch[i] != c)
			ch[j++] = ch[i];
	ch[j] = '\0';
	puts(ch);
	return 0;
}