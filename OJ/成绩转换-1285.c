#include <stdio.h>

int main1285()
{
	int i, k, grade;
	scanf("%d", &k);
	for (i = 1; i <= k; i++)
	{
		scanf("%d", &grade);
		if (grade <= 59)
			printf("fail\n");
		else if (grade <= 69)
			printf("pass\n");
		else if (grade <= 79)
			printf("soso\n");
		else if (grade <= 89)
			printf("good\n");
		else if (grade <= 100)
			printf("excellent\n");
		else
			printf("wrong\n");
	}
	return 0;
}