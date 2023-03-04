#include <stdio.h>

int main1218()
{
    int n, t, i, pro;
    long m;
    scanf("%d", &n);
    while (n--)
    {
        pro = 1;
        scanf("%ld", &m);
        t = (m - 1) % 4;
        m %= 10;
        for (i = 0; i <= t; i++)
            pro *= m;
        printf("%d\n", pro % 10);
    }
    /*
    int t, num[10][4] = { {0},{1},{6,2,4,8},{1,3,9,7},{6,4},{5},{6},{1,7,9,3},{6,8,4,2},{1,9} };
    long long n;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%lld", &n);
        switch (n % 10)
        {
        case 0:
        case 1:
        case 5:
        case 6:
            printf("%d\n", num[n % 10][0]);
            break;
        case 2:
        case 3:
        case 7:
        case 8:
            printf("%d\n", num[n % 10][n % 4]);
            break;
        case 4:
        case 9:
            printf("%d\n", num[n % 10][n % 2]);
            break;
        }
    }
    */
    return 0;
}