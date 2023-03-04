//#include <iostream>
//#include <stack>
//#include <string>
//
//using namespace std;
//
//int main254541201() {
//	string str;
//	getline(cin, str);
//	int i = 0;
//	stack<char> s1;
//	stack<char> s2;
//	while (str[i]) {
//		if (str[i] == '<') {//³·Ïú
//			if (str.empty()) {
//				i++;
//				continue;
//			}
//			s2.push(s1.top());
//			s1.pop();
//		}
//		else if (str[i] == '>') {//»Ö¸´
//			if (s2.empty()) {
//				i++;
//				continue;
//			}
//			s1.push(s2.top());
//			s2.pop();
//
//		}
//		else {
//			s1.push(str[i]);
//		}
//		i++;
//	}
//	str.resize(s1.size());
//	while (!s1.empty()) {
//		str[s1.size() - 1] = s1.top();
//		s1.pop();
//	}
//	cout << str;
//	return 0;
//}
//
