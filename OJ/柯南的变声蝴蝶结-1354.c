#include <stdio.h>
#include <stdlib.h>

int main1354()
{

    int i, j, n;
    scanf("%d", &n);
    n--;
    for (i = -n; i <= n; i++)
    {
        for (j = -n; j <= n; j++)
        {
            if (abs(i) <= abs(j))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}