//#include <iostream>
//#include <string>
//
//using namespace std;
//
//struct node {
//	char x;
//	char y;
//};
//int k = 0;
//node spell[1000];
//bool flag = false, b[1000];
//
//void dfs(char s) {
//	if (s == 'm') {
//		printf("Yes\n");
//		flag = 1;
//		return;
//	}
//	else {
//		for (int i = 0; i < k; i++) {
//			if (!visit[i] && spell[i].x == s) {
//				visit[i] = true;
//				dfs(spell[i].y);
//				visit[i] = false;
//			}
//		}
//	}
//}
//int main() {
//	string s;
//	memset(b, false, sizeof(b));
//	while (cin >> s) {
//		if (s[0] == '0' && s.size() == 1) {
//			flag = false;
//			memset(b, false, sizeof(b));
//			dfs('b');
//			k = 0; 
//			if (!flag)
//				printf("No\n");
//		}
//		else {
//			spell[k].x = s[0];
//			spell[k++].y = s[s.size() - 1];
//		}
//	}
//	return 0;
//}
