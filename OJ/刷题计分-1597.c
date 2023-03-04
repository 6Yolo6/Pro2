#include<stdio.h>

int main1597()
{
	int num, score = 0;
	scanf("%d", &num);
	if (num >= 0 && num <= 10)
		score += 6 * num;
	else if (num <= 20)
		score = 60 + 2 * (num - 10);
	else if (num <= 40)
		score = 80 + (num - 20);
	else
		score = 100;
	printf("%d\n", score);
	return 0;
}