#include <stdio.h>

int mult1(int n)
{
	int t;
	if (n == 0)
		return 1;
	else if (n < 10 && n > 0)
		return n;
	else
	{
		t = n % 10;
		return max_num1((mult1(n / 10) * t),(mult1(n / 10 - 1) * 9));
	}
}
int max_num1(int a, int b)
{
	return a > b ? a : b;
}
int main1571()
{
	int n;
	scanf("%d", &n);
	printf("%d\n", mult1(n));
	return 0;
}