#include <stdio.h>

int main1647()
{
	int M, N, num, i = 0, cnt;
	char ch[20] = { 0 };
	scanf("%d%d", &M, &N);
	while (M)
	{
		num = M % N;
		M /= N;
		ch[i++] = num;
	}
	for (cnt = i - 1; cnt >= 0; cnt--)
		printf("%d", ch[cnt]);
	return 0;
}