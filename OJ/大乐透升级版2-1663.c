#include <stdio.h>

int main1663()
{
	int i, j, m, n, cnt1 = 0, cnt2 = 0, qian[10] = { 0 }, hou[5] = { 0 };
	for (i = 0; i < 5; i++)
		scanf("%d", &qian[i]);
	for (i = 0; i < 2; i++)
		scanf("%d", &hou[i]);
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &m);
		for (j = 0; j < 5; j++)
			if (m == qian[j])
				cnt1++;
	}
	for (i = 0; i < 2; i++)
	{
		scanf("%d", &n);
		for (j = 0; j < 2; j++)
			if (n == hou[j])
				cnt2++;
	}
	if (cnt1 == 2 && cnt2 == 1)
		printf("YES");
	else
		printf("NO");
	return 0;
}