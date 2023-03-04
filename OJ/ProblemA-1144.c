#include <stdio.h>

int main1144()
{
	char a[1000] = { 0 };
	int T, i, count = 0, j, flag = 0;
	scanf("%d", &T);
	for (i = 0; i < T; i++)
	{
		flag = 0;
		count = 0;
		for (j = 0; j < 70; j++)
			a[j] = 0;
		scanf("%s", a);
		for (j = 2; j < 70; j++)
		{
			if (a[j] != '9')
				break;
			count++;
		}
		if (count >= 20)
		{
			for (j = 22; j < 70; j++)
			{
				if (a[j] >= '1' && a[j] <= '9')
				{
					flag = 1;
					break;
				}
			}
		}
		if (count >= 20 && flag == 1)
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;
}