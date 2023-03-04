//#include<iostream>
//#include<queue>
//
//using namespace std;
//
//struct node {
//	int x;
//	int y;
//	int z;
//	int step;
//};
//
//int maps[55][55][55] = { 0 };
//int visited[55][55][55] = { 0 };
//int X[7] = { 0,1,0,-1,0,0 };
//int Y[7] = { 1,0,-1,0,0,0 };
//int Z[7] = { 0,0,0,0,1,-1 };
//
//int main() {
//	int k;
//	cin >> k;
//	while (k--) {
//		queue<node> q;
//		memset(maps, 0, sizeof(maps));
//		memset(visited, 0, sizeof(visited));
//		int a, b, c, time;
//		cin >> a >> b >> c >> time;
//		for (int n = 1; n <= a; n++) 
//			for (int i = 1; i <= b; i++) 
//				for (int j = 1; j <= c; j++)
//					cin >> maps[n][i][j];
//		int tx = a, ty = b, tz = c;
//		node s = { 1, 1, 1, 0 };
//		q.push(s);
//		visited[s.x][s.y][s.z] = 1;
//		int flag = 0;
//		int nx, ny, nz;
//		while (!q.empty()) {
//			for (int i = 0; i < 7; i++) {
//				nx = q.front().x + X[i];
//				ny = q.front().y + Y[i];
//				nz = q.front().z + Z[i];
//				if (nx >= 1 && nx <= a && ny >= 1 && ny <= b && nz >= 1 && nz <= c && maps[nx][ny][nz] == 0 && visited[nx][ny][nz] == 0) {
//					visited[nx][ny][nz] = 1;
//					s.x = nx;
//					s.y = ny;
//					s.z = nz;
//					s.step = q.front().step + 1;
//					q.push(s);
//					if (nx == tx && ny == ty && nz == tz) {
//						flag = 1;
//						break;
//					}
//				}
//			}
//			if (flag)
//				break;
//			q.pop();
//		}
//		if (q.back().step <= time && flag)
//			cout << q.back().step << endl;
//		else
//			cout << -1 << endl;
//	}
//	return 0;
//}
//
