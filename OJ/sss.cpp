#include <iostream>
using namespace std;
int main1252456456() { int n, i, num, a[10] = { 0 }; cin >> n; for (i = 1; i <= n; i++) { num = i; while (num > 0) { a[num % 10]++; num /= 10; } }for (i = 0; i < 10; i++) cout << a[i] << endl; return 0; }
