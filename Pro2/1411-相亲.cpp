//#include <cstdio>
//#include <algorithm>
//
//using namespace std;
//
//int main() {
//	int T, n, m, xi[100005], yi[100005], xs[100005], ys[100005], xy, x_y, _xy, _x_y;
//	scanf("%d", &T);
//	while (T--) {
//		scanf("%d", &n);
//		xy = x_y = _xy = _x_y = -0x3f3f3f3f;
//		for (int i = 0; i < n; i++) {
//			scanf("%d%d", &xi[i], &yi[i]);
//			xy = max(xy, xi[i]+ yi[i]);
//			x_y = max(x_y, xi[i] - yi[i]);
//			_xy = max(_xy, -xi[i] + yi[i]);
//			_x_y = max(_x_y, -xi[i] - yi[i]);
//		}
//		scanf("%d", &m);
//		for (int i = 0; i < m; i++) {
//			scanf("%d%d", &xs[i], &ys[i]);
//			printf("%d\n", max(xs[i] + ys[i] + _x_y, max(-xs[i] - ys[i] + xy, max(xs[i] - ys[i] + _xy, -xs[i] + ys[i] + x_y))));
//		}
//	}
//	return 0;
//}