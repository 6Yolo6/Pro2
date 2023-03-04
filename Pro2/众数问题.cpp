//#include <cstdio>
//#include <iostream>
//#include <fstream>
//#include <algorithm>
//
//using namespace std;
//int max_n = 0, max_num, t;
//
//void func(int* num, int start, int end) {
//	if (start < end) {
//		int mid = (start + end) / 2;
//		max_num = 0;
//		int i = mid;
//		while (num[i] == num[mid]) {
//			i--;
//			max_num++;
//		}
//		int left = i;
//		i = mid + 1;
//		while (num[i] == num[mid]) {
//			i++;
//			max_num++;
//		}
//		int right = end - i;
//		if (max_n < max_num) {
//			max_n = max_num;
//			t = num[mid];
//		}
//		if (left > max_num)
//			func(num, start, mid);
//		if (right > max_num)
//			func(num, mid + 1, end);
//	}
//}
//
//int main61564512121() {
//	ifstream fread("D:\\算法实验\\实验2 递归&分治\\2\\MAJORITY\\TEST\\MODE7.IN");
//	if (fread.fail()) {
//		cout << "打开文件失败" << endl;
//		exit(0);
//	}
//	int n;
//	fread >> n;
//	printf("%d\n", n);
//	int* num = new int[n];
//	for (int i = 0; i < n; i++) {
//		int m;
//		fread >> m;
//		num[i] = m;
//	}
//	sort(num, num + n);
//	func(num, 0, n - 1);
//	cout << t << endl << max_n;
//	delete[] num;
//	return 0;
//}