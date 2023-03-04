//#include <iostream>
//
//using namespace std;
//#define INF 0x3f3f3f3f
//int dp[5][5][2];
//long long result;
//char ch;
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
//int cost(int a, int b) {
//	if (0 == a)
//		return 2;
//	else if (a == b)
//		return 1;
//	else if (2 == abs(a - b))
//		return 4;
//	return 3;
//}
//
//int main() {
//	int t, n, now, a;
//	cin >> t;
//	while (t--) {
//		memset(dp, INF, sizeof(dp));
//		dp[0][0][0] = 0;
//		now = 0;
//		cin >> n;
//		for (int i = 0; i < n; i++) {
//			a = scan();
//			for (int i = 0; i < 5; i++) {
//				for (int j = 0; j < 5; j++) {
//					if (dp[i][j][now] != INF) {
//						if (i != a)
//							dp[i][a][now^1] = min(dp[i][j][now] + cost(j, a), dp[i][a][now^1]);
//						if (j != a)
//							dp[a][j][now^1] = min(dp[i][j][now] + cost(i, a), dp[a][j][now^1]);
//					}
//				}
//			}
//			for (int i = 0; i < 5; i++)
//				for (int j = 0; j < 5; j++)
//					dp[i][j][now] = INF;
//			now ^= 1;
//		}
//		int s = INF;
//		for (int i = 0; i < 5; i++)
//			for (int j = 0; j < 5; j++)
//				s = min(s, dp[i][j][now]);
//		cout << s << endl;
//	}
//	return 0;
//}#include <iostream>
//
//using namespace std;
//#define INF 0x3f3f3f3f
//int dp[5][5][2];
//long long result;
//char ch;
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
//int cost(int a, int b) {
//	if (0 == a)
//		return 2;
//	else if (a == b)
//		return 1;
//	else if (2 == abs(a - b))
//		return 4;
//	return 3;
//}
//
//int main() {
//	int t, n, now, a;
//	cin >> t;
//	while (t--) {
//		memset(dp, INF, sizeof(dp));
//		dp[0][0][0] = 0;
//		now = 0;
//		cin >> n;
//		for (int i = 0; i < n; i++) {
//			a = scan();
//			for (int i = 0; i < 5; i++) {
//				for (int j = 0; j < 5; j++) {
//					if (dp[i][j][now] != INF) {
//						if (i != a)
//							dp[i][a][now^1] = min(dp[i][j][now] + cost(j, a), dp[i][a][now^1]);
//						if (j != a)
//							dp[a][j][now^1] = min(dp[i][j][now] + cost(i, a), dp[a][j][now^1]);
//					}
//				}
//			}
//			for (int i = 0; i < 5; i++)
//				for (int j = 0; j < 5; j++)
//					dp[i][j][now] = INF;
//			now ^= 1;
//		}
//		int s = INF;
//		for (int i = 0; i < 5; i++)
//			for (int j = 0; j < 5; j++)
//				s = min(s, dp[i][j][now]);
//		cout << s << endl;
//	}
//	return 0;
//}