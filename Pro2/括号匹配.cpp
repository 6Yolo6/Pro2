////#include <iostream>
////#include <stack>
////
////using namespace std;
////
////int main() {
////	stack<char> s;
////	string str;
////	cin >> str;
////	string::iterator i = str.begin();
////	if (*i == ')' || *i == ']' || *i == '}' || str.size() % 2 == 1) {
////		cout << "no" << endl;
////		return 0;
////	}
////	int left = 0, right = 0;
////	for (; i != str.end(); i++) {
////		if (*i == '(' || *i == '[' || *i == '{') {
////			s.push(*i);
////			left++;
////		}
////		else {
////			if (!s.empty()) {
////				if (s.top() == '(' && *i == ')')
////					s.pop();
////				else if (s.top() == '[' && *i == ']')
////					s.pop();
////				else if (s.top() == '{' && *i == '}')
////					s.pop();
////				right++;
////			}
////			else {
////				s.push('1');
////				break;
////			}
////		}
////	}
////	if (!s.empty() || left != right)
////		cout << "no" << endl;
////	else
////		cout << "yes" << endl;
////	return 0;
////}
//
//#include <iostream>
//#include <string>
//#include <stack>
//
//using namespace std;
//
//int main2151232() {
//	stack<char> s;
//	string str;
//	getline(cin, str, '\n');
//	string::iterator i = str.begin();
//	if (*i == ')') {
//		cout << "no" << endl;
//		return 0;
//	}
//	int left = 0, right = 0;
//	for (; i != str.end(); i++) {
//		if (*i == '(') {
//			s.push(*i);
//			left++;
//		}
//		else if (*i == ')') {
//			if (!s.empty()) {
//				if (s.top() == '(')
//					s.pop();
//			}
//			right++;
//		}
//	}
//	if (!s.empty() || left != right)
//		cout << "no" << endl;
//	else
//		cout << "yes" << endl;
//	return 0;
//}