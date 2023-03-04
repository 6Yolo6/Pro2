#include <stdio.h>

int main1181()
{
	int n, x, y, z, x1, x2, y1, y2, z1, z2, count = 0;
	scanf("%d", &n);
	scanf("%d%d", &x1, &x2);
	scanf("%d%d", &y1, &y2);
	scanf("%d%d", &z1, &z2);
	for (x = x1; x <= x2; x++)
	{
		for (y = y1; y <= y2; y++)
		{
			z = n - x - y;
			if (z >= z1 && z <= z2)
			{
				if ((x + y) > z && (y + z) > x && (x + z) > y && x <= y && y <= z)
					count++;
			}
		}
	}
	printf("%d\n", count);
	return 0;
}