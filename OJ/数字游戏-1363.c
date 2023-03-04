#include <stdio.h>

int main1363()
{
	int A, count = 0, num;
	int x, y, z;
	scanf("%d", &A);
	for (x = A; x <= (A + 3); x++)
	{
		for (y = A; y <= (A + 3); y++)
		{
			for (z = A; z <= (A + 3); z++ )
			{
				if (x != y && x != z && y != z)
				{
					count++;
					printf("%d%d%d ", x, y, z);
					if (count % 6 == 0)
						printf("\n");
				}
			}
		}
	}
	return 0;
}