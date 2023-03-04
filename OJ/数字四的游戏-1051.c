#include <stdio.h>
#define N 1000

int main1051()
{
    int a[N], n, m = 0, i = 1, k = 0, j = 0;
    scanf("%d", &n);
    for (j = 1; j <= n; j++)
        a[j] = j;
    while (m < n - 1)
    {
        if (a[i] != 0)
            k++;
        if (k == 4)
        {
            a[i] = 0;
            k = 0;
            m++;
        }
        i++;
        if (i == n + 1)
            i = 1;
    }
    for (j = 1; j <= n; j++)
        if (a[j] != 0)
            printf("%d\n", a[j]);
    /*int a[N] = { 0 }, n, i, num, j = 0, out = 0;
    printf("输入一个数n: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        a[i] = i + 1;
    for (i = 0, num = 1; (n - out) != 1; i = (i + 1) % (n - out), num++)
    {
        if (num % 4 == 0)
        {
            for (j = i; j < n - out; j++)
                a[j] = a[j + 1];
            out++;
            num++;
        }
    }
    printf("%d\n", a[0]);*/
    return 0;
}
