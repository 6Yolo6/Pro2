#include <stdio.h>
#include <math.h>
#define PI 3.14159265

int main1375()
{
	int T;
	double x1, y1, x2, y2, k, x = 0.0, y = 0.0;
	scanf("%d", &T);
	while (T--)
	{
		scanf("%lf%lf%lf%lf%lf", &x1, &y1, &x2, &y2, &k);
		x = (x1 - x2) * cos((k / 180) * PI) + (y1 - y2) * sin((k / 180) * PI) + x2;
		y = (x2 - x1) * sin((k / 180) * PI) + (y1 - y2) * cos((k / 180) * PI) + y2;
		printf("%.2lf %.2lf\n", x, y);
	}
	return 0;
}
