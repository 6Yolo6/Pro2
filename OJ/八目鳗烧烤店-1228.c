#include <stdio.h>

int main1228()
{
	int i, j, f[10] = {0, 1, 2 };
	for (i = 3; i <= 6; i++)
	{
		for (j = 1; j < i; j++)
			f[i] += f[j];
		f[i]++;
	}
	printf("%d\n", f[6]);
	return 0;
}
//#include <stdio.h>
//
//int fun(int n)
//{
//	/*if (n == 0)
//		return 1;
//	else if (n == 1)
//		return fun(n - 1);
//	else if (n == 2)
//		return fun(n - 2) + fun(n - 1);
//	else if (n == 3)
//		return  fun(n - 3) + fun(n - 2) + fun(n - 1);
//	else if (n == 4)
//		return  fun(n - 4) + fun(n - 3) + fun(n - 2) + fun(n - 1);
//	else if (n == 5)
//		return  fun(n - 5) + fun(n - 4) + fun(n - 3) + fun(n - 2) + fun(n - 1);
//	else if (n == 6)
//		return  fun(n - 6) + fun(n - 5) + fun(n - 4) + fun(n - 3) + fun(n - 2) + fun(n - 1);*/
//	int i, sum = 0;
//	if (n == 0)
//		return 1;
//	for (i = 1; i <= n; i++)
//		sum += fun(n - i);
//	return sum;
//}
//int main()
//{
//	printf("%d", fun(6));
//	return 0;
//}

//1（6天） + C51（有bai一du天吃俩） + C42（有两天吃俩）zhi + 1（三天吃俩） +
//C41（一天dao吃仨） + 1（两天zhuan吃仨）+ C31C21（一天俩一天仨） + C31（一天四个shu） +
//C21（一天四一天俩） + C21（一天五个） + 1（一天六个）