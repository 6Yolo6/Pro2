//#include <iostream>
//#include <fstream>
//#include <string>
//using namespace std;
//
//int dp[20005];
////dp[i] 钱为i的最少硬币数
//
//int main() {
//	string s;
//	for (int f = 0; f <= 6; f++) {
//		s = "D:\\算法实验\\6\\COIN CHANGING\\TEST\\COINS" + to_string(f) + ".IN";
//		ifstream fread(s);
//		if (fread.fail()) {
//			cout << "打开文件失败" << endl;
//			exit(0);
//		}
//		memset(dp, 10000, sizeof(dp));
//		dp[0] = 0;//初始钱0需要0个硬币
//		int n, M, t[15], coin[15];
//		//cin >> n;
//		fread >> n;
//		for (int i = 0; i < n; i++)
//			//cin >> t[i] >> coin[i];
//			fread >> t[i] >> coin[i];
//		//cin >> M;
//		fread >> M;
//		for (int i = 0; i < n; i++) {//硬币面值
//			for (int c = 1; c <= coin[i]; c++) {//硬币个数
//				for (int m = t[i]; m <= M; m++) {//钱m
//					dp[m] = min(dp[m], dp[m - t[i]] + 1);//
//				}
//			}
//		}
//		if (dp[M] > M)
//			cout << -1 << endl;
//		else
//			cout << dp[M] << endl;
//	}
//	return 0;
//}