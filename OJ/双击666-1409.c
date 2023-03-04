#include <stdio.h>

int main1409()
{
	int i, N, count = 0, t = 0, cnt = 0;
	char ch[100] = {0}, ch2[5] = {'c', 'l', 'i', 'c', 'k'};
	scanf("%d", &N);
	t = N;
	while (N--)
	{
		scanf("%s", ch);
		for (i = 0; ch[i] != '\0'; i++)
		{
			if (ch[i] == ch2[i])
			{
				count++;
			}
		}
		if (count == 5)
		{
			cnt++;
			count = 0;
		}
	}
	if (cnt == t)
		printf("%d\n", cnt);
	else
		printf("666");
	return 0;
}