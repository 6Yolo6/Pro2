//#include <iostream>
//
//using namespace std;
//
//int main() {
//	int n, a[15], candy = 0, candy_time = 0, time = 0;
//	cin >> n;
//	for (int i = 1; i <= n; i++) {
//		cin >> a[i];
//		time += a[i];
//		if (i != n && time >= 30 || i == n && time > 30) {
//			a[i] += 5;//OJ
//			time -= 30;
//		}
//		if (candy_time < a[i]) {
//			candy_time = 10;
//			candy++;
//		}
//		candy_time -= a[i];
//	}
//	cout << candy << endl;
//	return 0;
//}