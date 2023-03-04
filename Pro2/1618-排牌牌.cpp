//#include <iostream>
//#include <cstdio>
//using namespace std;
//
//int main() {
//	int n, num = 0, cnt = -1;
//	int letter[26] = { 0 };
//	char s[1005];
//	scanf("%d", &n);
//	getchar();
//	scanf("%s", s);
//	for (int i = 0; i < n; i++)
//		letter[s[i] - 'a']++;
//	for (int i = 0; i < 26; i++) {
//		if (letter[i] & 1)
//			num++;
//	}
//	if (n % 2 && num % 2 == 1 || num == 0) {
//		cnt = 0;
//		int i = 0, j = n - 1;
//		while (i < j) {
//			for (int k = j; k > i; k--) {
//				if (s[k] == s[i]) {
//					while (k++ < j) {
//						swap(s[k], s[k - 1]);
//						cnt++;
//					}
//					goto next;
//				}
//			}
//			j++;
//			cnt += n / 2 - i;
//		next:
//			i++;
//			j--;//Î²Ö¸ÕëÇ°ÒÆ
//		}
//	}
//	printf("%d\n", cnt);
//	return 0;
//}
//
