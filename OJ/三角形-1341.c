#include <stdio.h>

int main1341()
{
	int i, a, b, c, d;
	scanf("%d%d%d%d", &a, &b, &c, &d);
	if (((a + b) > c && (a + c) > b && (b + c) > a) || ((a + b) > d && (a + d) > b && (b + d) > a) || ((b + c) > d && (b + d) > c && (c + d) > b))
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}