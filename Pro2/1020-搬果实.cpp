//#include <iostream>
//#include <fstream>
//#include <string>
//using namespace std;
//
//int n, s, stone[105], sum[105] = { 0 };
//int dp_min[105][105];
////dp[i][j] 从i到j堆的合并最小得分或最大得分
////sum[i] 从第一堆合并到i堆所需的得分
////dp[i==j] = 0
//
//int main() {
//	memset(dp_min, 0x3f3f3f3f, sizeof(dp_min));
//	cin >> n;
//	for (int i = 0; i < n; i++)
//		dp_min[i][i] = 0;//出口
//	for (int i = 0; i < n; i++) {
//		cin >> stone[i];
//		if (0 == i)
//			sum[i] = stone[i];
//		else
//			sum[i] = sum[i - 1] + stone[i];
//	}
//	for (int st = 1; st < n; st++) {//果实堆数
//		for (int i = 0; i < n - st; i++) {//从第i堆到第j堆
//			int j = i + st; //每次果实的堆数
//			for (int k = i; k < j; k++) {//分为i-k, k+1-j
//				if (0 == i)
//					s = sum[j];
//				else
//					s = sum[j] - sum[i - 1];
//				dp_min[i][j] = min(dp_min[i][j], dp_min[i][k] + dp_min[k + 1][j] + s);
//			}
//		}
//	}
//	cout << dp_min[0][n - 1] << endl;
//	return 0;
//}


