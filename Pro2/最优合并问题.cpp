//#include <cstdio>
//#include <iostream>
//#include <fstream>
//#include <queue>
//
//using namespace std;
//
//int main() {
//	ifstream fread("D:\\算法实验\\5\\OPTIMAL MERGE\\TEST\\MERGE10.IN");
//	if (fread.fail()) {
//		cout << "打开文件失败" << endl;
//		exit(0);
//	}
//	int k, n, num, min = 0, max = 0;
//	fread >> k;
//	cout << k << endl;
//	priority_queue <int, vector<int>, greater<int> > q_min;
//	priority_queue <int, vector<int>, less<int> > q_max;
//	for (int i = 0; i < k; i++) {
//		fread >> n;
//		q_min.push(n);
//		q_max.push(n);
//	}
//	while (q_min.size() > 1 && q_max.size() > 1) {
//		num = 0;
//		num += q_min.top(); 
//		q_min.pop();
//		num += q_min.top();
//		q_min.pop();
//		q_min.push(num);
//		min += num - 1;
//
//		num = 0;
//		num += q_max.top(); 
//		q_max.pop();
//		num += q_max.top();
//		q_max.pop();
//		q_max.push(num);
//		max += num - 1;
//	}
//	cout << max << " " << min << endl;
//	return 0;
//}