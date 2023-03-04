//#include <iostream>
//#include <queue>
//#include <cstdio>
//using namespace std;
//
//struct Point {
//	int x;
//	int y;
//	int time;
//	friend bool operator < (const Point &p1, const Point &p2) {
//		return p1.time > p2.time;
//	}
//};
//
//int T, N, M;
//int dx[] = { 0, 0, 1, -1 };
//int dy[] = { 1, -1, 0, 0 };
//int maps[20][20];
//int X[15], Y[15];
//int visited[20][20];
////0！！ 1
////#！！ 2
////T！！ 4
////X！！ -1
//
//
//int bfs(int sx, int sy, int tx, int ty) {
//	memset(visited, 0, sizeof(maps));
//	priority_queue<Point> q;
//	Point p = { sx, sy, 0 };
//	q.push(p);
//	visited[sx][sy] = 1;
//	int nx, ny;
//	while (!q.empty()) {
//		int qx = q.top().x;
//		int qy = q.top().y;
//		int qt = q.top().time;
//		if (qx == tx && qy == ty)
//			return qt;
//		q.pop();
//		for (int i = 0; i < 4; i++) {
//			nx = qx + dx[i];
//			ny = qy + dy[i];
//			if (nx >= 1 && nx <= N && ny >= 1 && ny <= M && maps[nx][ny] != -1 && visited[nx][ny] == 0) {
//				visited[nx][ny] = 1;
//				p.x = nx;
//				p.y = ny;
//				p.time = qt + maps[nx][ny];
//				q.push(p);
//			}
//		}
//	}
//	return 0;
//}
//
//int main() {
//	scanf("%d", &T);
//	char ch;
//	while (T--) {
//		scanf("%d%d", &N, &M);
//		memset(maps, 0, sizeof(maps));
//		for (int i = 1; i <= N; i++) {
//			for (int j = 1; j <= M; j++) {
//				scanf(" %c", &ch);
//				if (ch == '0')
//					maps[i][j] = 1;
//				else if (ch == '#')
//					maps[i][j] = 2;
//				else if (ch == 'T')
//					maps[i][j] = 4;
//				else if (ch == 'X')
//					maps[i][j] = -1;
//			}
//		}
//		getchar();
//		char c;
//		int x, y, tx, ty, cnt = 0;
//		while (cin >> c && c != '*') {
//			cin >> x >> y;
//			if (c == 'S') {
//				X[0] = x;
//				Y[0] = y;
//			}
//			else if (c == 'E') {
//				tx = x;
//				ty = y;
//			}
//			else {
//				X[c - '0'] = x;
//				Y[c - '0'] = y;
//				cnt++;
//			}
//		}
//		cnt++;
//		X[cnt] = tx;
//		Y[cnt] = ty;//嶮泣
//		int Time = 0;
//		for (int i = 0; i < cnt; i++)
//			Time += bfs(X[i], Y[i], X[i + 1], Y[i + 1]);
//		printf("%d\n", Time);
//	}
//	return 0;
//}
//
//
