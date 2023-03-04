//#include <iostream>
//#include <string>
//
//using namespace std;
//
////暴力匹配算法
//int violent_match(string s, string p) {
//	int i = 0, j = 0;
//	while (i < s.length() && j < p.length()) {
//		if (s[i] == p[j]) {
//			i++;
//			j++;
//		}
//		else {
//			//i回溯
//			i = i - j + 1;
//			j = 0;
//		}
//	}
//	if (j == p.length())
//		return i - j;
//	else
//		return -1;
//}
//
////next数组
//int* get_next(string p) {
//	int* next = new int[105];
//	next[0] = -1;
//	int j = 0, k = -1;
//	while (j < p.length() - 1) {
//		//p[k]--前缀	p[j]--后缀
//		if (k == -1 || p[j] == p[k]) {
//			j++;
//			k++;
//			if (p[j] != p[k])
//				next[j] = k;
//			else
//				//p[j] == p[next[j]]必然不匹配
//				next[j] = next[k];
//		}
//		else
//			k = next[k];
//	}
//	return next;
//}
////KMP算法
//int kmp_match(string s, string p) {
//	int* next = get_next(p);
//	int i = 0, j = 0;
//	int slen = s.length(), plen = p.length();
//	while (i < slen && j < plen) {
//		if (j == -1 || s[i] == p[j]) {
//			i++;
//			j++;
//		}
//		else {
//			j = next[j];
//		}
//	}
//	delete next;
//	if (j == plen)
//		return i - j;
//	else
//		return -1;
//}
//
//
//int main25408782() {
//	string s;
//	string p;//模式串
//	getline(cin, s);
//	getline(cin, p);
//	cout << violent_match(s, p) << endl;
//	cout << kmp_match(s, p) << endl;
//	return 0;
//}
