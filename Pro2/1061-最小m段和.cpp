//#include <iostream>
//
//using namespace std;
//#define INF 0x3f3f3f3f
//int dp[1005][1005];
////ͨ��dp[i][j] ǰi����Ϊj��
//
//int main() {
//	int n, m, num[205], dp_max, dp_min;
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++)
//		cin >> num[i];
//	for (int i = 1; i <= n; i++)
//		dp[i][1] = dp[i - 1][1] + num[i];//����ǰi�����ĺ�
//	for (int i = 1; i <= n; i++) {
//		for (int j = 2; j <= m; j++) {
//			dp_min = INF;
//			for (int k = 1; k < i; k++) {
//				dp_max = max(dp[i][1] - dp[k][1], dp[k][j - 1]);
//				dp_min = min(dp_min, dp_max);
//			}
//			dp[i][j] = dp_min;
//		}
//	}
//	cout << dp[n][m] << endl;
//	return 0;
//}