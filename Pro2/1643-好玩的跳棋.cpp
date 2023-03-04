//#include <iostream>
//#include <cstdio>
//
//using namespace std;
//
//#define MAX 1001
//
//int main() {
//	int N, n, dp[1005];
//	fill(dp, dp + 1005, MAX);
//	dp[0] = 0;
//	cin >> N;
//	for (int i = 0; i < N; i++) {
//		cin >> n;
//		for (int j = 1; j <= n && i + j < N; j++) {
//			dp[i + j] = min(dp[i] + 1, dp[i + j]);
//		}
//	}
//	if (dp[N - 1] == MAX)
//		cout << -1 << endl;
//	else
//		cout << dp[N - 1] << endl;
//	return 0;
//}