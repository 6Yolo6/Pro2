//#include <iostream>
//
//using namespace std;
//int n, s, t, x, t_max = 0;
//int dp[100005][105];
//long long result;
//char ch;
////dp[t][x] t秒x位置的最大金币数
//
//int max_3(int a, int b, int c) {
//	int d = a > b ? a : b;
//	return d > c ? d : c;
//}
//
//long long scan() {
//	result = 0;
//	while (!(((ch = getchar()) >= '0') && (ch <= '9')));
//	result = ch - '0';
//	while (((ch = getchar()) >= '0') && (ch <= '9'))
//		result = 10 * result + ch - '0';
//	return result;
//}
//
//int main() {
//	while (cin >> n >> s) {
//		memset(dp, 0, sizeof(dp));
//		for (int x = 0; x <= 100; x++)
//			dp[0][x] = -0x3f3f3f3f;
//		for (int i = 0; i < n; i++) {
//			t = scan();
//			x = scan();
//			dp[t][x]++;
//			t_max = max(t_max, t);//最大秒数
//		}
//		dp[0][s] = 0;//初始位置
//		for (int t = 1; t <= t_max; t++) {
//			for (int x = 0; x <= 100; x++) {
//				//特殊处理
//				if (0 == x)
//					dp[t][x] += max(dp[t - 1][x], dp[t - 1][x + 1]);
//				else if (100 == x)
//					dp[t][x] += max(dp[t - 1][x], dp[t - 1][x - 1]);
//				else {
//					dp[t][x] += max_3(dp[t - 1][x - 1], dp[t - 1][x], dp[t - 1][x + 1]);
//				}
//			}
//		}
//		int c = 0;
//		for (int x = 0; x <= 100; x++) {
//			c = max(c, dp[t_max][x]);
//		}
//		cout << c << endl;
//	}
//	return 0;
//}
//
//
