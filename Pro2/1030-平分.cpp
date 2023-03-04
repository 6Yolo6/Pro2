//#include <iostream>
//#include <vector>
//
//using namespace std;
//int dp[205][1005];//dp[i][j]i个石头价值为j能否平分
//int main() {
//	int n, sum, s;
//	cin >> n;
//	while (n--) {
//		vector<int> stone;
//		memset(dp, 0, sizeof dp);
//		sum = 0;
//		for (int i = 1; i <= 6; i++) {
//			cin >> s;
//			for (int j = 0; j < s; j++) {
//				stone.push_back(i);
//				sum += i;
//			}
//		}
//		if (sum & 1) {//奇数
//			cout << "NO" << endl;
//			continue;
//		}
//		for (int i = 1; i <= stone.size(); i++) {
//			dp[i][stone[i - 1]] = 1;
//			for (int j = 0; j <= sum; j++) {
//				dp[i][j] |= dp[i - 1][j];
//				if (j - stone[i - 1] >= 0) {
//					dp[i][j] |= dp[i - 1][j - stone[i - 1]];
//				}
//			}
//		}
//		if (dp[stone.size()][sum / 2])
//			cout << "YES" << endl;
//		else
//			cout << "NO" << endl;
//	}
//	return 0;
//}
//
//
//
//
////#include<iostream>
////#include<algorithm>
////#include<vector>
////using namespace std;
////
////int dp[205][1500];
////
////int main() {
////	int t;
////	cin >> t;
////	while (t--) {
////		memset(dp, 0, sizeof dp);
////		vector<int>rocks;
////		int tot = 0;
////		for (int i = 1; i <= 6; ++i) {
////			int cnt;
////			cin >> cnt;
////			for (int j = 0; j < cnt; ++j) {
////				rocks.push_back(i);
////				tot += i;
////			}
////		}
////		if (tot & 1) {
////			cout << "NO" << endl;
////			continue;
////		}
////		int n = rocks.size();
////		for (int i = 1; i <= n; ++i) {
////			dp[i][rocks[i - 1]] = 1;
////			for (int j = 0; j <= tot; ++j) {
////				dp[i][j] |= dp[i - 1][j];
////				if (j - rocks[i - 1] >= 0) {
////					dp[i][j] |= dp[i - 1][j - rocks[i - 1]];
////				}
////			}
////		}
////		cout << (dp[n][tot / 2] ? "YES" : "NO") << endl;
////	}
////}
//
