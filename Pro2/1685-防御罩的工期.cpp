//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//struct Work {
//	int year;
//	int month;
//	Work(int year, int month) {
//		this->year = year;
//		this->month = month;
//	}
//	Work() {
//		this->year = 0;
//		this->month = 0;
//	}
//};
////按年从小到大
//bool greater_sort1(Work* w1, Work* w2) {
//	return w1->year < w2->year;
//}
//int main1685() {
//	Work work;
//	vector<Work*> v1;
//	int n, y, m;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> y;
//		cin.get();
//		cin >> m;
//		v1.push_back(new Work(y, m));
//	}
//	sort(v1.begin(), v1.end(), greater_sort1);
//	int min = v1[0]->month;
//	int max = v1[v1.size() - 1]->month;
//	for (int i = 1; i < n; i++) {
//		//cout << v1[i]->year << " " << v1[i]->month << " ";
//		if (v1[i]->year == v1[0]->year) {
//			if (v1[i]->month < min)
//				min = v1[i]->month;
//		}
//		if (v1[i]->year == v1[v1.size() - 1]->year) {
//			if (v1[i]->month > max)
//				max = v1[i]->month;
//		}
//	}
//	cout << (v1[v1.size() - 1]->year - v1[0]->year) * 60 + max - min;
//	return 0;
//}