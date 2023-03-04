#include <stdio.h>

int main1188()
{
	int profit;
	double salary;
	scanf("%d", &profit);
	if (profit <= 1000)
		salary = 500;
	else if (profit <= 5000)
		salary = 500 + profit * 0.15;
	else
		salary = 500 + profit * 0.20;
	printf("%.2lf\n", salary);
	return 0;
}