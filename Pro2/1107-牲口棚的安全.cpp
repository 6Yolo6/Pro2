//#include<iostream>
//#include<algorithm>
//
//using namespace std;
//int n, m, s, s1, s2;
//char a[10005], b[10005];
//
//void dfs(int dep, int t) {
//	if (dep == n + 1) {
//		if (s1 >= 1 && s2 >= 2) {
//			s++;
//			for (int i = 1; i <= n; i++)
//				cout << b[i]; //输出
//			cout << endl;
//		}
//		return;
//	}
//	for (int i = t; i <= m; i++) {
//		b[dep] = a[i];
//		if (b[dep] == 'a' || b[dep] == 'e' || b[dep] == 'i' || b[dep] == 'o' || b[dep] == 'u')//元音
//			s1++;
//		else 
//			s2++;//辅音个数加1
//		dfs(dep + 1, i + 1);
//		if (b[dep] == 'a' || b[dep] == 'e' || b[dep] == 'i' || b[dep] == 'o' || b[dep] == 'u')
//			s1--;//回溯
//		else 
//			s2--;
//		b[dep] = 0;
//	}
//}
//int main() {
//	cin >> n >> m;
//	for (int i = 1; i <= m; i++)
//		cin >> a[i];
//	sort(a + 1, a + m + 1);
//	dfs(1, 1);
//}
