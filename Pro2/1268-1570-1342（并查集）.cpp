//#include <cstdio>
//#include <cstring>
//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//#define MAX 100005
//int father[MAX], height[MAX];// ruin[MAX] = { 0 };
////int u[MAX], v[MAX], t[MAX];
////int op[MAX][3];
//int books[1005][105];
//
////初始化
//void init(int n) {
//	for (int i = 0; i <= n; i++) {
//		father[i] = i;
//		height[i] = 1;
//	}
//}
////找根节点
//int findRoot(int x) {
//	while (father[x] != x) {
//		x = father[x];
//	}
//	return x;
//}
////判断是否同根节点
//int isSameRoot(int x, int y) {
//	return findRoot(x) == findRoot(y);
//}
////合并，返回新根节点
//int unite(int x, int y) {
//	if (x == -1)
//		return y;
//	if (y == -1)
//		return x;
//	x = findRoot(x);
//	y = findRoot(y);
//	if (x == y)
//		return x;
//	if (height[x] < height[y]) {
//		father[x] = y;
//		return y;
//	}
//	else {
//		father[y] = x;
//		if (height[x] == height[y])
//			height[x]++;
//		return x;
//	}
//}
//
//int isSame(int n) {
//	int flag = 0;
//	for (int i = 1; i < n; i++) {
//		if (isSameRoot(i, i + 1))
//			flag++;
//	}
//	return flag == n - 1 ? 1 : 0;
//}
//
//int main() {
//	//1268
//	//int n, m, f, k, p = 0, cnt = 0;
//	//scanf("%d%d", &n, &m);
//	//init(n);
//	//for (int i = 0; i < m; i++) {
//	//	scanf("%d", &k);
//	//	int root = -1;
//	//	for (int j = 0; j < k; j++) {
//	//		scanf("%d", &f);
//	//		root = unite(root, f);
//	//	}
//	//}
//	//for (int i = 0; i < n; i++) {
//	//	if (isSameRoot(i, 0) == 1)
//	//		cnt++;
//	//}
//	//printf("%d", cnt);
//	
//	//1570
//	//int n, m, q;
//	//scanf("%d%d%d", &n, &m, &q);
//	//for (int i = 1; i <= m; i++) 
//	//	scanf("%d%d", &u[i], &v[i]);
//	//char ch[2];
//	//for (int j = 1; j <= q; j++) {
//	//	scanf("%s", ch);
//	//	if (ch[0] == 'Z') {
//	//		op[j][0] = 1;
//	//		scanf("%d%d", &op[j][1], &op[j][2]);
//	//	}
//	//	else {
//	//		op[j][0] = -1;
//	//		scanf("%d", &op[j][1]);
//	//		ruin[op[j][1]] = 1;
//	//	}
//	//}
//	//init(n);
//	//for (int i = 1; i <= m; i++) {
//	//	if (ruin[i] != 1)
//	//		unite(u[i], v[i]);
//	//}
//	//vector<string> vec;
//	//for (int i = q; i >= 1; i--) {
//	//	if (op[i][0] == 1) {
//	//		if (isSameRoot(op[i][1], op[i][2]))
//	//			vec.push_back("Yes");
//	//		else
//	//			vec.push_back("No");
//	//	}
//	//	else {
//	//		unite(u[op[i][1]], v[op[i][1]]);
//	//	}
//	//}
//	//for (int i = vec.size() - 1; i >= 0; i--) {
//	//	cout << vec[i] << endl;
//	//}
//
//	//1342
//	//int n, m;
//	//cin >> n >> m;
//	//for (int i = 1; i <= m; i++) 
//	//	cin >> u[i] >> v[i] >> t[i];
//	//for (int i = m; i > 0; i--) {
//	//	int flag = 0;
//	//	for (int j = 1; j < i; j++) {
//	//		if (t[j] > t[j + 1]) {
//	//			swap(t[j], t[j + 1]);
//	//			swap(u[j], u[j + 1]);
//	//			swap(v[j], v[j + 1]);
//	//			flag = 1;
//	//		}
//	//	}
//	//	if (flag == 0)
//	//		break;
//	//}
//	//init(n);
//	//for (int i = 1; i <= m; i++) {
//	//	unite(u[i], v[i]);
//	//	if (isSame(n)) {
//	//		cout << t[i];
//	//		return 0;
//	//	}
//	//}
//	//cout << -1;
//	//for (int i = 1; i <= m; i++) {
//	//	cout << u[i] << " " << v[i] << " " << t[i] << endl;
//	//}
//
//	//1541
//	/*int n, m, book, root, friends = 0;
//	cin >> n >> m;
//	init(n);
//	while (m--) {
//		cin >> book;
//		root = -1;
//		for (int i = 0, j = 0; i < book; i++) {
//			cin >> books[j][i];
//			root = unite(root, books[j++][i]);
//		}
//	}
//	for (int i = 0; i < n; i++) {
//		if (isSameRoot(i, 0))
//			friends++;
//	}
//	cout << friends - 1 << endl;*/
//
//	return 0;
//}
//
