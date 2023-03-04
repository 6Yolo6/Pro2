#include<stdio.h>

int main1588()
{
	int num;
	double walk, bike;
	scanf("%d", &num);
	walk = num / 1.2;
	bike = num / 3.0 + 50;
	if (walk > bike)
		printf("Bike\n");
	else
		printf("Walk\n");
	return 0;
}