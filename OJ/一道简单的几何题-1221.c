#include <stdio.h>
#include <math.h>
#define PI acos(-1)

int main1221()
{
	int T, r1, r2, x1, y1, x2, y2;
	double area, l, p, s, t;
	scanf("%d", &T);
	while (T--)
	{
		scanf("%d%d", &r1, &r2);
		scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
		l = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
		if (l >= (r1 + r2))
			area = 0;
		else if (l <= abs(r1 - r2))
		{
			if (r1 <= r2)
				area = PI * r1 * r1;
			else
				area = PI * r2 * r2;
		}
		else
		{
			p = (l + r1 + r2) / 2;
			s = 2 * sqrt(p * (p - l) * (p - r1) * (p - r2));
			if (r1 > r2)
			{
				t = x1; x1 = x2; x2 = t;
				t = y1; y1 = y2; y2 = t;
				t = r1; r1 = r2; r2 = t;
			}
			area = acos((r1 * r1 + l * l - r2 * r2) / (2 * r1 * l)) * r1 * r1 + acos((r2 * r2 + l * l - r1 * r1) / (2 * r2 * l)) * r2 * r2 - s;
		}
		printf("%.6lf\n", area);
	}
	return 0;
}