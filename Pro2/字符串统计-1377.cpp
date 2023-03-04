//#include<iostream>
//#include<string>
//#include<map>
//#include<algorithm>
//using namespace std;
//
//class cmp {
//public:
//	bool operator () (const pair<string, int>& a, const pair<string, int>& b) {
//		return a.second < b.second;
//	}
//};
//
//int main1377() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	int n;
//	cin >> n;
//	string s;
//	map<string, int> m;
//	while (n--) {
//		cin >> s;
//		m[s]++;
//	}
//	cout << max_element(m.begin(), m.end(), cmp())->first << endl;
//	return 0;
//}