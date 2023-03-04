#include <stdio.h>

int main1018()
{
	int N, i = 0, count = 0;
	char ch[10005] = { 0 };
	scanf("%d", &N);
	getchar();
	while (N--)
		scanf("%c", &ch[i++]);
	for (i = 0; ch[i] != '\0'; i++)
	{
		if (ch[i] == ch[i + 1])
		{
			count++;
			i++;
		}
	}
	printf("%d", count);
	return 0;
}