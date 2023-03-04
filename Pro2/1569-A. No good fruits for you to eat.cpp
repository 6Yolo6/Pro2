//#include <iostream>
//
//using namespace std;
//int n, a[100005], s = 0;
//int main() {
//	cin >> n;
//	for (int i = 0; i < n; i++)
//		cin >> a[i];
//	s += a[n - 1];
//	for (int i = n - 2; i >= 0; i--) {
//		if (a[i + 1] == 0)
//			break;
//		if (a[i] < a[i + 1])
//			s += a[i];
//		else {
//			a[i] = a[i + 1] - 1;
//			s += a[i];
//		}
//	}
//	cout << s << endl;
//	return 0;
//}


