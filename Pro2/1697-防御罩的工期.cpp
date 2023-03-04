//#include <iostream>
//using namespace std;
//
//int main1697() {
//	int m = 0, n;
//	cin >> n;
//	for (int i = -n + 1; i < n; i++) {
//		for (int j = -n + 1; j < n; j++) {
//			if (abs(i) == n / 2 && abs(j) <= n / 2 || abs(j) == n / 2 && abs(i) <= n / 2)
//				cout << "*";
//			else if (abs(i) == n / 4 && abs(j) <= n / 4 || abs(j) == n / 4 && abs(i) <= n / 4)
//				cout << "*";
//			else if (abs(i) + abs(j) == n - 1)
//				cout << "*";
//			else if (abs(i) + abs(j) == (n - 1) / 2)
//				cout << "*";
//			else
//				cout << " ";
//		}
//		cout << endl;
//	}
//	return 0;
//}