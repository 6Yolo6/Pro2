//#include <stdio.h>

//char str[10000] = { 0 };
//int main()
//{
//    long long T, n, N, t;
//    int i, j, m = 0;
//    scanf("%lld", &T);
//    while (T--)
//    {
//        scanf("%lld", &n);
//        j = 0;
//        while (n)
//        {
//            if (n % 2 == 1)
//                str[j++] = '1';
//            else
//                str[j++] = '0';
//            n /= 2;
//        }
//        t = 1;
//        N = 0;
//        for (i = j - 1; i >= m; --i)
//        {
//            N += ((str[i] - '0') * t);
//            t *= 2;
//        }
//        printf("%lld\n", N);
//    }
//    return 0;
//}
#include <stdio.h>


int main1140() 
{
    int num[10000] = { 0 };//·ÅmainÍâÃæ
    long long T, n, N, t;
    int i, j, m = 0; 
    scanf("%lld", &T);
    while (T--) 
    {
        scanf("%lld", &n);
        j = 0;
        while (n) 
        {
            if (n % 2 == 1)
                num[j++] = 1;
            else
                num[j++] = 0;
            n /= 2;
        }
        t = 1;N = 0;
        for (i = j - 1; i >= m; --i) 
        {
            N += (num[i] * t);
            t *= 2;
        }
        printf("%lld\n", N);
    }
    return 0;
}


