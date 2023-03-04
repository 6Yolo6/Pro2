#include <stdio.h>

int main6()
{
	int i, j, k, t, N, cnt1 = 0, cnt2 = 0, num[105] = { 0 }, num2[105] = { 0 };
	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		scanf("%d", &num[i]);
		num2[i] = num[i];
	}
	for (i = 0; i < N; i++)
	{
		for (j = i + 1; j < N; j++)
		{
			if (num[i] > num[j])
			{
				t = num[i];
				num[i] = num[j];
				num[j] = t;
				cnt1++;
			}
		}
	}
	for (i = 0; i < N; i++)
		printf("%d", num[i]);
	printf("\t交换次数%d", cnt1);
	printf("\n");
	for (i = 0; i < N; i++)
	{
		k = i;
		for (j = i + 1; j < N; j++)
		{
			if (num2[j] < num2[k])
				k = j;
		}
		if (k != i)
		{
			t = num2[i];
			num2[i] = num2[k];
			num2[k] = t;
			cnt2++;
		}
	}
	for (i = 0; i < N; i++)
		printf("%d", num2[i]);
	printf("\t交换次数%d", cnt2);
	return 0;
}