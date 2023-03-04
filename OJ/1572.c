#include <stdio.h>

long long gcd1572(long long X, long long Y)
{
    if (X < Y)
        return gcd1572(Y, X);
    if (Y == 0)
        return X;
    else
    {
        if (X % 2 == 0)
        {
            if (Y % 2 == 0)
                return (gcd1572(X >> 1, Y >> 1) << 1);
            else
                return gcd1572(X >> 1, Y);
        }
        else
        {
            if (Y % 2 == 0)
                return gcd1572(X, Y >> 1);
            else
                return gcd1572(Y, X - Y);
        }
    }
}
int main1572()
{
	int T;
	long long x, y;
	scanf("%d", &T);
	while (T--)
	{
		scanf("%lld%lld", &x, &y);
		printf("%lld\n", gcd1572(x, y));
	}
	return 0;
}
//#include <stdio.h>
//
//long gcd1572(long X, long Y)
//{
//    return Y == 0 ? X : gcd1572(Y, X % Y);
//}
//int main()
//{
//    int T;
//    long x, y;
//    scanf("%d", &T);
//    while (T--)
//    {
//        scanf("%ld%ld", &x, &y);
//        printf("%ld\n", gcd1572(x, y));
//    }
//    return 0;
//}