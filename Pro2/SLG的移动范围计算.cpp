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
//int main34534534532() {
//	int height, width;
//	cin >> width >> height;
//	int** area = new int* [height];
//	int** num = new int* [height];
//	int* m = new int[height * width];
//	for (int i = 0; i < height; i++) {
//		area[i] = new int[width]();
//		num[i] = new int[width]();
//	}
//	for (int i = 0; i < height; i++)
//		for (int j = 0; j < width; j++)
//			cin >> area[i][j];
//	int i, j;
//	cin >> j >> i;
//	int move;
//	cin >> move;
//	queue<Point> q;
//	Point point;
//	int n = move;
//	num[i][j] = 1;
//	area[i][j] = 0;
//	point = { i, j };
//	q.push(point);
//	m[i * width + j] = n;
//	int num_x[4] = { -1, 1, 0, 0 };
//	int num_y[4] = { 0, 0, -1, 1 };
//	int v, b, x, y;
//	while (!q.empty()) {
//		for (int k = 0; k < 4; k++) {
//			v = q.front().x;
//			b = q.front().y;
//			x = v + num_x[k];
//			y = b + num_y[k];
//			if (x >= height || y >= width || x < 0 || y < 0) //越界
//				continue;
//			if (1 == num[x][y]) { //走过
//				if (m[v * width + b] <= m[x * width + y] - area[v][b])
//					m[v * width + b] = m[x * width + y] - area[v][b];
//				else
//					continue;
//			}
//			else
//				m[x * width + y] = m[v * width + b] - area[x][y];
//			if (m[x * width + y] < 0) //移动力不足
//				continue;
//			num[x][y] = 1;
//			point = { x, y };
//			q.push(point);
//		}
//		q.pop();
//	}
//	for (int i = 0; i < height; i++) {
//		for (int j = 0; j < width; j++)
//			cout << num[i][j];
//		cout << endl;
//	}
//
//	for (int i = 0; i < height; i++) {
//		delete[] area[i];
//		delete[] num[i];
//		area[i] = nullptr;
//		num[i] = nullptr;
//	}
//	delete[] area;
//	delete[] num;
//	delete[] m;
//	area = nullptr;
//	num = nullptr;
//	m = nullptr;
//	return 0;
//}