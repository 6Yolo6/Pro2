//#include <iostream>
//
//using namespace std;
//
//int fun(long long x, int y) {
//    int a = x, t = 1, s = 0;
//    while (x) {
//        s += x / 10 * t;
//		if (x % 10 > y)
//			s += t;
//		if (x % 10 == y)
//			s += a % t + 1;
//        x /= 10;
//        t *= 10;
//    }
//    return s;
//}
//
//int getNum(long long num) {
//    if (num == 0)
//        return 1;
//    return (int)log10(num) + 1;
//}
//
//int main2124512154() {
//    long long n;
//    cin >> n;
//    int k = 0;
//    for (int i = 0; i < getNum(n); i++) 
//        k = k * 10 + 1;
//    cout << fun(n, 0) - k << endl;
//    for (int i = 1; i < 10; i++)
//        cout << fun(n, i) << endl;
//    return 0;
//}
//
////#include <iostream>
////using namespace std;
////int main() { int n, i, num, a[10] = { 0 }; cin >> n; for (i = 1; i <= n; i++) { num = i; while (num > 0) { a[num % 10]++; num /= 10; } }for (i = 0; i < 10; i++) cout << a[i] << endl; return 0; }
