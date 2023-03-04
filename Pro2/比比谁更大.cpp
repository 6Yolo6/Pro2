//#include <iostream>
//#include <queue>
//
//using namespace std;
//
//struct Point {
//	int x;
//	int y;
//};
//
//int main215151211() {
//	int height, width;
//	cin >> width >> height;
//	int** area = new int* [height];
//	for (int i = 0; i < height; i++)
//		area[i] = new int[width]();
//	for (int i = 0; i < height; i++)
//		for (int j = 0; j < width; j++)
//			cin >> area[i][j];
//	int* cnt = new int[width * height]();
//	queue<Point> q;
//	Point point;
//	int n[50][50] = { 0 };
//	for (int i = 0; i < height; i++) {
//		for (int j = 0; j < width; j++) {
//			if (area[i][j]) {
//				point = { i, j };
//				q.push(point);
//				int cnt1 = 1;
//				while (!q.empty()) {
//					int x = q.front().x;
//					int y = q.front().y;
//					n[x][y] = 1;
//					if (x + 1 < height && 0 == n[x + 1][y] && area[x + 1][y] == area[x][y]) {
//						n[x + 1][y] = 1;
//						point = { x + 1, y };
//						q.push(point);
//						cnt1++;
//					}
//					if (x - 1 >= 0 && 0 == n[x - 1][y] && area[x - 1][y] == area[x][y]) {
//						n[x - 1][y] = 1;
//						point = { x - 1, y };
//						q.push(point);
//						cnt1++;
//					}
//					if (y + 1 < width && 0 == n[x][y + 1] && area[x][y + 1] == area[x][y]) {
//						n[x][y + 1] = 1;
//						point = { x, y + 1 };
//						q.push(point);
//						cnt1++;
//					}
//					if (y - 1 >= 0 && 0 == n[x][y - 1] && area[x][y - 1] == area[x][y]) {
//						n[x][y - 1] = 1;
//						point = { x, y - 1 };
//						q.push(point);
//						cnt1++;
//					}
//					q.pop();
//				}
//				if (cnt1 > cnt[area[i][j]])
//					cnt[area[i][j]] = cnt1;
//			}
//		}
//	}
//	int m;
//	for (int i = 0; i < height * width; i++) {
//		if (cnt[0] <= cnt[i]) {
//			cnt[0] = cnt[i];
//			m = i;
//		}
//	}
//	if (cnt[0] == 0)
//		cout << "None" << endl;
//	else
//		cout << m << " " << cnt[0] << endl;
//	for (int i = 0; i < height; i++) {
//		delete[] area[i];
//		area[i] = nullptr;
//	}
//	delete[] area;
//	area = nullptr;
//	delete[] cnt;
//	cnt = nullptr;
//	return 0;
//}