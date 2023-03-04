#include <stdio.h>

int main1284()
{
	/*
	char ch1[51];
	int i, j = 1;
	gets(ch1);
	for (i = 0; ch1[i] != '\0'; i++)
	{
		printf("%c", ch1[i]);
	}
	for (j = i - 1; j >= 0; j--)
	{
		printf("%c", ch1[j]);
	}
	*/
	char num[100] = { 0 };
	int i, j = 1;
	gets(num);
	for (i = strlen(num), j = strlen(num) - 1; j > 0; i++, j--)
	{
		num[i] = num[j];
	}
	num[i] = '\0';
	puts(num);
	return 0;
}