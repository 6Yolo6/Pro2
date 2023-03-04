//#include <iostream>
//
//using namespace std;
//int block[105][105] = { 0 };
//int main1374() {
//	int X[] = { 0, 0, 1, -1 }, Y[] = { 1, -1, 0, 0 };
//	int t, n, m, x, y, area;
//	cin >> t;
//	for (int i = 0; i < t; i++) {
//		area = 0;
//		memset(block, 0, sizeof(block));
//		cin >> n >> m;
//		for (int j = 1; j <= n; j++)
//			for (int k = 1; k <= m; k++)
//				cin >> block[j][k];
//		for (int j = 1; j <= n; j++) {
//			for (int k = 1; k <= m; k++) {
//				if (block[j][k] != 0)
//					area++;
//				area += max((block[j][k] - block[j + 1][k]), 0);
//				area += max((block[j][k] - block[j - 1][k]), 0);
//				area += max((block[j][k] - block[j][k + 1]), 0);
//				area += max((block[j][k] - block[j][k - 1]), 0);
//			}
//		}
//		cout << area << endl;
//	}
//	return 0;
//}


//#include <cstdio>
//#include <cstring>
//#include <iostream>
//using namespace std;
//
//int a[110][110];
//int main1374() {
//	int num1, sum;
//	int i, j, m, n;
//	scanf("%d", &num1);
//	while (num1--) {
//		sum = 0;
//		memset(a, 0, sizeof(a));
//		scanf("%d%d", &n, &m);
//		for (i = 1; i <= n; i++) {
//			for (j = 1; j <= m; j++) {
//				scanf("%d", &a[i][j]);
//			}
//		}
//		for (i = 1; i <= n; i++) {
//			for (j = 1; j <= m; j++) {
//				if (a[i][j] != 0) {
//					sum++;
//				}
//				sum += max(a[i][j] - a[i][j - 1], 0);
//				sum += max(a[i][j] - a[i][j + 1], 0);
//				sum += max(a[i][j] - a[i + 1][j], 0);
//				sum += max(a[i][j] - a[i - 1][j], 0);
//			}
//		}
//		printf("%d\n", sum);
//	}
//}