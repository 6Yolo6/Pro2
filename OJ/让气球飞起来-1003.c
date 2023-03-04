#include <stdio.h>
#include <string.h>

int main1003()
{
	int b[100] = { 0 }, x, i, j;
	char a[100][15];
	scanf("%d", &x);
	for (i = 0; i < x; i++)
		scanf("%s", &a[i]);
	for (i = 0; i < x; i++)
		for (j = i; j < x; j++)
			if (strcmp(a[i], a[j]) == 0)
				b[i]++;
	for (i = 0; i < x; i++)
		if (b[0] < b[i])
			strcpy(a[0], a[i]);
	printf("%s", a[0]);
	return 0;
}