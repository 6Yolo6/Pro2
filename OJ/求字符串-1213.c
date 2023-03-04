#include <stdio.h>
#include <string.h>

int main1213()
{
	char ch[71] = {0};
	int N, i, j, a, b;
	gets(ch);
	N = strlen(ch);
	scanf("%d%d", &a, &b);
	i = a;
	if (a < 1)
		i = 1;
	if (b > N)
		b = N;
	for (j = i - 1; j < b; j++)
		printf("%c", ch[j]);
	return 0;
}