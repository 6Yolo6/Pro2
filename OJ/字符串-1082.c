#include <stdio.h>

int main1082()
{
	int i, num, j, k;
	char ch1[100], ch2[100] = {0};
	scanf("%s", ch1);
	j = 0, k = 0;
	for (i = 0; ch1[i] != '\0'; i++)
	{
		if (ch1[i] == '#' && k == 0)
		{
			ch2[j] = ch1[i];
			j++;
		}
		else
		{
			k = 1;
			printf("%c", ch1[i]);
		}
	}
	for (j = 0; ch2[j] != '\0'; j++)
		printf("%c", ch2[j]);
	return 0;
}