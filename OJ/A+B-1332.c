#include <stdio.h>

int main1332()
{
	char str[2000] = {0};
	int time, hour, minute, second, flag = 0;
	gets(str);
	hour = (str[3] - 48) * 10 + str[4] - 48;
	minute = (str[6] - 48) * 10 + str[7] - 48;
	second = (str[9] - 48) * 10 + str[10] - 48;
	scanf("%d", &time);
	second += time;
	while (second >= 60)
	{
		minute++;
		second -= 60;
		while (minute >= 60)
		{
			hour++;
			minute -= 60;
			if (hour >= 12)
				flag++;
			while (hour > 12)
			{
				hour -= 12;
				flag++;
			}
			if (str[0] == 'A')
			{
				if (flag % 2 == 0)
					str[0] = 'A';
				else
					str[0] = 'P';
			}
			else
			{
				if (flag % 2 == 0)
					str[0] = 'P';
				else
					str[0] = 'A';
			}
		}
	}
	printf("%c%c %02d:%02d:%02d", str[0], str[1], hour, minute, second);
	return 0;
}