#include <stdio.h>
#include <math.h>

int main1580()
{
	int R, A, N, hp = 100;
	double X, Y, x, y;
	scanf("%lf%lf", &X, &Y);
	scanf("%d%d", &R, &A);
	scanf("%d", &N);
	while (N--)
	{
		scanf("%lf%lf", &x, &y);
		if (sqrt((x - X) * (x - X) + (y - Y) * (y - Y)) <= R)
			hp -= A;
		if (hp <= 0)
		{
			hp = 0;
			break;
		}
	}
	printf("%d\n", hp);
	return 0;
}