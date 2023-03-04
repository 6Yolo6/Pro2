//#include <iostream>
//#include <cstdio>
//using namespace std;
//
//long long num[3002][3002] = { 0 };
//
//int main()
//{
//	int t, n;
//	//cin >> t;
//	scanf("%d", &t);
//	//read(t);
//	while (t--) {
//		//cin >> n;
//		scanf("%d", &n);
//		getchar();
//		//read(n);
//		char ch;
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j <= i; j++) {
//				//cin.get();
//				//ch = cin.peek();
//				long long result = 0;
//				//while (isdigit(ch))//ÅÐ¶ÏÊÇ·ñÊÇÊý×Ö
//				//{
//				//	result = 10 * result + ch - '0';
//				//	cin.get();
//				//	ch = cin.peek();
//				//}
//				while (!(((ch = getchar()) >= '0') && (ch <= '9')));
//				result = ch - '0';
//				while (((ch = getchar()) >= '0') && (ch <= '9'))
//					result = 10 * result + ch - '0';
//				num[i][j] = result;
//			}
//		}
//		for (int i = n - 2; i >= 0; i--) {
//			for (int j = 0; j <= i; j++) {
//				num[i][j] += max(num[i + 1][j], num[i + 1][j + 1]);
//			}
//		}
//		//cout << num[0][0] << endl;
//		printf("%I64d\n", num[0][0]);
//	}
//	return 0;
//}