#include <stdio.h>

int main1055()
{
	int n, m, f;
	scanf("%d%d", &n, &f);
	n --;
	while (n--)
	{
		scanf("%d", &m);
		f ^= m;
	}
	printf("%d", f);
	return 0;
}