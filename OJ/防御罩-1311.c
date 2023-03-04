#include <stdio.h>


int ma(int a, int b)
{
	int c;
	if (a >= b)
		c = a;
	if (b >= a)
		c = b;
	return c;
}
int main1311()
{
	int num[200] = {0}, s = 0, n, t, i, r, flag;
	scanf("%d%d", &n, &r);
	for (i = 1; i <= n; i++)
		scanf("%d", &num[i]);
	if (n == 1) s = 1;
	flag = num[1] + r, i = 1;
	while (flag < num[n]) {
		s++;
		t = 0;
		if (num[i] > flag) {
			flag = num[i] + r;
			while (num[i] <= flag && num[i] != 0)
				t = ma(t, (num[i++] + r));
		}
		else while (num[i] <= flag)
			t = ma(t, (num[i++] + r));
		flag = t;
		while (num[i] <= flag) i++;
	}
	printf("%d\n", s);
	/*int i, t, r, x[120] = { 0 }, cnt = 0, j = 1, l;
	scanf("%d %d", &t, &r);
	for (i = 0; i < t; i++)
	{
		scanf("%d", &x[i]);
	}
	for (i = 0; i < t; i++)
	{
		for (j = i; x[i] + r >= x[j]; j++)
		{
			l = j;
		}
		for (; x[l] + r >= x[j]; j++);
		i = j - 1;
		cnt++;
	}
	if (t == 1)
	{
		cnt = 1;
	}
	printf("%d", cnt);*/
	return 0;
}
