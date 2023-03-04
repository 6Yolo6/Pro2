//#include <iostream>
//#include <fstream>
//#include <string>
//using namespace std;
//
//#define INF 0x3f3f3f3f
//
//int n, s, stone[205], sum[205] = { 0 };
//int dp_min[205][205], dp_max[205][205];
////dp[i][j] 从i到j堆的合并最小得分或最大得分
////sum[i] 从第一堆合并到i堆所需的得分
////dp[i==j] = 0
//
//int main() {
//	string str;
//	for (int f = 0; f <= 9; f++) {
//		str = "D:\\算法实验\\6\\PEBBLE MERGING\\TEST\\MERGE" + to_string(f) + ".IN";
//		ifstream fread(str);
//		if (fread.fail()) {
//			cout << "打开文件失败" << endl;
//			exit(0);
//		}
//		memset(dp_min, INF, sizeof(dp_min));
//		memset(dp_max, -INF, sizeof(dp_max));
//		fread >> n;
//		for (int i = 0; i < 2 * n; i++) {
//			dp_min[i][i] = 0;//出口
//			dp_max[i][i] = 0;
//		}
//		for (int i = 0; i < n; i++) {
//			fread >> stone[i];
//			stone[i + n] = stone[i];
//		}
//		for (int i = 0; i < 2 * n; i++) {//合并所需的得分
//			if (0 == i)
//				sum[i] = stone[i];
//			else
//				sum[i] = sum[i - 1] + stone[i];
//		}
//		for (int st = 1; st < n; st++) {//石子堆数
//			for (int i = 0; i < 2 * n - st ; i++) {//第i堆到第j堆
//				int j = i + st; //每次石头的堆数
//				for (int k = i; k < j; k++) {//分为i--k, k+1--j
//					if (0 == i)
//						s = sum[j];
//					else
//						s = sum[j] - sum[i - 1];
//					dp_min[i][j] = min(dp_min[i][j], dp_min[i][k] + dp_min[k + 1][j] + s);
//					dp_max[i][j] = max(dp_max[i][j], dp_max[i][k] + dp_max[k + 1][j] + s);
//				}
//			}
//		}
//		int d_min = INF;
//		int d_max = -INF;
//		for (int i = 0; i + n - 1 < 2 * n; i++) {//环形操场，从第i堆到i+n-1堆
//			d_min = min(d_min, dp_min[i][i + n - 1]);
//			d_max = max(d_max, dp_max[i][i + n - 1]);
//		}
//		cout << d_min << endl;
//		cout << d_max << endl << endl;
//	}
//	return 0;
//}



//
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//int n, st;
//int dp[105][105];
//int stone[105], sum[105];
//
////出口 dp[i][i] = 0
////起调 dp[0][n-1]
////通项 dp[i][j] 从i堆合并到j堆的最小得分 i--k + k+1--j + i--j所需得分sum[j] - sum[i-1]
//
//int main() {
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> stone[i];
//		if (i == 0)
//			sum[i] = stone[i];
//		else
//			sum[i] = sum[i - 1] + stone[i];
//	}
//	fill(dp[0], dp[0] + 105 * 105, 0x3f3f3f3f);
//	for (int i = 0; i < n; i++)
//		dp[i][i] = 0;//出口
//	int s;
//	for (int st = 1; st < n; st++) {//合并的堆数
//		for (int i = 0; i < n - st; i++) {
//			int j = i + st;//每次合并的堆数
//			for (int k = i; k < j; k++) {
//				if (i == 0)
//					s = sum[j];
//				else
//					s = sum[j] - sum[i - 1];
//				dp[i][j] = min(dp[i][j], dp[i][k] + dp[k + 1][j] + s);
//			}
//		}
//	}
//	cout << dp[0][n - 1];
//}