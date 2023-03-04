#include<stdio.h>
#include<math.h>

int fun0(int n)
{
	int i;
	if (n == 2)
		return 1;
	if (n % 2 == 0)
		return 0;
	for (i = 3; i <= sqrt(n); i += 2)
		if (n % i == 0)
			return 0;
	return 1;
}
int main1021()
{
	int n, i, ok;
	while (scanf("%d", &n) && n != 0)
	{
		ok = 0;
		for (i = 2; i <= n / 2; i++)
		{
			if (fun0(i) && fun0(n - i))
			{
				printf("%d=%d+%d\n", n, i, n - i);
				ok = 1;
			}
			if (i != 2)
				i++;
			if (ok)
				break;
		}
	}
	return 0;
}