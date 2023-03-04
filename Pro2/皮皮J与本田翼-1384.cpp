//#include <iostream>
//#include <queue>
//#include <string>
//
//using namespace std;
//
//int visited[1000005] = { 0 };
//
//void bfs(int n, string k) {
//	fill(visited, visited + n, 0);
//	queue<string> q;
//	q.push(k);
//	while (!q.empty()) {
//		string s = q.front();
//		q.pop();
//		int flag = 0;
//		for (int i = 0; i < s.size(); i++)
//			flag = (s[i] - '0' + flag * 10) % n;
//		if (0 == flag) {
//			cout << s << endl;
//			break;
//		}
//		else if (0 == visited[flag]){
//			q.push(s + "0");
//			q.push(s + k);
//			visited[flag] = 1;
//		}
//	}
//}
//
//int main() {
//	int t, n;
//	string k;
//	cin >> t;
//	while (t--) {
//		cin >> n >> k;
//		bfs(n, k);
//	}
//	return 0;
//}