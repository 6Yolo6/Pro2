#include<stdio.h>
#include<math.h>

int main1612()
{
    int aim;
    int logo1 = 0, logo2 = 0;
    int i, j;
    scanf("%d", &aim);
    if (aim < 2)
    {
        printf("2");
        return 0;
    }
    if (aim == 2)
    {
        printf("3");
        return 0;
    }
    if (aim == 3)
    {
        printf("2");
        return 0;
    }
    for (i = 1; i < aim - 2; i++)
    {
        for (j = 2; j <= sqrt(aim + i); j++)
            if ((aim + i) % j == 0)
                break;
        if (j > sqrt(aim + i))
            logo1 = 1;
        for (j = 2; j <= sqrt(aim - i); j++)
            if ((aim - i) % j == 0)
                break;
        if (j > sqrt(aim - i))
            logo2 = 1;
        if (logo1 == 1 || logo2 == 1)
            break;
    }
    if (logo2 == 1)
        printf("%d ", aim - i);
    if (logo1 == 1)
        printf("%d", aim + i);
    return 0;
}