#include <stdio.h>

int main1137()
{
	int a[30001] = { 0 };//放main外面!
	int temp, num, k, T, n, i, j = 0;  
	scanf("%d", &T);
	while (T--)
	{
		scanf("%d", &n);
		a[0] = 1;
		k = 1;
		for (i = 2; i <= n; i++)
		{
			num = 0;
			for (j = 0; j < k; j++)
			{
				temp = a[j] * i + num;
				a[j] = temp % 10;
				num = temp / 10;
			}
			while (num)
			{
				a[k] = num % 10;
				num /= 10;
				k++;
			}
		}
		for (i = k - 1; i >= 0; i--)
			printf("%d", a[i]);
		printf("\n");
	}
	return 0;
}
//void print_factorial(int n)
//{
//	int t, len, tem;//t为进位，len为位数
//	int a[100000] = { 1 }, i, j; //移到main外面! 
//	if (n == 0)
//	{
//		printf("%d", 1);
//		return;
//	}
//	t = 0; 
//	len = 1;
//	for (i = 2; i <= n; i++)
//	{
//		t = 0;
//		for (j = 0; j < len; j++)
//		{
//			tem = a[j] * i;
//			a[j] = (tem + t) % 10;//每一位分离出来
//			t = (tem + t) / 10;
//			if (t != 0 && j == len - 1)
//				len++;
//		}
//	}
//	for (i = len - 1; i >= 0; i--)
//	{
//		printf("%d", a[i]);
//	}
//}
//int main()
//{
//	int n, T;
//	scanf("%d", &T);
//	while (T--)
//	{
//		scanf("%d", &n);
//		print_factorial(n);
//		printf("\n");
//	}
//	return 0;
//}