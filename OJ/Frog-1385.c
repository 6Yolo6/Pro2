#include <stdio.h>

int main1385()
{
	int T, i, n, m, frog, chicken;
	scanf("%d", &T);
	for (i = 0; i < T; i++)
	{
		scanf("%d%d", &n, &m);
		for (frog = 0; frog <= n; frog++)
			for (chicken = 0; chicken <= n; chicken++)
				if ((frog + chicken == n) && (frog * 4 + chicken * 2 == m))
					printf("%d %d\n", frog, chicken);
	}
	return 0;
}