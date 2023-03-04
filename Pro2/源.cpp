//#include<iostream>
//
//using namespace std;
//
//int height[100005], father[100005];
//
//void init(int n) {
//	for (int i = 0; i < n; i++) {
//		father[i] = i;
//		height[i] = 1;
//	}
//}
//
//int findRoot(int x) {
//	while (father[x] != x) {
//		x = father[x];
//	}
//	return x;
//}
//
//
//int uniteGp(int x, int y) {
//	x = findRoot(x);
//	y = findRoot(y);
//	if (x != y) {
//
//		if (height[x] < height[y]) {
//			father[x] = y;
//			return y;
//		}
//		else {
//			father[y] = x;
//			if (height[x] == height[y]) {
//				height[x]++;
//			}
//			return x;
//		}
//	}
//	return x;
//}
//
//bool sameGp(int x, int y) {
//
//	return (findRoot(father[x]) == findRoot(father[y])) ? true : false;
//
//}
//
//
//int u[100005] = { 0 }, v[100005] = { 0 }, op[100005][3] = { 0 }, flag[100005] = { 0 }, yes[100005] = { 0 };
//
//int main() {
//	int n, m, q;
//
//	scanf("%d%d%d", &n, &m, &q);
//	/*int* u = new int[n+1];
//	int* v = new int[n+1];
//	int** op = new int* [q+1];
//	int* flag = new int[m+1];
//
//	int *yes = new int[q];
//	for (int i = 0; i < q; i++) {
//		op[i] = new int[3];
//	}*/
//
//	int cnt = 0;
//	getchar();
//	init(n);
//	for (int i = 1; i <= m; i++) {
//		scanf("%d%d", &u[i], &v[i]);
//	}
//
//	for (int i = 0; i < q; i++) {
//		getchar();
//		char c;
//		scanf("%c", &c);
//		if (c == 'Z') {
//			op[i][0] = 0;
//			scanf("%d%d", &op[i][1], &op[i][2]);
//		}
//		else {
//			op[i][0] = 1;
//			scanf("%d", &op[i][1]);
//			flag[op[i][1]] = 1;
//		}
//	}
//
//
//	for (int i = 1; i <= m; i++) {//把所有的连起来  从1开始
//		if (flag[i])//破路不连
//			continue;
//		else
//			uniteGp(u[i], v[i]);
//	}
//	for (int i = q - 1; i >= 0; i--) {
//		if (op[i][0] == 0) {
//			if (sameGp(op[i][1], op[i][2]))
//			{
//				yes[cnt++] = 1;
//			}
//			else {
//				yes[cnt++] = 0;
//			}
//		}
//		else {
//			uniteGp(u[op[i][1]], v[op[i][1]]);
//		}
//	}
//	for (int i = cnt - 1; i >= 0; i--) {
//		if (yes[i])
//			cout << "Yes" << endl;
//		else
//			cout << "No" << endl;
//	}
//	return 0;
//}
