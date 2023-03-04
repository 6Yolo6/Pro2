#include <stdio.h>

int main1177()
{
    int a, b, c;
    int x, y, z;
    int num = 0;
    scanf("%d%d%d", &a, &b, &c);
    for (x = 0; x <= a; x++)
    {
        for (y = 0; y <= b; y++)
        {
            for (z = 0; z <= c; z++)
            {
                if (x + y + z == 10)
                {
                    num++;
                    break;
                }
            }
        }
    }
    printf("%d", num);
    return 0;
}