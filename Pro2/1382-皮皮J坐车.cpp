//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//using namespace std;
//typedef long long ll;
//#define Mod 1000000007
//ll gcd(ll a, ll b, ll &x, ll &y){
//    if (b == 0){
//        x = 1, y = 0;
//        return a;
//    }
//    ll  q = gcd(b, a % b ,y ,x);
//    y -= a / b * x;
//    return q;
//}
//ll ni(ll m,ll n) {
//    ll x = 0, y = 0;
//    gcd(n, m, x, y);
//    if(y > 0) return y;
//    else return n + y;
//}
//ll C(ll a,ll b){
//    ll num1 = 1, num2 = 1;
//    for(int i = a - b + 1; i <= a; i++){
//        num1 = (num1 * i) %Mod;
//    }
//    for(int i = 1;i <= b; i++){
//        num2 = (num2 * i) %Mod;
//    }
//    cout << (num1 * ni(num2, Mod)) %Mod << endl;
//    return 0;
//}
//int main() {
//    int m, n, T;
//    cin >> T;
//    while(T--) {
//        cin >> m >> n;
//        C(m + n, n);
//    }
//    return 0;
//}


