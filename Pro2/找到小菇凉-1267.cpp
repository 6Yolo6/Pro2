//#include <iostream>
//#include <queue>
//#include <cstdio>
//using namespace std;
//
//struct Point {
//	int x;
//	int y;
//	int cnt;
//};
//
//int N, M;
//int dx[] = { 0, 0, 1, -1 };
//int dy[] = { 1, -1, 0, 0 };
//int sx, sy, tx, ty;
//int **forest;
//int **visited;
////.！！0 #！！1
////A！！2  B！！3
//
//bool isFind(int x, int y) {
//	if (x != tx && y != ty)
//		return false;
//	else if (x == tx) {
//		if (y > ty) {
//			for (int i = ty + 1; i < y; i++)
//				if (forest[x][i] == 1)
//					return false;
//		}
//		else {
//			for (int i = y + 1; i < ty; i++)
//				if (forest[x][i] == 1)
//					return false;
//		}
//	}
//	else if (y == ty) {
//		if (x > tx) {
//			for (int i = tx + 1; i < x; i++)
//				if (forest[i][y] == 1)
//					return false;
//		}
//		else {
//			for (int i = x + 1; i < tx; i++)
//				if (forest[i][y] == 1)
//					return false;
//		}
//	}
//	return true;
//}
//
//int bfs() {
//	queue<Point> q;
//	Point p = { sx, sy, 0 };
//	q.push(p);
//	int nx, ny;
//	while (!q.empty()) {
//		int qx = q.front().x;
//		int qy = q.front().y;
//		int t = q.front().cnt;
//		q.pop();
//		for (int i = 0; i < 4; i++) {
//			nx = qx + dx[i];
//			ny = qy + dy[i];
//			if (nx >= 0 && nx < N && ny >= 0 && ny < M && forest[nx][ny] == 0 && visited[nx][ny] == 0) {
//				visited[nx][ny] = 1;
//				if (!isFind(nx, ny)) {
//					//p = { nx, ny, t + 1 };
//					p.x = nx;
//					p.y = ny;
//					p.cnt = t + 1;
//					q.push(p);
//				}
//				else
//					return t + 1;
//			}
//		}
//	}
//	return 0;
//}
//
//int main() {
//	cin >> N >> M;
//	char ch;
//	forest = new int* [N];
//	visited = new int* [N];
//	for (int i = 0; i < N; i++) {
//		forest[i] = new int[M];
//		visited[i] = new int[M];
//		memset(visited[i], 0, M * sizeof(int));
//	}
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			scanf(" %c", &ch);
//			if (ch == '.')
//				forest[i][j] = 0;
//			else if (ch == '#')
//				forest[i][j] = 1;
//			else if (ch == 'A') {
//				forest[i][j] = 2;
//				tx = i;
//				ty = j;
//			}
//			else if (ch == 'B') {
//				forest[i][j] = 3;
//				sx = i;
//				sy = j;
//			}
//		}
//	}
//	int cnt = bfs();
//	if (cnt == 0)
//		cout << "No!!!" << endl;
//	else
//		cout << cnt << endl;
//	return 0;
//}