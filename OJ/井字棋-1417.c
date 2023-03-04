#include <stdio.h>

int main1417()
{
	int i, j, flag = 0;
	char ch[5][5] = { 0 };
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			ch[i][j] = getchar();
		}
		/*
		for (j = 0; j < 3; j++)
			scanf(" %c", &ch[i][j]);
		*/
	}
	for (i = 0; i < 3; i++)
	{
		if (ch[i][0] == 'O' && ch[i][0] == ch[i][1] && ch[i][1] == ch[i][2])
		{
			printf("O");
			return 0;
		}
		else if (ch[i][0] == 'X' && ch[i][0] == ch[i][1] && ch[i][1] == ch[i][2])
		{
			printf("X");
			return 0;
		}
		else
			flag = 1;
	}
	for (j = 0; j < 3; j++)
	{
		if (ch[0][j] == 'O' && ch[0][j] == ch[1][j] && ch[1][j] == ch[2][j])
		{
			printf("O");
			return 0;
		}
		else if (ch[0][j] == 'X' && ch[0][j] == ch[1][j] && ch[1][j] == ch[2][j])
		{
			printf("X");
			return 0;
		}
		else
			flag = 1;
	}
	if ((ch[0][0] == ch[1][1] && ch[1][1] == ch[2][2]) || (ch[0][2] == ch[1][1] && ch[1][1] == ch[2][0]))
	{
		if (ch[1][1] == 'O')
		{
			printf("O");
			return 0;
		}
		if (ch[0][0] == 'X')
		{
			printf("X");
			return 0;
		}
	}
	else
		flag = 1;
	if (flag)
		printf("NO");
	return 0;
}