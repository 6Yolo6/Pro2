#include <stdio.h>
#include <math.h>

int main1415()
{
    int n, i, t;
    double s;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        s = log2(n) - (int)log2(n);
        if (s == 0)
            printf("%d\n", (int)log2(n));
        else
            printf("%d\n", (int)log2(n) + 1);
    }
    return 0;
}