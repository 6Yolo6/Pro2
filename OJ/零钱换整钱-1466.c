#include <stdio.h>

int main1466() 
{
    int i, j, k;
    for (i = 1; i <= 100; i++) {
        for (j = 1; j <= 100; j++) {
            for (k = 1; k <= 100; k++) {
                if (i * 20 == j * 15 && j * 15 == k * 18) {
                    if ((i * 10 + j * 5 + k * 1) % 100 == 0) {
                        printf("%d,%d,%d,%d\n", k, j, i, (i * 10 + j * 5 + k * 1) / 10);
                        return 0;
                    }
                }
            }
        }
    }
    return 0;
}