#include <stdio.h>

int main1219()
{
	int T, n, m, f;
	scanf("%d", &T);
	while (T--)
	{
		scanf("%d%d", &n, &f);
		n--;
		while (n--)
		{
			scanf("%d", &m);
			f ^= m;
		}
		printf("%d\n", f);
	}
	return 0;
}