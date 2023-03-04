#include <stdio.h>

int main1004()
{
	int men, women, child;
	int num1 = 45, num2 = 45;
	for (men = 0; men <= 15; men++)
	{
		for (women = 0; women <= 22; women++)
		{
			for (child = 0; child <= 45; child++)
			{
				if (men + women + child == num1 && men * 3 + women * 2 + child / 2 == num2 && child % 2 == 0)
					printf("men=%d women=%d child=%d\n", men, women, child);
			}
		}
	}
	return 0;
}
