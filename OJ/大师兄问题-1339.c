#include <stdio.h>

int main1339()
{
	int N, i, num = 0;
	scanf("%d", &N);
	if (N < 6)
		num = 0;
	else
	{
		num =  2 * (N / 7);
		if (N % 7 == 6)
			num += 1;
	}
	printf("%d", num);
	return 0;
}