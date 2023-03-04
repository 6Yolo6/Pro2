//#include <cstdio>
//#include <math.h>
//
//int xs[100000], ys[100000], xi[100000], yi[100000];
//
//int main() {
//	int t, n, m, num, maxd = 0;
//	scanf("%d", &t);
//	while (t--) {
//		scanf("%d", &n);
//		for (int i = 0; i < n; i++) {
//			scanf("%d%d", &xi[i], &yi[i]);
//		}
//		scanf("%d", &m);
//		for (int i = 0; i < n; i++) {
//			scanf("%d%d", &xs[i], &ys[i]);
//			num = abs(xs[i] - xi[i]) + abs(ys[i] - yi[i]);
//			maxd = maxd < num ? num : maxd;
//		}
//		printf("%d\n", maxd);
//	}
//	return 0;
//}