//#include <cstring>
//#include <iostream>
//#include <algorithm>
//#include <cstdio>
//
//using namespace std;
//
//const int N = 110;
//int a[N];
//int f[N];
//int n;
//
//int main() {
//    cin >> n;
//    for (int i = 0; i < n; i++) {
//        cin >> a[i];
//        f[i] = 1;
//    }
//    for (int i = 1; i < n; i++)
//        for (int j = 0; j < i; j++)
//            if (a[i] >= a[j]) 
//                f[i] = max(f[i], f[j] + 1);
//    int cnt = 0;
//    for (int i = 0; i < n; i++) 
//        cnt = max(cnt, f[i]);
//    for (int i = 0; i < n; i++) 
//        f[i] = 1;
//    for (int i = 1; i < n; i++)
//        for (int j = 0; j < i; j++)
//            if (a[i] <= a[j]) 
//                f[i] = max(f[i], f[j] + 1);
//    for (int i = 0; i < n; i++) 
//        cnt = max(cnt, f[i]);
//    cout << n - cnt;
//    return 0;
//}