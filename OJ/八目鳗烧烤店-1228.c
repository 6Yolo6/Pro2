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

//1��6�죩 + C51����baiһdu������� + C42�������������zhi + 1����������� +
//C41��һ��dao���� + 1������zhuan����+ C31C21��һ����һ���� + C31��һ���ĸ�shu�� +
//C21��һ����һ������ + C21��һ������� + 1��һ��������