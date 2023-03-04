//#include <iostream>
//#include <string>
//#include <sstream>
//#include <algorithm>
//
//using namespace std;
//
//int main1725() {
//	stringstream os;
//	int num[256] = { 0 };
//	string str;
//	getline(cin, str);
//	for (int i = 0; i < str.length();) {
//		if (str[i] == ' ') {
//			i++;
//			continue;
//		}
//		os << ++num[str[i]];
//		str.insert(i + 1, os.str());
//		if (num[str[i]] <= 9)
//			i += 1;
//		else if (num[str[i]] <= 99)
//			i += 2;
//		else if (num[str[i]] <= 999)
//			i += 3;
//		else if (num[str[i]] <= 9999)
//			i += 4;
//		i++;
//		os.str("");
//	}
//	for (int i = str.length() - 1; i >= 0; i--)
//		cout << str[i];
//	//stringstream os;
//	//int cnt = 0;
//	//string str, s;
//	//getline(cin, str);
//	//for (int i = 0; i < str.length();) {
//	//	if ((i = str.find("skr", i)) != str.npos) {
//	//		cnt++;
//	//		os << cnt;
//	//		s = "V" + os.str();
//	//		os.str("");
//	//		str.replace(i, 3, s);
//	//	}
//	//	else
//	//		break;
//	//}
//	//for (int i = str.length(); i >= 0; i--)
//	//	cout << str[i];
//	return 0;
//}