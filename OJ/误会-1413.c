#include <stdio.h>

int main1413()
{
    int t, n, a[100] = { 0 }, i, j, m = 0;
    scanf("%d", &t);
    while (t--)
    {
        m = 0;
        scanf("%d", &n);
        for (i = 0; i < n; i++)
            a[i] = i + 1;
        for (i = 0; i < n; i++)
            if (a[i] != 0)
                for (j = 1; j <= n; j++)
                    if (a[i] * 2 == j)
                        a[j - 1] = 0;
        for (i = 0; i < n; i++)
            if (a[i] != 0)
                m++;
        printf("%d\n", m);
    }
    return 0;
}