#include <stdio.h>

int main1274()
{
	int i, k, grade;
	scanf("%d", &k);
	for (i = 1; i <= k; i++)
	{
		scanf("%d", &grade);
		if (grade <= 59)
			printf("E\n");
		else if (grade <= 69)
			printf("D\n");
		else if (grade <= 79)
			printf("C\n");
		else if (grade <= 89)
			printf("B\n");
		else if (grade <= 100)
			printf("A\n");
		else
			printf("Score is error!\n");
	}
	return 0;
}