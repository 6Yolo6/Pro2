#include <stdio.h>

int main1460() 
{
	int ans1, ans2, cur, x, y, i; 
	char ch, str[1000] = {0}; 
	scanf("%d%d %c", &x, &y, &ch);
	getchar();
	if (ch == 'N') cur = 1;
	else if (ch == 'W') cur = 2;
	else if (ch == 'S') cur = 3;
	else if (ch == 'E') cur = 4;
	gets(str);
	for (i = 0; str[i] != '\0'; i++) 
	{
		ch = str[i];
		if (ch == 'G') 
		{
			if (cur == 1) y++;
			else if (cur == 2) x--;
			else if (cur == 3) y--;
			else if (cur == 4) x++;
		}
		else if (ch == 'R') 
		{
			if (cur == 1) cur = 4;
			else if (cur == 2) cur = 1;
			else if (cur == 3) cur = 2;
			else if (cur == 4) cur = 3;
		}
		else if (ch == 'L') 
		{
			if (cur == 1) cur = 2;
			else if (cur == 2) cur = 3;
			else if (cur == 3) cur = 4;
			else if (cur == 4) cur = 1;
		}
	}
	printf("%d %d ", x, y);
	if (cur == 1) printf("N");
	else if (cur == 2) printf("W");
	else if (cur == 3) printf("S");
	else if (cur == 4) printf("E");
	return 0;
}