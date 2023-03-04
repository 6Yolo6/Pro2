#include <stdio.h>

int main1472()
{
	int M, N, i, j, count = 0, sum = 0, x, flag;
	scanf("%d%d", &M, &N);
	if (M >= 2 && M < N)
		x = 1;
	else
		x = 0;
	if(x)
	{
		for (i = M; i <= N; i++)
		{
			flag = 1;
			for (j = 2; j < i; j++)
			{
				if (i % j == 0)
					flag = 0;
			}				
			if (flag == 1)
			{
				count++;
				sum += i;
			}
		}
		printf("%d %d", count, sum);
	}
	else
		printf("输入数据错误\n");
	return 0;
}