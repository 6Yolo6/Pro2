//#include <iostream>
//#include <queue>
//
//using namespace std;
//
////µÝ¹é
//void fill_area(int x, int y, int h, int w, int** area) {
//	int X[4] = { -1, 0, 1, 0 };
//	int Y[4] = { 0, 1, 0, -1 };
//	int m, n;
//	for (int i = 0; i < 4; i++) {
//		m = x + X[i];
//		n = y + Y[i];
//		if (m >= 0 && n >= 0 && m < h && n < w) {
//			if (0 == area[m][n]) {
//				area[m][n] = 1;
//				fill_area(m, n, h, w, area);
//			}
//		}
//	}
//}
//
////¶ÓÁÐ
//struct Point {
//	int x;
//	int y;
//};
//
//void queue_fill(int x, int y, int h, int w, int** area) {
//	queue<Point> q;
//	Point point = { x, y };
//	q.push(point);
//	while (!q.empty()) {
//		int i = q.front().x;
//		int j = q.front().y;
//		if (i + 1 < h && 0 == area[i + 1][j]) {
//			point = { i + 1, j };
//			q.push(point);
//			area[i + 1][j] = 1;
//		}
//		if (i - 1 >= 0 && 0 == area[i - 1][j]) {
//			point = { i - 1, j };
//			q.push(point);
//			area[i - 1][j] = 1;
//		}
//		if (j + 1 < w && 0 == area[i][j + 1]) {
//			point = { i, j + 1 };
//			q.push(point);
//			area[i][j + 1] = 1;
//		}
//		if (j - 1 >= 0 && 0 == area[i][j - 1]) {
//			point = { i, j - 1 };
//			q.push(point);
//			area[i][j - 1] = 1;
//		}
//		q.pop();
//	}
//}
//
//
//int main1545612222() {
//	int height, width;
//	cin >> width >> height;
//	int** area = new int* [height];
//	for (int i = 0; i < height; i++)
//		area[i] = new int[width]();
//	for (int i = 0; i < height; i++)
//		for (int j = 0; j < width; j++)
//			cin >> area[i][j];
//	int i, j;
//	cin >> j >> i;
//	if (0 == area[i][j]) {
//		//fill_area(i, j, height, width, area);
//		area[i][j] = 1;
//		queue_fill(i, j, height, width, area);
//	}
//	for (int i = 0; i < height; i++) {
//		for (int j = 0; j < width; j++)
//			cout << area[i][j] << " ";
//		cout << endl;
//	}
//	for (int i = 0; i < height; i++) {
//		delete[] area[i];
//		area[i] = nullptr;
//	}
//	delete[] area;
//	area = nullptr;
//	return 0;
//}