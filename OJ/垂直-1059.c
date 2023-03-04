#include <stdio.h>

int main1059()
{
	int x1, y1, x2, y2, x3, y3, x4, y4, k1, k2, k3, k4, k5, k6;
	scanf("%d%d", &x1, &y1);
	scanf("%d%d", &x2, &y2);
	scanf("%d%d", &x3, &y3);
	scanf("%d%d", &x4, &y4);
	if (x1 == x2)
		k1 = 0;
	else
		k1 = (y2 - y1) / (x2 - x1);
	if (x1 == x3)
		k2 = 0;
	else
		k2 = (y3 - y1) / (x3 - x1);
	if (x1 == x4)
		k3 = 0;
	else
		k3 = (y4 - y1) / (x4 - x1);
	if (x3 == x2)
		k4 = 0;
	else
		k4 = (y3 - y2) / (x3 - x2);
	if (x4 == x2)
		k5 = 0;
	else
		k5 = (y4 - y2) / (x4 - x2);
	if (x3 == x4)
		k6 = 0;
	else
		k6 = (y4 - y3) / (x4 - x3);
	if (k1 * k2 == (-1) || k1 * k3 == (-1) || k1 * k4 == (-1) || k1 * k5 == (-1) || k1 * k6 == (-1) || k2 * k3 == (-1) || k2 * k4 == (-1) || k2 * k5 == (-1) || k2 * k6 == (-1))
	{
		printf("YES");
		return 0;
	}
	else if (k3 * k4 == (-1) || k3 * k5 == (-1) || k3 * k6 == (-1) || k4 * k5 == (-1) || k4 * k6 == (-1) || k5 * k6 == (-1))
	{
		printf("YES");
		return 0;
	}
	else
	{
		printf("NO");
		return 0;
	}
	return 0;
}