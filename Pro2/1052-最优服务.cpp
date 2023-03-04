//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//
//using namespace std;
//
//int i, j, sum = 0;
//int n, s, t[105], w_time[105];
//
//int main() {
//	scanf("%d%d", &n, &s);
//	for (i = 0; i < n; i++)
//		scanf("%d", &w_time[i]);
//	sort(w_time, w_time + n);
//	for (i = 0; i < s; i++)
//		t[i] = 0;
//	for (i = 0; i < n; i++) {
//		j = i % s;
//		t[j] += w_time[i];
//		sum += t[j];
//	}
//	double wait = sum / (n * 1.0);
//	printf("%.2lf\n", wait);
//	return 0;
//}
//
//
//
