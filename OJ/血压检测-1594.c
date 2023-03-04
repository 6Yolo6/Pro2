#include <stdio.h>

int main1594()
{
    int n, a[100], b[100], i, k, j;
    scanf("%d", &n);
    k = 0; j = 0;
    for (i = 0; i < n; i++)
        scanf("%d%d", &a[i], &b[i]);
    for (i = 0; i < n; i++)
    {
        if (a[i] >= 90 && a[i] <= 140 && b[i] >= 60 && b[i] <= 90)
            k++;
        else
        {
            j = j > k ? j : k;
            k = 0;
        }
    }
    printf("%d\n", j > k ? j : k);
    return 0;
}