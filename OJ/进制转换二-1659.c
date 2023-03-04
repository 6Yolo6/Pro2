#include <stdio.h>
#include <string.h>

int main1659()
{
	int N, num = 0, i = 0, length, sum = 0;;
	char a[20] = { 0 };
	scanf("%s", a);
	getchar();
	scanf("%d", &N);
	length = strlen(a);
	for (i = 0; i < length; i++)
	{
		if (a[i] >= '0' && a[i] <= '9')
			num = a[i] - '0';
		else if (a[i] >= 'A' && a[i] <= 'F')
			num = a[i] - 'A' + 10;
		sum = sum * N + num;
	}
	printf("%d", sum);
	return 0;
}