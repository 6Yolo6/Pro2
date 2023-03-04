//#include <iostream>
//#include <stack>
//
//using namespace std;
//
//int main45212870() {
//	int n;
//	int cnt = 0;
//	cin >> n;
//	stack<int> s;
//	while (n--) {
//		string str;
//		int i;
//		cin >> str;
//		if (0 == str.compare("U")) {
//			cin >> i;
//			s.push(i);
//			cnt++;
//		}
//		else if(0 == str.compare("O")) {
//			if (!s.empty()) {
//				cout << s.top() << endl;
//				s.pop();
//				cnt--;
//			}
//		}
//	}
//	cout << cnt << endl;
//	return 0;
//}