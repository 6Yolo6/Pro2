#include <stdio.h>
#include <string.h>

int main1338()
{
	int i, flag = 0, N, f[1005] = { 0 }, count = 0, maxCount = 0;
	char str[1005] = { 0 };
	scanf("%d", &N);
	getchar();
	while (N--) {
		gets(str);
		if (strcmp(str, "if") == 0) 
			f[0]++;
		else 
		{
			for (i = 0; i < 1001; i++)
			{
				if (f[i] != 0)
				{
					flag = 1;
					break;
				}
				else
					flag = 0;
			}
			if (flag) 
			{
				f[0]--;
				for (i = 0; i < 1001; i++)
				{
					if (f[i] != 0)
					{
						flag = 1;
						break;
					}
					else
						flag = 0;
				}
				if (flag) 
					count++;
				else 
				{
					maxCount = maxCount > count ? maxCount : count;
					count = 0;
				}
			}
			else
			{
				f[0]++;
				break;
			}
		}
	}
	for (i = 0; i < 1001; i++)
	{
		if (f[i] != 0)
		{
			flag = 1;
			break;
		}
		else
			flag = 0;
	}
	if (flag)
		printf("NO");
	else
		printf("%d", maxCount);
	return 0;
}