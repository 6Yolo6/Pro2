//#include <iostream>
//
//using namespace std;
//
//int main1104()
//{
//	/*int n, num[11][11] = { 0 };
//	cin >> n;
//	for (int i = 0; i < n; i++)
//		for (int j = 0; j <= i; j++)
//			cin >> num[i][j];
//	for (int i = n - 2; i >= 0; i--) {
//		for (int j = 0; j <= i; j++) {
//			num[i][j] = min(num[i][j] + num[i + 1][j], num[i][j] + num[i + 1][j + 1]);
//		}
//	}
//	cout << num[0][0];*/
//	int n;
//	cin >> n;
//	int** num{ nullptr };
//	num = new int* [11];
//	for (int i = 0; i < 11; i++)
//	{
//		num[i] = new int[11];
//		memset(num[i], 0, sizeof(int) * 11);
//	}
//	for (int i = 0; i < n; i++)
//		for (int j = 0; j <= i; j++)
//			cin >> num[i][j];
//	for (int i = n - 2; i >= 0; i--) {
//		for (int j = 0; j <= i; j++) {
//			num[i][j] = min(num[i][j] + num[i + 1][j], num[i][j] + num[i + 1][j + 1]);
//		}
//	}
//	cout << num[0][0];
//	for (int i = 0; i < 11; i++)
//	{
//		delete[] num[i];
//		num[i] = nullptr;
//	}
//	delete[] num;
//	num = nullptr;
//	return 0;
//}

//#include <iostream>
//
//using namespace std;
//
//int n, dp[15][15] = { 0 };
//
//void print() {
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j <= i; j++) {
//			cout << dp[i][j] << " ";
//		}
//		cout << endl;
//	}
//}
//
//int main() {
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j <= i; j++) {
//			cin >> dp[i][j];
//		}
//	}
//	//反向dp
//	//for (int i = n - 2; i >= 0; i--) {
//	//	for (int j = 0; j <= i; j ++) {
//	//		dp[i][j] += min(dp[i+1][j], dp[i+1][j+1]);//
//	//		
//	//	}
//	//}
//	//print();
//	//cout << dp[0][0] << endl;
//
//	//正向dp
//	int re = 101;
//	for (int i = 1; i < n; i++) {
//		for (int j = 0; j <= i; j++) {
//			if (j == 0)
//				dp[i][j] += dp[i - 1][j];
//			else if (i == j)
//				dp[i][j] += dp[i - 1][j - 1];
//			else
//				dp[i][j] += min(dp[i - 1][j - 1], dp[i - 1][j]);
//			if (i == n - 1)
//				re = min(re, dp[i][j]);
//		}
//	}
//	print();
//	cout << re << endl;
//	return 0;
//}