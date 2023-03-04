#include<stdio.h>

int main1324()
{
	char a[200] = {0}, b;
	int i;
	gets(a);
	b = a[0];
	for (i = 1; a[i] != '\0'; i++)
		if (b < a[i])
			b = a[i];
	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] != b)
			printf("%c", a[i]);
		else
			printf("%c%s", a[i], "find");
	}
	return 0;
}
