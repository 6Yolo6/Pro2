#include <stdio.h>

int main1226()
{
	int x, y, m, M, L, time;
	while (scanf("%d%d%d%d%d", &x, &y, &m, &M, &L) != EOF)
	{
		time = 0;
		while (L > 0)
		{
			L -= 4 * x;
			if (L < 0)
			{
				L += 4 * x;
				goto exit;
			}
			else if (L == 0)
			{
				time += 4;
				break;
			}
			time += 4;
		}
		exit:
		{
			while (L > 0)
			{
				L -= x;
				time++;
				if (L <= 0)
					break;
				if (time % 4 == 0 && M >= 3 && y >= x)
				{
					time++;
					L -= y;
					M -= m;
				}
			}
		}
		printf("%d\n", time);
	}
	return 0;
}