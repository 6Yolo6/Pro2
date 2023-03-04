#include <stdio.h>

int main1231()
{
	int num = 0;
	int x, y, z;
	for (x = 1; x <= 9; x++)
	{
		for (y = 1; y <= 9; y++)
		{
			for (z = 1; z <= 9; z++)
			{
				if (x != y && x != z && y != z)
				{
					if ((x + y + z) % 2 == 1 && x < y && y < z)
					{
						num++;
					}
				}
			}
		}
	}
	printf("%d\n", num);
	return 0;
}
