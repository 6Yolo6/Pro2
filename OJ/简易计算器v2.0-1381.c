#include<stdio.h>

int gcd1381(int num1, int num2)
{
	return !num2 ? num1 : gcd1381(num2, num1 % num2); //递归
	/*int a, b, temp;
	if (num1 < num2)
	{
		temp = num1;
		num1 = num2;
		num2 = temp;
	}
	a = num1;
	b = num2;
	while (b != 0)
	{
		temp = a % b;
		a = b; 
		b = temp;
	}
	return a;*/
}
int main1381()
{
	int a1, a2, b1, b2, c = 1, num1, num2;
	scanf("%d%d%d%d", &a1, &a2, &b1, &b2);
	num1 = a1 * b2 + b1 * a2;
	num2 = a2 * b2;
	c = gcd1381(num1, num2);
	num1 = num1 / c;
	num2 = num2 / c;
	if (num2 == 1)
		printf("%d/%d", num1, num1);
	else
		printf("%d/%d", num1, num2);
	return 0;
}