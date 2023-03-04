#include <stdio.h>

int main1305()
{
	int i, count = 0;
	char ch[101] = {0};
	gets(ch);
	for (i = 0; ch[i] != '\0'; i++)
		count++;
	for (i = 0; i < (count / 2); i++)
	{
		if (ch[i] != ch[count - (i + 1)])
			break;
	}
	if (i == count / 2)
		printf("Yes\n");
	else
		printf("No\n");
	return 0;
}
