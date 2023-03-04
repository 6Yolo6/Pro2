#include <stdio.h>


int main1416()
{
	int a[1000] = { 0 }, b[1000] = { 0 };//∑≈mainÕ‚√Ê
	int i, t, n, max = 0, s = 0;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d", &n);
		for (i = 0; i < n; i++)
		{
			scanf("%d", &a[i]);
			s += a[i];
		}
		for (i = 0; i < n; i++)
		{
			scanf("%d", &b[i]);
			if (b[i] > max)
				max = b[i];
		}
		if (s <= max)
			printf("YES\n");
		else
			printf("NO\n");
		s = 0;
		b[n] = 0;
	}
	return 0;
}