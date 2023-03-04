#include <stdio.h>

int main1227()
{
	int T;
	double hp1, hurt1, speed1, hp2, hurt2, speed2, time1, time2;
	scanf("%d", &T);
	while (T--)
	{
		scanf("%lf%lf%lf%lf%lf%lf", &hp1,&hurt1,&speed1,&hp2,&hurt2,&speed2);
		time1 = time2 = 0;
		while (hp1 > 0)
		{
			hp1 -= hurt2;
			time2 += speed2;
		}
		while (hp2 > 0)
		{
			hp2 -= hurt1;
			time1 += speed1;
		}
		printf("%s\n", time1 < time2 ? "Yes" : "No");
	}
	return 0;
}