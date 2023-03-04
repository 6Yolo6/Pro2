#include <stdio.h>
#include <string.h>

int judge1405(char c[])
{
	int i;
	for (i = 0; i < strlen(c); i++)
		if (c[0] != c[i])
			return 0;
	return 1;
}
int main1405()
{
	int i, l, t = 0, score1 = 0, score2 = 0;
	char str1[100] = { 0 }, str2[100] = { 0 }, str3[100] = { 0 };
	gets(str1);
	gets(str2);
	l = strlen(str1);
	for (i = 0; i < l; i++)
	{
		if (str2[i] == str1[i])
			score1 += 2;
		else if (str2[i] != ' ')
			score2 += 2;
	}
	score1 -= score2;
	for (i = 0; i < l; i++)
		if (str2[i] != ' ')
			str3[t++] = str2[i];
	if (judge1405(str3))
		score1 = 0;
	if (score1 >= 2)
		printf("%d", score1);
	else
		printf("0");
	return 0;
}