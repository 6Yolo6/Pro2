#include <stdio.h>

int main1373()
{
	int i, T, m, k, x, y, zyf, H, flag = 0; 
	scanf("%d", &T);
	while (T--)
	{
		scanf("%d%d%d%d", &m, &k, &x, &y);
		for (zyf = m, H = k + zyf; zyf <= 800 && H <= 800; zyf += y, H += x)
		{
			flag = 0;
			if (zyf >= H)
				flag = 1;
		}
		if (flag == 1)
			printf("T\n");
		else
			printf("F\n");
	}
	return 0;
}