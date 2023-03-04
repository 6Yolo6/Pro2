#include <stdio.h>

int main1509()
{
	int N, M, i, j, flag = 0, id[205] = { 0 }, num[250] = { 0 };
	scanf("%d%d", &N, &M);
	for (i = 0; i < N; i++)
		scanf("%d", &id[i]);
	for (i = 0; i < N; i++)
	{
		flag = 0;
		for (j = 0; j < N; j++)
		{
			if (id[j] == id[i])
				flag++;
		}
		num[i] = flag;
	}
	for (i = 0; i < N; i++)
	{
		if (num[i] != 1)
			printf("%d\n", num[i] - 1);
		else
			printf("ZGS\n");
	}
	return 0;
}