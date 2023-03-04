//#include <iostream>
//
//using namespace std;
//
//int n, m, * num, * num2, dep;
//int flag[100000] = { 0 };
//char str[100000];
//
//bool calc(int num) {
//	int s = num2[1];
//	for (int i = 1; i <= num - 1; i++) {
//		if (str[i] == '+')
//			s += num2[i + 1];
//		else if (str[i] == '-')
//			s -= num2[i + 1];
//		else if (str[i] == '*')
//			s *= num2[i + 1];
//		else if (str[i] == '/')
//			s /= num2[i + 1];
//	}
//	return s == m;
//}
//
//bool dfs(int s, int maxd) {
//	if (s > maxd) {
//		if (calc(s)) {
//			dep = s;
//			return true;
//		}
//		else
//			return false;
//	}
//	for (int i = 1; i <= n; i++) {//运算数
//		if (0 == flag[i]) {
//			num2[s + 1] = num[i];
//			flag[i] = 1;
//			for (int j = 0; j < 4; j++) {//运算符
//				if (0 == j)
//					str[s + 1] = '+';
//				else if (1 == j)
//					str[s + 1] = '-';
//				else if (2 == j)
//					str[s + 1] = '*';
//				else if (3 == j)
//					str[s + 1] = '/';
//				if (dfs(s + 1, maxd))
//					return true;
//			}
//			flag[i] = 0; //回溯
//		}
//	}
//	return false;
//}
//
//int main() {
//	cin >> n >> m;
//	num = new int[n + 2]();
//	num2 = new int[n + 2]();
//	for (int i = 1; i <= n; i++)
//		cin >> num[i];
//	for (int maxd = 0; maxd < n; maxd++) {
//		dep = 0;
//		if (dfs(0, maxd)) {
//			cout << dep - 1 << endl;
//			int j;
//			for (j = 1; j <= dep - 1; j++) {
//				cout << num2[j] << str[j];
//				
//			}
//			cout << num2[j];
//			return 0;
//		}
//	}
//	cout << "No Solution!" << endl;
//	return 0;
//}