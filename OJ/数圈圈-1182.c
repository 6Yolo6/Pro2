#include <stdio.h>

int main1182()
{
	int n, s, num = 0, sum = 0;
	scanf("%d", &n);
	while (n--)
	{
		scanf("%d", &s);
		while (s)
		{
			num = s % 10;
			s /= 10;
			switch (num)
			{
			case 0:
			case 4:
			case 6:
			case 9:
				sum++;
				break;
			case 8:
				sum += 2;
				break;
			default:
				break;
			}
		}
		printf("%d\n", sum);
		sum = 0;
	}
	return 0;
}