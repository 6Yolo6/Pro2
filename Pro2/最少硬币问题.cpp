//#include <iostream>
//#include <fstream>
//#include <string>
//using namespace std;
//
//int dp[20005];
////dp[i] ǮΪi������Ӳ����
//
//int main() {
//	string s;
//	for (int f = 0; f <= 6; f++) {
//		s = "D:\\�㷨ʵ��\\6\\COIN CHANGING\\TEST\\COINS" + to_string(f) + ".IN";
//		ifstream fread(s);
//		if (fread.fail()) {
//			cout << "���ļ�ʧ��" << endl;
//			exit(0);
//		}
//		memset(dp, 10000, sizeof(dp));
//		dp[0] = 0;//��ʼǮ0��Ҫ0��Ӳ��
//		int n, M, t[15], coin[15];
//		//cin >> n;
//		fread >> n;
//		for (int i = 0; i < n; i++)
//			//cin >> t[i] >> coin[i];
//			fread >> t[i] >> coin[i];
//		//cin >> M;
//		fread >> M;
//		for (int i = 0; i < n; i++) {//Ӳ����ֵ
//			for (int c = 1; c <= coin[i]; c++) {//Ӳ�Ҹ���
//				for (int m = t[i]; m <= M; m++) {//Ǯm
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