#include <stdio.h>

int main1306()
{
	int i, j, s = 0, sum = 0, count = 1;
	char ch[51] = {'\0'};
	gets(ch);
	for (i = 0; ch[i] != '\0'; i++)
	{
		j = ch[i] - '0';
		if (j >= 0 && j <= 9)
		{
			j *= count;
			s += j;
			if (ch[i + 1] >= '0' && ch[i + 1] <= '9')
			{
				s *= 10;
				continue;
			}
			else
				count = 1;
		}
		else
		{
			if (ch[i] == '-')
				count = -count;
			else
				count = 1;
		}
		sum += s;
		s = 0;
	}
	printf("%d\n", sum);
	return 0;
}