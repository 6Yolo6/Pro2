#include <stdio.h>

int main1372()
{
    int i, n, pan;
    double m, k, x1, y1, x2, y2, x3, y3, x4, y4, x0, y0, x, y, xlp1, xlp2, xlp3, xlp4;
    scanf("%d", &n);
    while (n--)
    {
        pan = 0;
        scanf("%lf%lf%lf%lf%lf%lf%lf%lf%lf%lf", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4, &x0, &y0);
        xlp1 = (x2 - x1) * (x0 - x1) + (y2 - y1) * (y0 - y1);
        xlp2 = (x4 - x3) * (x0 - x3) + (y4 - y3) * (y0 - y3);
        xlp3 = (x3 - x2) * (x0 - x2) + (y3 - y2) * (y0 - y2);
        xlp4 = (x1 - x4) * (x0 - x4) + (y1 - y4) * (y0 - y4);
        if (xlp1 * xlp2 >= 0 && xlp3 * xlp4 >= 0)
            pan = 1;
        if (pan == 1)
            printf("T\n");
        else
            printf("F\n");
    }
    return 0;
}