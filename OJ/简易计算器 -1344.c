#include <stdio.h>

int main1344()
{
	int num1, num2;
	char ch;
	double num3, divide_num;
	scanf("%d%c%d", &num1, &ch, &num2);
	num3 = num2;
	divide_num = num1 / num3;
	switch (ch)
	{
	case '+':
		printf("%d%c%d=%d\n", num1, ch, num2, num1 + num2);
		break;
	case'-':
		printf("%d%c%d=%d\n", num1, ch, num2, num1 - num2);
		break;
	case'x':
		printf("%d%c%d=%d\n", num1, ch, num2, num1 * num2);
		break;
	case'/':
	{
		if (num2 == 0)
			printf("divide by 0!\n");
		else
			printf("%d%c%d=%.2lf", num1, ch, num2, divide_num);
		break;
	}
	default:
		printf("error input!\n");
		break;
	}
	return 0;
}