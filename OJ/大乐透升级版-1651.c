#include <stdio.h>

int main1651()
{
	int i, j, m, n, cnt = 0, qian[10] = { 0 }, hou[5] = { 0 };
	for (i = 0; i < 5; i++)
		scanf("%d", &qian[i]);
	for (i = 0; i < 2; i++)
		scanf("%d", &hou[i]);
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &m);
		for (j = 0; j < 5; j++)
			if (m == qian[j])
				cnt++;
	}
	for (i = 0; i < 2; i++)
		scanf("%d", &n);
	if (cnt == 3)
		printf("YES");
	else
		printf("NO");
	return 0;
}