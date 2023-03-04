#include <stdio.h>

int main1488()
{
	int num = 0;
	double M, N, money = 100.0;
	scanf("%lf", &M);
	while (money >= 5)
	{
		if (M > 5.0)
		{
			money -= M;
			if (money < 0)
				break;
			num++;
			M *= 0.9;
		}
		else
		{
			M = 5.0;
			money -= M;
			num++;
		}
	}
	printf("%d\n", num);
	return 0;
}