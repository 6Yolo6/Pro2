#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char ch5[256] = { 0 };
int cnt = 0;
int num_ten(char a[], int n)
{
	int length, i, num = 0;
	int sum = 0;
	length = strlen(a);                    
	for (i = 0; i < length; i++)
	{
		if (a[i] >= '0' && a[i] <= '9')
			num = a[i] - '0';
		else if (a[i] >= 'A' && a[i] <= 'F')
			num = a[i] - 'A' + 10;
		sum = sum * n + num;
	}
	return sum;
}
void num_m(int _n, int m_)
{
	int i = 0, num;
	while (_n)
	{
		num = _n % m_;
		if (num < 10)
			ch5[i] = num;
		else
			ch5[i] = num + 55;  
		i++;
		_n /= m_;
		cnt = i;
	}
}
void transX2X(char num1[], int n, int m, char num2[])
{
	int n_ten;
	n_ten = num_ten(num1, n);
	num_m(n_ten, m);
}
int main5()
{
	int i, n, m;
	char ch1[25] = { 0 };
	printf("请输入待转换数的进制数：");
	do 
	{
		scanf("%d", &n);
	} while (n < 2 && n > 16);
	printf("请输入待转换数：");
	getchar();
	gets(ch1);                                  
	printf("请输入需要转成几进制数：");
	do 
	{
		scanf("%d", &m);
	} while (n < 2 && n > 16);
	printf("转换后的结果：");
	transX2X(ch1, n, m, ch5);
	for (i = cnt - 1; i >= 0; i--)
	{
		if (ch5[i] >= 0 && ch5[i] <= 9)
			printf("%d", ch5[i]);
		else
			printf("%c", ch5[i]);
	}
	return 0;
}