#include <stdio.h>

int main1017()
{
	int i;
	int j[] = { 0, 1, 2, 6, 24, 120, 720, 5040, 40320, 362800 };
	int M, N;
	scanf("%d", &M);
    while (M--)
    {
        scanf("%d", &N);
        i = 9;
        while (i >= 1)
        {
            if (N >= j[i])
                N -= j[i];
            if (!N)
                break;
            --i;
        }
        if (!N)
            printf("Yes\n");
        else
            printf("No\n");
    }
	return 0;
}