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
//        if (0 == x << 1 && 0 == y << 1)
//            printf("%d\n", 2);
//        else if (x == y)
//            printf("%d\n", x);
//        else
//            printf("%d\n", 1);  
//        //printf("%ld\n", gcd1572(x, y));
//    }
//    return 0;
//}