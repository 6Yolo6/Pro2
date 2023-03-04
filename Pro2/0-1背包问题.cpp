//#include <iostream>
//
//using namespace std;
//
//int n, c, w[105], v[105], dp[105][1005] = { 0 };
//
//int main() {
//	cin >> n >> c;
//	for (int i = 0; i < n; i++) {
//		cin >> w[i] >> v[i];
//	}
//	//反向DP
//	for (int i = n - 1; i >= 0; i--) {
//		for (int ww = 0; ww <= c; ww++) {
//			if (w[i] > ww)
//				dp[i][ww] = dp[i + 1][ww];
//			else
//				dp[i][ww] = max(dp[i + 1][ww], v[i] + dp[i + 1][ww - w[i]]);
//			cout << dp[i][ww] << " ";
//		}
//		cout << endl;
//	}
//	cout << dp[0][c] << endl;
//
//	fill(dp[0], dp[0] + 105 * 1005, 0);
//
//	//正向DP
//	for (int i = 0; i < n; i++) {
//		for (int ww = 0; ww <= c; ww++) {
//			if (w[i] > ww)
//				dp[i + 1][ww] = dp[i][ww];
//			else
//				dp[i + 1][ww] = max(dp[i][ww], v[i] + dp[i][ww - w[i]]);
//			cout << dp[i][ww] << " ";
//		}
//		cout << endl;
//	}
//	cout << dp[n][c] << endl;
//	return 0;
//}