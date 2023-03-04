#include <stdio.h>

int main1006()
{
    int a;
    int sum = 0, n = 0;
    scanf("%d", &a);
    if (a == 0)
    {
        n = 1;
    }
    while (a)
    {
        sum += a % 10;
        a /= 10;
        n += 1;
    }
    printf("n=%d;sum=%d\n", n, sum);
	return 0;
}