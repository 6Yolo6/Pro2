#include <stdio.h.>

int main1072()
{
	float x, n = 1.0;
	int year = 0;
	scanf("%f", &x);
	while (n < 2.0)
	{
		n = n * (1.0 + x);
		year++;
	}
	printf("%d", year);
	return 0;
}