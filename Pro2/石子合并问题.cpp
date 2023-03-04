//#include <iostream>
//#include <fstream>
//#include <string>
//using namespace std;
//
//#define INF 0x3f3f3f3f
//
//int n, s, stone[205], sum[205] = { 0 };
//int dp_min[205][205], dp_max[205][205];
////dp[i][j] ��i��j�ѵĺϲ���С�÷ֻ����÷�
////sum[i] �ӵ�һ�Ѻϲ���i������ĵ÷�
////dp[i==j] = 0
//
//int main() {
//	string str;
//	for (int f = 0; f <= 9; f++) {
//		str = "D:\\�㷨ʵ��\\6\\PEBBLE MERGING\\TEST\\MERGE" + to_string(f) + ".IN";
//		ifstream fread(str);
//		if (fread.fail()) {
//			cout << "���ļ�ʧ��" << endl;
//			exit(0);
//		}
//		memset(dp_min, INF, sizeof(dp_min));
//		memset(dp_max, -INF, sizeof(dp_max));
//		fread >> n;
//		for (int i = 0; i < 2 * n; i++) {
//			dp_min[i][i] = 0;//����
//			dp_max[i][i] = 0;
//		}
//		for (int i = 0; i < n; i++) {
//			fread >> stone[i];
//			stone[i + n] = stone[i];
//		}
//		for (int i = 0; i < 2 * n; i++) {//�ϲ�����ĵ÷�
//			if (0 == i)
//				sum[i] = stone[i];
//			else
//				sum[i] = sum[i - 1] + stone[i];
//		}
//		for (int st = 1; st < n; st++) {//ʯ�Ӷ���
//			for (int i = 0; i < 2 * n - st ; i++) {//��i�ѵ���j��
//				int j = i + st; //ÿ��ʯͷ�Ķ���
//				for (int k = i; k < j; k++) {//��Ϊi--k, k+1--j
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
//		for (int i = 0; i + n - 1 < 2 * n; i++) {//���βٳ����ӵ�i�ѵ�i+n-1��
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
////���� dp[i][i] = 0
////��� dp[0][n-1]
////ͨ�� dp[i][j] ��i�Ѻϲ���j�ѵ���С�÷� i--k + k+1--j + i--j����÷�sum[j] - sum[i-1]
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
//		dp[i][i] = 0;//����
//	int s;
//	for (int st = 1; st < n; st++) {//�ϲ��Ķ���
//		for (int i = 0; i < n - st; i++) {
//			int j = i + st;//ÿ�κϲ��Ķ���
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