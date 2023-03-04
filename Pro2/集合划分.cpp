//#include <iostream>
//
//using namespace std;
//
//int set(int n, int m) {
//	if (m < 1)
//		return 0;
//	if (1 == m)
//		return 1;
//	if (n == m)
//		return 1;
//	return set(n - 1, m - 1) + set(n - 1, m) * m;
//}
//
//int main2222222() {
//	int n, s = 0;
//	cin >> n;
//	for (int i = 1; i <= n; i++) 
//		s += set(n, i);
//	cout << s;
//	return 0;
//}