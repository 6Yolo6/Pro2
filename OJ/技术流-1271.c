#include <stdio.h>

int main1271()
{
    int N, i, j, n, price = 1, num[1000] = {0}, num1[1000] = {0};
    scanf("%d", &N);
    i = 0;
    while (N--)
    {
        scanf("%d", &n);
        num[i] = n;
        i++;
    }
    for (i = 1; num[i] != '\0'; i++)
    {
        for (j = i - 1; num[j] != '\0'; j--)
        {
            if (num[i] > num[j])
                price++;
            else
            {
                num1[i] = price;
                break;
            }
            num1[i] = price;
        }
        price = 1;
    }
    num1[0] = 1;
    for (i = 0; num1[i] != '\0'; i++)
    {
        if (i > 0)
            printf(" ");
        printf("%d", num1[i]);
    }
    return 0;
}