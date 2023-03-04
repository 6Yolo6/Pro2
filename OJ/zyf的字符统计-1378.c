#include <stdio.h>

int main1378()
{
	int i, j, T, k = 0, n = 0, num[100] = {'\0'},l;
	char ch[100] = {0};
	scanf("%d", &T);
	while (T--)
	{
		scanf("%s", ch);
		for (i = 0; ch[i] != '\0'; i++)
		{
			for (j = 0; ch[j] != '\0'; j++)
			{
				if (ch[i] == ch[j])
					k++;
  			}
			num[i] = k;
			k = 0;
		}
		for (l = 0; l < i; l++)
		{
			if (num[0] < num[l])
			{
				num[0] = num[l];
				n = l;
			}
		}
		printf("%c\n", ch[n]);
	}
	return 0;
}