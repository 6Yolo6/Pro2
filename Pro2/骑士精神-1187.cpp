//#include <iostream>
//#include <cstdio>
//using namespace std;
//
//bool flag = false;
//int sx, sy, step;
//int dx[] = { -1,-1,1,1,2,-2,2,-2 },
//dy[] = { 2,-2,2,-2,-1,-1,1,1 };
//int a[5][5] = { 0 };
//int t[5][5] = {
//	1,1,1,1,1,
//	0,1,1,1,1,
//	0,0,2,1,1,
//	0,0,0,0,1,
//	0,0,0,0,0
//};
//
//int diff() {
//	int cnt = 0;
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 5; j++) {
//			if (a[i][j] != t[i][j])
//				cnt++;
//		}
//	}
//	return cnt;
//}
//
//void print() {
//	printf("\n");
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 5; j++) {
//			printf("%d", a[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//void dfs(int x, int y, int s, int max) {
//	if (s == max) {
//		flag = (diff() == 0);
//		step = s;
//		return;
//	}
//	int nx, ny;
//	for (int i = 0; i < 8; i++) {
//		nx = x + dx[i];
//		ny = y + dy[i];
//		if (nx >= 0 && nx < 5 && ny >= 0 && ny < 5) {
//			swap(a[x][y], a[nx][ny]);
//			if ((s + 1 + diff() - 1) <= max)
//				dfs(nx, ny, s + 1, max);
//			swap(a[x][y], a[nx][ny]);
//		}
//	}
//}
//
//int main1187() {
//	int T;
//	char ch;
//	scanf("%d", &T);
//	while (T--) {
//		for (int i = 0; i < 5; i++) {
//			for (int j = 0; j < 5; j++) {
//				scanf(" %c", &ch);
//				if (ch == '*') {
//					a[i][j] = 2;
//					sx = i;
//					sy = j;
//				}
//				else
//					a[i][j] = ch - '0';
//			}
//		}
//		int maxd;
//		for (maxd = 0; maxd <= 10; maxd++) {
//			dfs(sx, sy, 0, maxd);
//			if (flag)
//				break;
//		}
//		printf("%d\n", flag ? step : -1);
//	}
//	return 0;
//}
