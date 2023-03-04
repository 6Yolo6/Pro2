#include <stdio.h>

int main1414()
{
    int t, n;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        if (n == 2 || n == 3)
            printf("Win\n");
        else
            printf("Lose\n");
    }
    return 0;
}