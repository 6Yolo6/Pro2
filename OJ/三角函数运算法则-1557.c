#include <stdio.h>
#include <string.h>

int main1557()
{
	int N, i, j, num;
	char ch[10] = { 0 }, sin[] = { "sin" }, cos[] = {"cos"};
	scanf("%d", &N);
	while (N--)
	{
		scanf("%s%d", ch, &num);
		if ((strcmp(ch, cos)) == 0)
		{
			if ((num / 90) % 2 == 1)
				printf("sin\n");
			else
				printf("cos\n");
		}
		if ((strcmp(ch, sin)) == 0)
		{
			if ((num / 90) % 2 == 1)
				printf("cos\n");
			else
				printf("sin\n");
		}
	}
	return 0;
}