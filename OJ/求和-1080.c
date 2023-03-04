#include <stdio.h>

int main1080()
{
	int a, i;
	int j = 0, k = 0, s = 0;
	scanf("%d%d", &a, &i);
	while (j < i)
	{
		k = k * 10 + a;
		s += k;
		j++;
	}
	printf("%d", s);
	return 0;
}