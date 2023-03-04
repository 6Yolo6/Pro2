#include <stdio.h>

int main1529()
{
	int N, age, sum = 0;
	scanf("%d", &N);
	while (N--)
	{
		scanf("%d", &age);
		if (age <= 6)
			sum += 0;
		else if (age <= 18)
			sum += 64;
		else if (age < 50)
			sum += 80;
		else
			sum += 48;
	}
	printf("%d\n", sum);
	return 0;
}