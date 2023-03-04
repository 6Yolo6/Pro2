#include <stdio.h>
#include <string.h>

int main1336()
{
	int i, n, t, N = 0, M = 0;
	char ch[101] = {'\0'};
	gets(ch);
	n = strlen(ch);
	for (i = 0; i < n; i++)
	{
		if (ch[i] >= '1' && ch[i] <= '9')
		{
			N = ch[i] - 48;
			t = i;
			break;
		}
	}
	for (i = t + 1; i < n; i++)
	{
		if (ch[i] >= '1' && ch[i] <= '9')
		{
			M = ch[i] - 48;
			break;
		}
	}
	if (4 >= N && 4 <= M)
		printf("Yes\n");
	else
		printf("No\n");
	return 0;
}