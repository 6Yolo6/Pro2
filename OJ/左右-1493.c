#include <stdio.h>

int main1493()
{
	int S, M, num;
	scanf("%d%d", &S, &M);
	if (S % M == 0)
	{
		if ((S / M) % 2 == 1)
			printf("NO\n");
		else
			printf("YES\n");
	}
	else
	{
		if ((S / M) % 2 == 0)
			printf("NO\n");
		else
			printf("YES\n");
	}
	return 0;
}