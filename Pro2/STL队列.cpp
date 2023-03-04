//#include <iostream>
//#include <queue>
//
//using namespace std;
//
//int main254245310() {
//	int n;
//	int cnt = 0;
//	cin >> n;
//	queue<int> q;
//	while (n--) {
//		string str;
//		cin >> str;
//		if (0 == str.compare("I")) {
//			int i;
//			cin >> i;
//			q.push(i);
//			cnt++;
//		}
//		else if (0 == str.compare("O")) {
//			if (!q.empty()) {
//				cout << q.front() << endl;
//				q.pop();
//				cnt--;
//			}
//		}
//	}
//	cout << cnt << endl;
//	return 0;
//}