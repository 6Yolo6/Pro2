//#include <cstdio>
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
////dp[i] 前i个炸弹中最大威力和
////dp[i][j] 前j个炸弹分为i段的最大威力和
//
//int n, a[1005], v[1005][1005];
//int dp[1005][1005] = { 0 };
////int dp[1005] = { 0 };
//
//int main() {
//
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//		cin >> a[i];
//	int min_i, max_i;
//	for (int i = 1; i <= n; i++) {
//		min_i = max_i = a[i];
//		for (int j = i; j <= n; j++) {
//			min_i = min(min_i, a[j]);
//			max_i = max(max_i, a[j]);
//			v[i][j] = (max_i - min_i) * (max_i - min_i);//最大威力差
//		}
//	}
//	for (int i = 1; i <= n; i++)
//		dp[1][i] = v[1][i];
//	for (int i = 2; i <= n; i++) {
//		for (int j = i; j <= n; j++) {
//			for (int k = i - 1; k < j; k++) {
//				dp[i][j] = max(dp[i][j], v[k+1][j] + dp[i - 1][k]);
//			}
//		}
//	}
//	//for (int i = 2; i <= n; i++) {
//	//	for (int k = 0; k < i; k++) {
//	//		dp[i] = max(dp[i], v[k + 1][i] + dp[k]);
//	//	}
//	//}
//	int res = 0;
//	for (int i = 1; i <= n; i++) {
//		res = max(res, dp[i][n]);
//	}
//	cout << res << endl;
//	return 0;
//}