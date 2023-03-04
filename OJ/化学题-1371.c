#include <stdio.h>

int main1371()
{
	int T, i, j, c = 0, h = 0, o = 0;
	char ch[101];
	scanf("%d", &T);
	for (i = 0; i < T; i++)
	{
		scanf("%s", ch);
		for (j = 0; ch[j] != '\0'; j++)
		{
			if (ch[j] == 'C')
				c++;
			if (ch[j] == 'H')
				h++;
			if (ch[j] == 'O')
				o++;
		}
		printf("%d\n", (c * 12) + h + (o * 16));
		c = 0; h = 0; o = 0;
	}
	return 0;
}