#include <stdio.h>

int main1117()
{
	char ch1[100], ch2[100];
	int i, j = 0, t = 0;
	scanf("%s", ch1);
	for (i = 0; ch1[i] != '\0'; i++)
	{
		if (ch1[i] <= '9' && ch1[i] >= '0' && t == 0)
		{
			ch2[j] = ch1[i];
			j++;
		}
		else
		{
			printf("%c", ch1[i]);
			t = 1;
		}
	}
	for (i = 0; ch2[i] != '\0'; i++)
	{
		printf("%c", ch2[i]);
	}
	return 0;
}