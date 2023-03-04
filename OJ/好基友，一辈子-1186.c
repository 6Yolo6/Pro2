#include <stdio.h>

int main1186()
{
    int N, S, i, a, b, j = 0, gay[100] = { 0 };
    scanf("%d%d", &N, &S);
    for (a = 1; a <= N; a++)
        for (b = 1; b <= N; b++)
            if (a * b == S && a + b <= N)
                gay[j++] = a + b;
    for (i = 0; i < j; i++)
        if (gay[0] > gay[i])
            gay[0] = gay[i];
    printf("%d", (N - gay[0]) / 2);
    return 0;
}