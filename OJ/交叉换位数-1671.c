#include <stdio.h>

int  main1671()
{
	int temp, t, m, i = 0, j, k, num2[10] = { 0 }, s = 0, sum = 0;
	scanf("%d", &m);
	sum += m;
	t = m;
	while (t)
	{
		i++;
		t /= 10;
	}
	t = m;
	k = i - 1;
	while (t)
	{
		num2[k--] = t % 10;
		t /= 10;
	}
	if (i % 2 == 0)
	{
		j = i / 2 - 1;
		temp = num2[j];
		num2[j] = num2[j + 1];
		num2[j + 1] = temp;
		for (j = 0; j < i; j++)
			s = s * 10 + num2[j];
		printf("%d", s + sum);
	}
	else
	{
		j = i / 2 - 1;
		temp = num2[j];
		num2[j] = num2[j + 2];
		num2[j + 2] = temp;
		for (j = 0; j < i; j++)
			s = (s * 10) + num2[j];
		printf("%d", s + sum);
	}
	return 0;
}