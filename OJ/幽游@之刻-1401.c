#include <stdio.h>

int main1401()
{
	int n, i, id[100] = { 0 }, attack[100] = { 0 }, defence[100] = { 0 }, t = 0, flag = 0;
	char sex[5] = { 0 };
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		if (t == n)
			break;
		t++;
		scanf("%d,%d,%d,%c", &id[i], &attack[i], &defence[i], &sex[i]);
		if (sex[i] == 'M')
		{
			flag++;
			if (flag == 1)
				continue;
			else
			{
				if (attack[i] == attack[i - 1])
					id[0] = (defence[i] > defence[i - 1]) ? id[i] : id[i - 1];
				else
					id[0] = (attack[i] > attack[i - 1]) ? id[i] : id[i - 1];
			}
		}
		else
		{
			i--;
			continue;
		}
	}
	printf("%d", id[0]);
	return 0;
}