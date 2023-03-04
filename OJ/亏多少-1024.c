#include <stdio.h>

int main1024()
{
    int x, n, m, p, c;
    scanf("%d", &x);
    while (x--)
    {
        scanf("%d%d%d%d", &n, &m, &p, &c);
        printf("%d\n", -(m - p - n));
    }
    return 0;
}