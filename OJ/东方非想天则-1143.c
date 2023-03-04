#include <stdio.h>

int main1143()
{
	int N, i, j, mood = 80, count = 0, flag = 0;
	char ch[200] = { 0 };
	while (scanf("%d", &N) != EOF && N != 0)
	{
		getchar();
		gets(ch);
		for (j = 0; ch[j] != '\0'; j++)
		{
			if (ch[j] != ' ')
				count++;
			if (ch[j] == 'S')
				mood += 5;
			if (ch[j] == 'Z')
				mood += 1;
			if (ch[j] == 'C')
				mood -= 20;
			if (mood <= 0)
			{
				printf("%d\n", count);
				break;
			}
			if (mood >= 100)
				mood = 100;
		}
		count = 0;
		mood = 80;
	}
	return 0;
}