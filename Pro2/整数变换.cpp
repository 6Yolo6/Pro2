//#include <cstdio>
//#include <iostream>
//#include <fstream>
//
//using namespace std;
//int n, m;
//string str;
//
//bool dfs(int n, int s, int max) {
//	if (s >= max)
//		return false;
//	int num = n;
//	for (int i = 0; i < 2; i++) {
//		if (num == m)
//			return true;
//		else {
//			if (0 == i)
//				num = 3 * n;
//			else
//				num = n >> 1;
//			if (num == m || dfs(num, s + 1, max)) {
//				if (0 == i)
//					str += "f";
//				else
//					str += "g";
//				return true;
//			}
//		}
//	}
//	return false;
//}
//
//int main() {
//	ifstream fread("FUNC0.IN");
//	ofstream fwrite("FUNC0.OUT");
//	if (fread.fail() || fwrite.fail()) {
//		cout << "打开文件失败" << endl;
//		exit(0);
//	}
//	//scanf("%d%d", &n, &m);
//	fread >> n >> m;
//	cout << n << m;
//	bool flag = false;
//	int maxd = 0;
//	while (1) {
//		if (flag)
//			break;
//		else
//			flag = dfs(n, 0, ++maxd);
//	}
//	cout << maxd << endl << str << endl;
//	fwrite << maxd << endl << str << endl;
//	return 0;
//}