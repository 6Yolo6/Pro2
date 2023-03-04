#include <stdio.h>

int main1553()
{
	char str[1000][1000] = { 0 }, ch[1000] = { 0 }; //放main外面，不然OJ过不去!
	int T, temp, m, n, i, j, t, max, count[40] = { 0 };
	scanf("%d", &T);
	for (temp = 0; temp < T; temp++)
	{
		scanf("%d%d", &m, &n);
		getchar();
		for (i = 0; i < m; i++)
		{
			gets(ch);
			for (j = 0; j < n; j++)
				str[i][j] = ch[j];
		}
		for (j = 0; j < n; j++)
		{
			for (i = 0; i < m; i++)
				count[str[i][j] - 'A']++;
			max = 0;
			for (i = 0; i < 4; i++)
			{
				if (max < count[i])
				{
					max = count[i];
					t = i;
				}
			}
			printf("%c", t + 65);
			for (i = 0; i < 4; i++)
				count[i] = 0;
		}
		printf("\n");
	}
	return 0;
}
