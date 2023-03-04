#include <stdio.h>

int exit1029(int num)
{
    int temp = num;
    int sum = 0;
    while (temp > 0)
    {
        sum += temp % 10;
        temp /= 10;
    }
    return sum;
}
int main1029()
{
    int num;
    while (scanf("%d", &num) && num != 0 && num <100000)
    {
        int sum = exit(num);
        while (sum >= 10)
        {
            sum = exit(sum);
        }
        printf("%d\n", sum);
    }
    return 0;
}