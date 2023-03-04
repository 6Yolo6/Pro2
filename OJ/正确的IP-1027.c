#include <stdio.h>
#include <string.h>

int main1027()
{
	int N, i, count, num, flag;
	char str[20] = { 0 };
	scanf("%d", &N);
	while (N--)
	{
		scanf("%s", str);
		num = 0;
		count = 0;
		flag = 0;
		for (i = 0; i < strlen(str); i++)
		{
			while (str[i] != '.' && i != strlen(str))
			{
				num = num * 10 + str[i] - '0';
				if (num > 255)
				{
					flag = 1;
					break;
				}
				i++;
			}
			count++;
			num = 0;
		}
		if (count == 4 && !flag)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}