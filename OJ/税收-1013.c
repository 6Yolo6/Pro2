#include <stdio.h>

int main1013()
{
	float income;
	float tax = 0;
	scanf("%f", &income);
	if (income >= 10000)
		tax = 0.2 * (income - 10000.0) + 0.1 * 5000 + 4000 * 0.05;
	else if (income >= 5000)
		tax = 0.1 * (income - 5000.0) + 0.05 * 4000;
	else if (income >= 1000)
		tax = 0.05 * (income - 1000.0);
	printf("%.2f", tax);
	return 0;
}