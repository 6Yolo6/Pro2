#include <stdio.h>

int main1203()
{
	double profit, salary = 0.0;
	scanf("%lf", &profit);
	if (profit <= 1000)
		salary = 500;
	else if (profit <= 5000)
		salary = 500 + profit * 0.25;
	else
		salary = 500 + profit * 0.50;
	printf("%.2lf", salary);
	return 0;
}