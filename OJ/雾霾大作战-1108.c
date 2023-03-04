#include <stdio.h>

int main1108()
{
    int n, i, j, k, car[55][55] = { 0 };
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        for (j = i + 1; j <= n; j++)
            scanf("%d", &car[i][j]);
    for (i = 1; i <= n; i++)
        for (j = i + 1; j <= n; j++)
            for (k = 1; k < j; k++)
                car[i][j] = (car[i][j] < (car[i][k] + car[k][j])) ? car[i][j] : (car[i][k] + car[k][j]);
    printf("%d", car[1][n]);
    return 0;
}

