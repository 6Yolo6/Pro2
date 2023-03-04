#include <stdio.h>

int main1635()
{
	int i, num, flag = 0, n1[5] = { 0 }, n2[2] = { 0 };
	scanf("%d", &num);
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &n1[i]);
	}
	for (i = 0; i < 2; i++)
	{
		scanf("%d", &n2[i]);
	}
	for (i = 0; i < 2; i++)
	{
		if (num == n2[i])
		{
			flag = 1;
			break;
		}
		else
		{
			flag = 0;
		}
	}
	if (flag == 1)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	return 0;
}