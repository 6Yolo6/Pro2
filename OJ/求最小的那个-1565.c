#include <stdio.h>
#include <string.h>

int main1565()
{
	int i, T, len, count = 0;
	char ch, str[205] = { 0 }, str3[205] = { 0 };
	scanf("%d", &T);
	getchar();
	while (T--)
	{
		gets(str);
		len = strlen(str);
		for (i = 0; i < len; i++)
			str3[i] = str[i];
		while (count++ != len - 1)
		{
			ch = str[len - 1];
			str[len - 1] = '\0';
			for (i = len - 2; i >= 0; i--)
				str[i + 1] = str[i];
			str[0] = ch;
			if (strcmp(str, str3) < 0)
				for (i = 0; i < len; i++)
					str3[i] = str[i];
		}
		puts(str3);
		for (i = 0; i < len; i++)
			str3[i] = '\0';
		count = 0;
	}
	return 0;
}